#include "rf_phreaker/rf_phreaker_api/rf_phreaker_impl.h"
#include "rf_phreaker/rf_phreaker_api/log_handler.h"
#include "rf_phreaker/rf_phreaker_api/data_wrappers.h"
#include "rf_phreaker/rf_phreaker_api/rf_phreaker_conversion.h"
#include "rf_phreaker/common/exception_types.h"
#include "rf_phreaker/common/log.h"
#include "rf_phreaker/processing/measurement_conversion.h"
#include "rf_phreaker/processing/collection_info_container.h"
#include "rf_phreaker/processing/frequency_range_creation.h"
#include "rf_phreaker/processing/processing_utility.h"
#include "rf_phreaker/qt_specific/settings_io.h"
#include "rf_phreaker/qt_specific/file_path_validation.h"
#include "rf_phreaker/qt_specific/qt_utility.h"
#include "rf_phreaker/scanner/signal_level_calculator.h"
#include "tbb/task_scheduler_init.h"

namespace rf_phreaker { namespace api {


rf_phreaker_impl& rf_phreaker_impl::instance() {
	static rf_phreaker_impl impl;
	return impl;
}

rf_phreaker_impl::rf_phreaker_impl()
	: is_initialized_(false)
	, callbacks_(nullptr) 
{}

rf_phreaker_impl::~rf_phreaker_impl() {
	try {
		// Order of components is important when destructing.
		// VS 2013 bug can cause access violations when destructing at application's 
		// exit due to synchronization issues like acquiring a mutex.  
		gps_graph_.reset();
		processing_graph_.reset();
		frequency_correction_graph_.reset();
		data_output_.reset();
		handler_.reset();
		handler_pb_.reset();
		scanners_.clear();
		logger_.reset();
	}
	catch(...) {}
}

void rf_phreaker_impl::clear_queues() {
	if(data_output_)
		data_output_->clear_queue();
	if(scanners_.size()) {
		for(auto &s : scanners_)
			s->async_.clear_queue();
	}
	if(data_output_)
		data_output_->clear_and_wait(20, 200);
	if(scanners_.size()) {
		for(auto &s : scanners_)
			s->async_.clear_and_wait(20, 200);
	}
}

rp_status rf_phreaker_impl::initialize(rp_callbacks *callbacks) {
	rp_status s = RP_STATUS_OK;
	callbacks_ = nullptr;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		read_settings();

		// If logging fails continue anyway.
		try {
			// Only initialize logger the first time thru.
			if(!logger_) {
				if(!file_path_validation::is_path_valid(config_.output_directory_))
					file_path_validation::make_path(config_.output_directory_);
				logger_.reset(new logger("rf_phreaker_api", config_.output_directory_));
				auto tmp = std2::make_unique<log_handler>(callbacks);
				logger_->handler_->worker->addSink(std::move(tmp), &log_handler::receive_log_message);
			}
		}
		catch(...) {}

		LOG(LINFO) << "Initializing rf phreaker api version " << build_version() << ".";

		is_initialized_ = false;

		if(logger_) {
			logger_->change_logging_level(config_.log_level_);
			logger_->enable_collection_log(config_.log_collection_);
			logger_->enable_gps_general_log(config_.log_gps_general_);
			logger_->enable_gps_parsing_log(config_.log_gps_parsing_);
		}

		// Release all components before changing delegate.
		if(processing_graph_) {
			LOG(LDEBUG) << "Found processing graph on heap.  Sending cancel request and releasing it.";
			processing_graph_->cancel_and_wait();
			processing_graph_.reset();
		}
		if(gps_graph_) {
			LOG(LDEBUG) << "Found gps graph on heap.  Sending cancel request and releasing it.";
			gps_graph_->cancel_and_wait();
			gps_graph_.reset();
		}

		if(frequency_correction_graph_) {
			LOG(LDEBUG) << "Found frequency correction graph on heap.  Sending cancel request and releasing it.";
			frequency_correction_graph_->cancel_and_wait();
			frequency_correction_graph_.reset();
		}
		//if(data_output_)
		//	data_output_->clear_queue();
		data_output_.reset();
		handler_.reset();
		handler_pb_.reset();
		//if(scanners_.size()) {
		//	for(auto &s : scanners_)
		//		s->async_.clear_queue();
		//}
		scanners_.clear();

		callbacks_ = callbacks;
		delegate_sink::instance().connect_message(boost::bind(&rf_phreaker_impl::message_handling, this, _1, _2, _3)).get();
		delegate_sink::instance().connect_error(boost::bind(&rf_phreaker_impl::error_handling, this, _1, _2, _3)).get();


		data_output_.reset(new processing::data_output_async());
		if(callbacks_->rp_device_info_update || callbacks_->rp_gps_update || callbacks_->rp_gsm_sweep_update || callbacks_->rp_gsm_full_scan_update
			|| callbacks_->rp_log_update || callbacks_->rp_lte_sweep_update || callbacks_->rp_lte_full_scan_update || callbacks_->rp_message_update
			|| callbacks_->rp_iq_data_update || callbacks_->rp_wcdma_sweep_update || callbacks_->rp_wcdma_full_scan_update)
			handler_.reset(new rf_phreaker_handler(data_output_.get(), callbacks));
		if(callbacks_->rp_update)
			handler_pb_.reset(new rf_phreaker_handler_protobuf(data_output_.get(), callbacks));
		processing_graph_.reset(new processing::processing_graph());
		gps_graph_.reset(new processing::gps_graph());
		frequency_correction_graph_.reset(new processing::frequency_correction_graph());

		data_output_->set_output_path(config_.output_directory_);
		data_output_->set_file_output(config_.file_output_);
		data_output_->set_standard_output(config_.standard_output_);
		data_output_->set_signal_output(config_.signal_slots_);

		processing::initialize_collection_info_defaults(config_);

		LOG(LINFO) << "Initialization complete.";
		is_initialized_ = true;
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

void rf_phreaker_impl::read_settings() {
	settings_io io("rf_phreaker_api", qt_utility::app_name());
	
	if(!io.does_exist()) {
		error_handling("The INI file (\"" + io.filename() +
			"\") was not found.  This may adversely affect API functionality.",
			rf_phreaker_api_error_type, CONFIGURATION_FILE_NOT_FOUND);
	}

	io.read(config_);
	config_.lte_sweep_general_.psch_margin_ = 13;
	config_.lte_layer_3_general_.psch_margin_ = 13; // not used
	config_.offload_umts_full_scan_ = true;
	config_.have_common_sweep_output_ = false;
}

rp_status rf_phreaker_impl::clean_up() {
	if(!is_initialized_)
		return RP_STATUS_NOT_INITIALIZED;

	rp_status s = RP_STATUS_OK;
	try {
		LOG(LINFO) << "Cleaning up...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		// Do more!
		if(processing_graph_) {
			LOG(LVERBOSE) << "Waiting for processing graph...";
			processing_graph_->cancel_and_wait();
		}
		if(gps_graph_) {
			LOG(LVERBOSE) << "Waiting for gps graph...";
			gps_graph_->cancel_and_wait();
		}
		if(frequency_correction_graph_) {
			LOG(LVERBOSE) << "Waiting for frequency correction graph...";
			frequency_correction_graph_->cancel_and_wait();
		}
		gps_graph_.reset();
		processing_graph_.reset();
		frequency_correction_graph_.reset();
		handler_.reset();
		handler_pb_.reset();
		clear_queues();
		data_output_.reset();
		scanners_.clear();
		LOG(LINFO) << "Cleaned up successfully.";
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}

	try {
		logger_.reset();
	}
	catch(...) {}

	return s;
}

rp_status rf_phreaker_impl::list_devices(rp_serial *serials, int *num_serials) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Listing devices...";

		if(!is_initialized_)
			throw rf_phreaker_api_error("Not initialized.", NOT_INITIALIZED);
		else if(serials == nullptr)
			throw rf_phreaker_api_error("Null serials.", INVALID_PARAMETER);
		else if(num_serials == nullptr)
			throw rf_phreaker_api_error("Null num_serials.", INVALID_PARAMETER);
		else if(*num_serials <= 0)
			throw rf_phreaker_api_error("num_serials <= 0.", INVALID_PARAMETER);

		for(int i = 0; i < *num_serials; ++i)
			memset(serials[i].serial_, 0, RP_SERIAL_LENGTH);

		scanner::blade_rf_controller tmp_blade(rf_phreaker::scanner::USB_BLADE_RF);
		tmp_blade.set_log_level(config_.blade_settings_.log_level_);

		auto scanner_list = tmp_blade.list_available_scanners();
		// Sometimes the libbladeRF reports there is a connected device but does not give serial.
		// Requesting the list again seems to fix it.
		if(scanner_list.size() && (*scanner_list.begin())->id() == "")
			scanner_list = tmp_blade.list_available_scanners();

		if((size_t)*num_serials < scanner_list.size())
			throw rf_phreaker_api_error("Error while listing devices.  More devices than input buffer.", INVALID_PARAMETER);

		*num_serials = scanner_list.size();

		int i = 0;
		for(auto &device : scanner_list)
			copy_serial(device->id(), serials[i++]);

		LOG(LINFO) << "Listed units successfully.";
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::connect_device(rp_serial serial, rp_device **device_ptr) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Opening device " << serial.serial_ << "...";

		if(!is_initialized_)
			throw rf_phreaker_api_error("Not initialized.", NOT_INITIALIZED);
		else if(serial.serial_ == nullptr)
			throw rf_phreaker_api_error("NULL serial.", INVALID_PARAMETER);
		else if(device_ptr == nullptr)
			throw rf_phreaker_api_error("NULL rp_device.", INVALID_PARAMETER);

		*device_ptr = 0;

		std::string serial_str(serial.serial_);
		for(auto &i : scanners_) {
			if(i->async_.get_scanner().get() != nullptr &&
				i->async_.get_scanner().get()->get_hardware().serial_ == serial_str) {
				LOG(LINFO) << "Device " << serial_str << " is already open.  Disconnecting device before reconnecting...";
				disconnect_device(i.get());
				break;
			}
		}

		// Read settings in case anything parameters have changed.
		read_settings();

		scanners_.push_back(std::make_shared<rp_device>(rf_phreaker::scanner::USB_BLADE_RF));
		rp_device *device = scanners_.rbegin()->get();

		device->async_.open_scanner_and_refresh_scanner_info(serial.serial_).get();

		device->async_.do_initial_scanner_config(config_.blade_settings_).get();

		auto hw = device->async_.get_scanner().get()->get_hardware();

		if(handler_)
			handler_->output_device_info(hw);
		if(handler_pb_)
			handler_pb_->output_device_info(hw);

		gps_graph_->start(&device->async_, data_output_.get(), config_);

		*device_ptr = device;

		LOG(LINFO) << "Opened device " << serial.serial_ << " successfully.";
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::disconnect_device(rp_device *device) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		auto serial = device->async_.get_scanner().get()->get_hardware().serial_;

		LOG(LINFO) << "Disconnecting device " << serial << "...";

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(gps_graph_)
			gps_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		// Write gps 1pps calibration to EEPROM if neccessary.
		auto hw = device->async_.get_scanner().get()->get_hardware();
		auto gps_1pps = device->async_.get_last_valid_gps_1pps_integration().get();
		auto time_diff = gps_1pps.time_calculated() - hw.frequency_correction_calibration_date_;
		LOG(LDEBUG) << "Frequency correction value last updated on " << boost::posix_time::to_simple_string(boost::posix_time::from_time_t(hw.frequency_correction_calibration_date_)) << ".";

		if(gps_1pps.is_valid()) {
			LOG(LDEBUG) << "GPS 1PPS calibration last occurred on " << boost::posix_time::to_simple_string(boost::posix_time::from_time_t(gps_1pps.time_calculated())) << ".";
		}
		else {
			LOG(LDEBUG) << "GPS 1PPS calibration did not occur.";
		}
		if(gps_1pps.is_valid() && processing::g_scanner_error_tracker::instance().has_passed_settling_time() && time_diff > config_.eeprom_update_period_for_1pps_calibration_minutes_ * 60) {
			LOG(LDEBUG) << "Storing latest GPS 1PPS calibration using " << gps_1pps.clock_ticks() << " clock ticks for an error of " << gps_1pps.error_in_hz() << " Hz.";
			device->async_.calculate_vctcxo_trim_and_update_eeprom(gps_1pps.error_in_hz());
		}

		device->async_.close_scanner().get();
		//device->async_.clear_queue();

		// Remove this ptr and any scanner nulls that may be in there.
		scanners_.erase(std::find_if(scanners_.begin(), scanners_.end(), [&](const std::shared_ptr<rp_device> &p) {
			return p.get() == device || p.get()->async_.get_scanner().get() == nullptr;
		}), scanners_.end());

		LOG(LINFO) << "Closed device " << serial << " successfully.";
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

void rf_phreaker_impl::general_checks(rp_device *device) {
	if(!is_initialized_)
		throw rf_phreaker_api_error("Not initialized.", NOT_INITIALIZED);
	else if(!check_rp_device(device))
		throw rf_phreaker_api_error("Invalid rp_device.", INVALID_PARAMETER);
}

bool rf_phreaker_impl::is_device_open(rp_device *device) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		auto scanner = device->async_.get_scanner().get();
		if(!scanner)
			s = RP_STATUS_INVALID_PARAMETER;

		// If we get here then the scanner is valid and considered open.
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s == RP_STATUS_OK;
}

rp_status rf_phreaker_impl::get_device_info(rp_device *device, rp_device_info *device_info) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		if(!is_initialized_)
			throw rf_phreaker_api_error("Not initialized.", NOT_INITIALIZED);
		else if(!check_rp_device(device))
			throw rf_phreaker_api_error("Invalid rp_device.", INVALID_PARAMETER);

		*device_info = hardware_wrap(device->async_.get_scanner().get()->get_hardware()).buf_;
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::add_gsm_collection_frequencies(rp_device *device, const rp_frequency_band_group &rp_gsm) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		if(rp_gsm.size_ == 0)
			return s;

		general_checks(device);

		auto hw = device->async_.get_scanner().get()->get_hardware();

		// Verify license and calibration and add for sorting.
		std::vector<std::pair<operating_band, frequency_type>> gsm_freqs;
		for(int i = 0; i < rp_gsm.size_; ++i) {
			LOG(LINFO) << "Adding frequency (" << rp_gsm.e_[i].freq_ << ").";
			check_calibration(hw, rp_gsm.e_[i].freq_);
			// Check for license.
			gsm_freqs.push_back(std::make_pair(to_operating_band(rp_gsm.e_[i].band_), rp_gsm.e_[i].freq_));
		}

		// Sort the gsm freqs that are to be added.
		std::sort(std::begin(gsm_freqs), std::end(gsm_freqs), [&](const std::pair<operating_band, frequency_type> &a, const std::pair<operating_band, frequency_type> &b) {
			if(a.first == b.first) return a.second < b.second;
			else return a.first < b.first;
		});

		gsm_frequency_tracker tracker;
		std::vector<std::pair<operating_band, frequency_type>> new_gsm;
		auto i = gsm_freqs.begin();
		while(i != gsm_freqs.end()) {
			if(tracker.do_we_add_freq(i->second)) {
				auto freq = tracker.calculate_closest_freq(i->second, i->first);
				// Because we're adjusting the freq there is a chance the adjusted freq is not in the cali table
				// If so, add the original file (which has already been checked) and continue.
				if(!rf_phreaker::is_within_freq_paths(hw.frequency_paths_, freq))
					freq = i->second;
				new_gsm.push_back(std::make_pair(i->first, freq));
				tracker.insert(freq);
			}
			++i;
		}

		auto specifier = GSM_LAYER_3_DECODE;
		auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(specifier);
		});

		if(it == containers_.end()) {
			// If simultaneous collection is enabled we do not want to stop collection after one iteration of freqs.
			containers_.push_back(collection_info_container(specifier, find_collection_settings(specifier, config_).is_streaming_));
			it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
				return c.has_specifier(specifier);
			});
		}

		add_collection_info ci;
		for(auto &i : new_gsm)
			ci.add_.push_back(create_tech_collection_info(specifier, i.second, i.first));

		it->adjust(ci);
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::add_collection_frequency(rp_device *device, rp_frequency_type freq, rp_operating_band rp_band) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Adding frequency (" << freq << ").";

		general_checks(device);

		auto hw = device->async_.get_scanner().get()->get_hardware();

		check_calibration(hw, freq);

		// Check for license.

		auto band = to_operating_band(rp_band);
		auto specifier = to_layer_3_specifier(band);
		auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(specifier);
		});

		if(it == containers_.end()) {
			// If simultaneous collection is enabled we do not want to stop collection after one iteration of freqs.
			containers_.push_back(collection_info_container(specifier, find_collection_settings(specifier, config_).is_streaming_));
			it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
				return c.has_specifier(specifier);
			});
		}

		it->adjust(add_collection_info(create_tech_collection_info(specifier, (frequency_type)freq, band)));

		// Add to processing graph?
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::add_power_spectrum_frequency(rp_device *device, const rp_power_spectrum_spec &spec) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Adding rp_power_spectrum_spec {start_freq: " << spec.start_frequency_ << ", span: " << spec.span_ 
			<< ", dwell_time: " << spec.dwell_time_ << ", bin_size: " << spec.bin_size_ << ".";

		general_checks(device);

		auto hw = device->async_.get_scanner().get()->get_hardware();

		check_power_spectrum_spec(spec);

		// Determine collection parameters.
		power_spectrum_approximator approx;
		approx.determine_spectrum_parameters(spec.start_frequency_, spec.span_, spec.bin_size_, spec.dwell_time_, spec.identifier_);

		// Ensure we can collect on center freqs.
		for(auto t : approx.power_specs()) {
			check_calibration(hw, std::get<frequency_type>(t));
		}

		// Check for license.

		auto specifier = POWER_SPECTRUM;
		auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(specifier);
		});

		if(it == containers_.end()) {
			// If simultaneous collection is enabled we do not want to stop collection after one iteration of freqs.
			containers_.push_back(collection_info_container(specifier, false));
			it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
				return c.has_specifier(specifier);
			});
		}

		for(auto t : approx.power_specs()) {
			// We use the span as the bandwidth knowing that if will be bumped up to the next valid bandwidth.
			// power_spectrum_approximator takes into account the scanner's valid bandwidth when calculating specs.
			auto s = std::get<power_spectrum_spec>(t);
			auto f = std::get<frequency_type>(t);
			auto b = std::get<bandwidth_type>(t);
			it->adjust(add_collection_info(rf_phreaker::processing::power_spectrum_collection_info(f, s.dwell_time_, 0,
				b, s.sampling_rate_, s)));
		}
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

void rf_phreaker_impl::check_power_spectrum_spec(const rp_power_spectrum_spec &spec) {
	auto min_bin_size = 100;
	auto max_bin_size = mhz(5);
	auto min_dwell_time = milli_to_nano(2);
	auto max_dwell_time = milli_to_nano(2000);

	if(spec.bin_size_ < min_bin_size)
		throw rf_phreaker_api_error("power spectrum bin size is too small.  Smallest allowed bin size is "
			+ std::to_string(min_bin_size));
	else if(spec.bin_size_ > max_bin_size)
		throw rf_phreaker_api_error("power spectrum bin size is too large.  Largest allowed bin size is "
			+ std::to_string(max_bin_size));
	else if(spec.dwell_time_ < min_dwell_time)
		throw rf_phreaker_api_error("power spectrum dwell time is too small.  Smallest allowed dwell time is "
			+ std::to_string(min_dwell_time));
	else if(spec.dwell_time_ > max_dwell_time)
		throw rf_phreaker_api_error("power spectrum dwell time is too large.  Largest allowed dwell time is "
			+ std::to_string(max_dwell_time));
}

rp_status rf_phreaker_impl::add_iq_data_frequency(rp_device *device, const rp_iq_data_spec &spec) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Adding iq data spec { center_freq: " << spec.center_frequency_ << ", dwell_time: " << spec.dwell_time_
			<< ", bandwidth: " << spec.bandwidth_ << ", sampling_rate: " << spec.sampling_rate_ << ".";

		general_checks(device);

		auto hw = device->async_.get_scanner().get()->get_hardware();

		check_calibration(hw, spec.center_frequency_);

		check_iq_data_spec(spec);

		// Check for license.

		auto specifier = IQ_DATA;
		auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(specifier);
		});

		if(it == containers_.end()) {
			// If simultaneous collection is enabled we do not want to stop collection after one iteration of freqs.
			containers_.push_back(collection_info_container(specifier, false));
			it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
				return c.has_specifier(specifier);
			});
		}

		it->adjust(add_collection_info(collection_info(spec.center_frequency_, spec.dwell_time_, 0, spec.bandwidth_, spec.sampling_rate_, specifier)));
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

void rf_phreaker_impl::check_iq_data_spec(const rp_iq_data_spec &spec) {
	auto min_dwell_time = milli_to_nano(2);
	auto max_dwell_time = milli_to_nano(2000);
	auto min_sampling_rate = khz(160);
	auto max_sampling_rate = mhz(40);
	auto min_bandwidth = 1400;
	auto max_bandwidth = mhz(28);

	if(spec.dwell_time_ < min_dwell_time)
		throw rf_phreaker_api_error("iq_data dwell time is too small.  Smallest allowed dwell time is "
			+ std::to_string(min_dwell_time));
	else if(spec.dwell_time_ > max_dwell_time)
		throw rf_phreaker_api_error("iq_data dwell time is too large.  Largest allowed dwell time is "
			+ std::to_string(max_dwell_time));
	else if(spec.sampling_rate_ < min_sampling_rate)
		throw rf_phreaker_api_error("iq_data bin size is too small.  Smallest allowed sampling rate is "
			+ std::to_string(min_sampling_rate));
	else if(spec.sampling_rate_ > max_sampling_rate)
		throw rf_phreaker_api_error("iq_data bin size is too large.  Largest allowed sampling rate is "
			+ std::to_string(max_sampling_rate));
	else if(spec.bandwidth_ < min_bandwidth)
		throw rf_phreaker_api_error("iq_data bandwidth is too small.  Smallest allowed bandwidth is "
			+ std::to_string(min_bandwidth));
	else if(spec.bandwidth_ > max_bandwidth)
		throw rf_phreaker_api_error("iq_data bandwidth is too large.  Largest allowed bandwidth is "
			+ std::to_string(max_bandwidth));
}

void rf_phreaker_impl::check_calibration(hardware hw, frequency_type freq) {
	// Check for calibration.
	if(!rf_phreaker::is_within_freq_paths(hw.frequency_paths_, freq))
		throw rf_phreaker_api_error("Frequency (" + std::to_string(freq / 1e6) + " mhz) is not within calibration limits.", CALIBRATION_ERROR);
}

rp_status rf_phreaker_impl::remove_collection_frequency(rp_device *device, rp_frequency_type freq, rp_operating_band rp_band) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Removing frequency (" << freq << ")";

		general_checks(device);

		auto band = to_operating_band(rp_band);
		auto specifier = to_layer_3_specifier(band);
		auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(specifier);
		});

		if(it == containers_.end()) {
			it->adjust(remove_collection_info(create_tech_collection_info(specifier, (frequency_type)freq, band)));
		}
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

//rp_status rf_phreaker_impl::add_collection_channel(rp_technology data, rp_channel_type channel) {
//	using namespace ::rf_phreaker::processing;
//	rp_status s = RP_STATUS_OK;
//	try {
//		std::lock_guard<std::recursive_mutex> lock(mutex_);
//
//		if(!is_initialized_)
//			throw rf_phreaker_api_error("Not initialized.", NOT_INITIALIZED);
//		else if(data == RAW_DATA)
//			throw rf_phreaker_api_error("Invalid rp_technology - RAW_DATA does not have associated channels.", INVALID_PARAMETER);
//
//		auto specifier = to_layer_3_specifier(data);
//
//
//	}
//	catch(const rf_phreaker_error &err) {
//		s = to_rp_status(err);
//		save_error(err.what(), err.error_type_, err.error_code_);
//	}
//	catch(const std::exception &err) {
//		s = RP_STATUS_GENERIC_ERROR;
//		save_error(err.what(), generic_error_type);
//	}
//	catch(...) {
//		s = RP_STATUS_UNKNOWN_ERROR;
//		save_error("an unknown error has occurred", unknown_error_type);
//	}
//	return s;
//}

rp_status rf_phreaker_impl::add_sweep_operating_band(rp_device *device, rp_operating_band rp_band) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto band = to_operating_band(rp_band);

		LOG(LINFO) << "Adding operating band (" << to_string(band) << ").";

		general_checks(device);

		auto hw = device->async_.get_scanner().get()->get_hardware();

		// Check for calibration.
		auto range = operating_bands_.get_band_freq_range(band);
		if(!rf_phreaker::is_within_freq_paths(hw.frequency_paths_, range.low_freq_hz_, range.high_freq_hz_))
			throw rf_phreaker_api_error("rp_operating_band is not within calibration limits.  Start freq: " +
			std::to_string(range.low_freq_hz_ / 1e6) + ".  Stop freq: " + std::to_string(range.high_freq_hz_ / 1e6) + ".", CALIBRATION_ERROR);

		// Check license.

		collection_info_containers::iterator it;

		if(band >= FIRST_UMTS_OPERATING_BAND && band <= LAST_UMTS_OPERATING_BAND) {
			it = add_sweep(UMTS_SWEEP, UMTS_LAYER_3_DECODE);
			auto sweep = UMTS_SWEEP;
			frequency_range_creation::adjust_umts_sweep_collection_info_with_adjustment(range, *it,
				find_collection_settings(sweep, config_).low_intermediate_frequency_,
				find_collection_settings(sweep, config_).high_intermediate_frequency_,
				find_collection_settings(sweep, config_).step_size_);
		}
		else if(band >= FIRST_LTE_OPERATING_BAND && band <= LAST_LTE_OPERATING_BAND) {
			it = add_sweep(LTE_SWEEP, LTE_LAYER_3_DECODE);
			auto sweep = LTE_SWEEP;
			frequency_range_creation::adjust_lte_sweep_collection_info_with_adjustment(range, *it,
				find_collection_settings(sweep, config_).low_intermediate_frequency_,
				find_collection_settings(sweep, config_).high_intermediate_frequency_,
				find_collection_settings(sweep, config_).step_size_);
		}
		else if(band >= FIRST_GSM_OPERATING_BAND && band <= LAST_GSM_OPERATING_BAND) {
			auto sweep = GSM_SWEEP;
			it = add_sweep(GSM_SWEEP, GSM_LAYER_3_DECODE);
			frequency_range_creation::adjust_gsm_sweep_collection_info_with_adjustment(range, *it);
		}

		// We sort the sweep items to make sure they are in ascending order.  This makes the graphs look pretty in the output.
		std::sort(it->collection_info_group_.begin(), it->collection_info_group_.end(), [&](const collection_info &a, const collection_info &b) {
			return a.freq_ < b.freq_;
		});
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

processing::collection_info_containers::iterator rf_phreaker_impl::add_sweep(specifier sweep, specifier decode) {
	using namespace ::rf_phreaker::processing;
	auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
		return c.has_specifier(sweep);
	});
	if(it == containers_.end()) {
		it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(GSM_SWEEP) || c.has_specifier(UMTS_SWEEP) || c.has_specifier(LTE_SWEEP) || c.has_specifier(CDMA_SWEEP);
		});

		if(it != containers_.end()) 
			it->add_specifier(sweep);
		else 
			containers_.push_back(collection_info_container(sweep, find_collection_settings(sweep, config_).is_streaming_));

		auto tmp = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(decode);
		});
		if(tmp == containers_.end())
			containers_.push_back(collection_info_container(decode, find_collection_settings(decode, config_).is_streaming_));

		// We make sure the iterator to the sweep container is valid by getting it after all the insertions have occurred.
		it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
			return c.has_specifier(sweep);
		});
	}
	return it;
}

rp_status rf_phreaker_impl::remove_sweep_operating_band(rp_device *device, rp_operating_band rp_band) {
	using namespace ::rf_phreaker::processing;
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto band = to_operating_band(rp_band);

		LOG(LINFO) << "Removing operating band (" << to_string(band) << ")";

		general_checks(device);

		if(band >= FIRST_UMTS_OPERATING_BAND && band <= LAST_UMTS_OPERATING_BAND) {
			remove_sweep(band, UMTS_SWEEP);
		}
		else if(band >= FIRST_LTE_OPERATING_BAND && band <= LAST_LTE_OPERATING_BAND) {
			remove_sweep(band, LTE_SWEEP);
		}
		else if(band >= FIRST_GSM_OPERATING_BAND && band <= LAST_GSM_OPERATING_BAND) {
			remove_sweep(band, GSM_SWEEP);
		}
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

void rf_phreaker_impl::remove_sweep(operating_band band, specifier sweep) {
	using namespace ::rf_phreaker::processing;
	auto it = std::find_if(containers_.begin(), containers_.end(), [&](const collection_info_container &c) {
		return c.has_specifier(sweep);
	});
	if(it != containers_.end()) {
		auto range = operating_bands_.get_band_freq_range(band);
		collection_info_container tmp;
		switch(sweep) {
		case UMTS_SWEEP:
			frequency_range_creation::adjust_umts_sweep_collection_info_with_adjustment(range, tmp,
				find_collection_settings(sweep, config_).low_intermediate_frequency_,
				find_collection_settings(sweep, config_).high_intermediate_frequency_,
				find_collection_settings(sweep, config_).step_size_);
			break;
		case LTE_SWEEP:
			frequency_range_creation::adjust_lte_sweep_collection_info_with_adjustment(range, tmp, 
				find_collection_settings(sweep, config_).low_intermediate_frequency_, 
				find_collection_settings(sweep, config_).high_intermediate_frequency_, 
				find_collection_settings(sweep, config_).step_size_);
			break;
		case GSM_SWEEP:
			frequency_range_creation::adjust_gsm_sweep_collection_info_with_adjustment(range, tmp);
			break;
		default:
			;
		}
		for(auto &info : tmp.collection_info_group_)
			it->adjust(remove_collection_info(info));
	}
}

rp_status rf_phreaker_impl::remove_collection_frequencies_and_bands(rp_device *device) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Removing all collection frequencies and bands.";

		general_checks(device);

		containers_.clear();
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::start_collection(rp_device *device, const rp_collection_info *info) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		LOG(LINFO) << "Starting collection.";

		general_checks(device);
		if(info == nullptr)
			throw rf_phreaker_api_error("rp_collection_info is null", INVALID_PARAMETER);

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		remove_collection_frequencies_and_bands(device);

		// Initialize packet sizes.
		read_settings();
		processing::initialize_collection_info_defaults(config_);

		// GSM is a special case because it's usually a range of 200khz channels that are added which means we have to determine
		// the freqs to dwell on.
		add_gsm_collection_frequencies(device, info->gsm_);

		for(int i = 0; i < info->wcdma_.size_; ++i) {
			rp_status status = add_collection_frequency(device, info->wcdma_.e_[i].freq_, info->wcdma_.e_[i].band_);
			if(status != RP_STATUS_OK)
				return status;
		}
		for(int i = 0; i < info->lte_.size_; ++i) {
			rp_status status = add_collection_frequency(device, info->lte_.e_[i].freq_, info->lte_.e_[i].band_);
			if(status != RP_STATUS_OK)
				return status;
		}
		for(int i = 0; i < info->power_spectrum_spec_.size_; ++i) {
			rp_status status = add_power_spectrum_frequency(device, info->power_spectrum_spec_.e_[i]);
			if(status != RP_STATUS_OK)
				return status;
		}
		for(int i = 0; i < info->iq_data_.size_; ++i) {
			rp_status status = add_iq_data_frequency(device, info->iq_data_.e_[i]);
			if(status != RP_STATUS_OK)
				return status;
		}
		for(int i = 0; i < info->sweep_.size_; ++i) {
			rp_status status = add_sweep_operating_band(device, info->sweep_.e_[i]);
			if(status != RP_STATUS_OK)
				return status;
		}

		if(containers_.empty())
			throw rf_phreaker_api_error("rp_collection_info is empty", INVALID_PARAMETER);

		processing_graph_->start(&device->async_, data_output_.get(), containers_, config_);
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::stop_collection(rp_device *device) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		LOG(LINFO) << "Stopping collection.";

		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		//if(data_output_)
		//	data_output_->clear_queue();

		// Remove any frequencies that were added during sweeps.
		for(auto &c : containers_) {
			for(auto &i : c.collection_info_group_) {
				if(i.can_remove_)
					c.adjust(processing::remove_collection_info(i));
			}
		}
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::get_gps_data(rp_device *device, rp_gps gps) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		LOG(LDEBUG) << "Retrieving GPS data.";

		auto g = device->async_.get_gps_data().get();

		gps = gps_wrap(g).buf_;
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::get_iq_data(rp_device *device, rp_frequency_type frequency, rp_time_type time_ns,
	rp_bandwidth_type bandwidth, rp_frequency_type sampling_rate, int gain_db, rp_iq_data *iq_data) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		if(iq_data == nullptr)
			throw rf_phreaker_api_error("Null rp_iq_data.", INVALID_PARAMETER);
		else if(time_ns < 0)
			throw rf_phreaker_api_error("Invalid time.", INVALID_PARAMETER);

		auto hw = device->async_.get_scanner();

		// check license

		rp_iq_data_spec spec;
		spec.center_frequency_ = frequency;
		spec.dwell_time_ = time_ns;
		spec.bandwidth_ = bandwidth;
		spec.sampling_rate_ = sampling_rate;
		check_iq_data_spec(spec);

		check_calibration(hw.get()->get_hardware(), frequency);

		auto meas = gain_db < 0
			? device->async_.get_rf_data(frequency, time_ns, bandwidth, sampling_rate).get()
			: device->async_.get_rf_data(frequency, time_ns, bandwidth, gain_db, sampling_rate).get();

		auto internal_iq = processing::convert_to_iq_data(meas);
		iq_data_wrap::convert_primitives(internal_iq, *iq_data);
		iq_data_wrap::convert_power_adj_vector(internal_iq, iq_data->power_adjustment_.power_, iq_data->power_adjustment_.num_power_);
		iq_data_wrap::convert_samples_vector(internal_iq, iq_data->samples_, iq_data->num_samples_, iq_data->sample_format_);
	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

rp_status rf_phreaker_impl::update_license(rp_device *device, const char *filename) {
	rp_status s = RP_STATUS_OK;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		general_checks(device);

		if(filename == nullptr)
			throw rf_phreaker_api_error("filename is null", INVALID_PARAMETER);

		throw rf_phreaker_api_error("update_license is not supported.", LICENSE_ERROR);

	}
	catch(const rf_phreaker_error &err) {
		s = to_rp_status(err);
		save_error(err.what(), err.error_type_, err.error_code_);
	}
	catch(const std::exception &err) {
		s = RP_STATUS_GENERIC_ERROR;
		save_error(err.what(), generic_error_type);
	}
	catch(...) {
		s = RP_STATUS_UNKNOWN_ERROR;
		save_error("an unknown error has occurred", unknown_error_type);
	}
	return s;
}

const char* rf_phreaker_impl::status_message(rp_status status) {
	char *s;
	switch(status) {
	case RP_STATUS_OK:
		s = "success";
		break;
	case RP_STATUS_NOT_INITIALIZED:
		s = "rf_phreaker is not initialized";
		break;
	case RP_STATUS_GENERIC_ERROR:
		s = "generic error";
		break;
	case RP_STATUS_COMMUNICATION_ERROR:
		s = "communication error";
		break;
	case RP_STATUS_SCANNER_INIT_ERROR:
		s = "scanner initialization error";
		break;
	case RP_STATUS_HARDWARE_INFO_ERROR:
		s = "hardware info error";
		break;
	case RP_STATUS_MISC_ERROR:
		s = "miscellaneous error";
		break;
	case RP_STATUS_FILE_IO_ERROR:
		s = "file io error";
		break;
	case RP_STATUS_BLADE_RF_ERROR:
		s = "rf_phreaker scanner error";
		break;
	case RP_STATUS_IPP_ERROR:
		s = "ipp error";
		break;
	case RP_STATUS_FILTER_ERROR:
		s = "filter error";
		break;
	case RP_STATUS_GSM_ANALYSIS_ERROR:
		s = "gsm analysis error";
		break;
	case RP_STATUS_UMTS_ANALYSIS_ERROR:
		s = "umts analysis error";
		break;
	case RP_STATUS_LTE_ANALYSIS_ERROR:
		s = "lte analysis error";
		break;
	case RP_STATUS_PROCESSING_ERROR:
		s = "processing error";
		break;
	case RP_STATUS_GPS_COMMUNICATION_ERROR:
		s = "gps communication error";
		break;
	case RP_STATUS_RF_PHREAKER_API_ERROR:
		s = "rf_phreaker api error";
		break;
	case RP_STATUS_LICENSE_ERROR:
		s = "license error";
		break;
	case RP_STATUS_CONFIGURATION_FILE_NOT_FOUND:
		s = "configuration file not found";
		break;
	case RP_STATUS_CONVERSION_ERROR:
		s = "conversion error";
		break;
	case RP_STATUS_UNKNOWN_ERROR:
		s = "unknown error";
		break;
	default:
		s = "unknown status";
	}
	return s;
}

const char* rf_phreaker_impl::build_version() {
	return "1.3.0.0";
}

void rf_phreaker_impl::message_handling(const std::string &str, int type, int code) {
	if(callbacks_ && callbacks_->rp_message_update) {
		callbacks_->rp_message_update(RP_STATUS_OK, str.c_str());
	}
	if(callbacks_ && callbacks_->rp_update) {
		std::lock_guard<std::mutex> lock(update_mutex_);
		update_.populate_message(RP_STATUS_OK, str.c_str());
		update_.serialize();
		callbacks_->rp_update(update_.to_bytes(), update_.size());
	}
}

void rf_phreaker_impl::error_handling(const std::string &str, int type, int code) {
	// Until we have a better handle on how specific errors should be handled.  We stop all communication to scanner.
	bool disconnect = false;
	switch((message_codes)code) {
		case GENERAL_ERROR:
		case STD_EXCEPTION_ERROR:
		case UNKNOWN_ERROR:
		case CONVERSION_ERROR:
			disconnect = true;
			break;
		case CALIBRATION_ERROR:
		case EEPROM_ERROR:
		case FREQUENCY_CORRECTION_FAILED:
		case FREQUENCY_CORRECTION_VALUE_INVALID:
		case FREQUENCY_CORRECTION_SUCCESSFUL:
		case LICENSE_ERROR:
		case CONFIGURATION_FILE_NOT_FOUND:
		case COLLECTION_FINISHED:
			disconnect = false;
			break;
		default:
			disconnect = true;
			;
	}
	if(disconnect && scanners_.rbegin() != scanners_.rend()) {
		rp_disconnect_device(scanners_.rbegin()->get());
	}

	auto rp_status = code == GENERAL_ERROR ? to_rp_status(static_cast<error_type>(type)) 
		: to_rp_status(static_cast<message_codes>(code));

	if(callbacks_ && callbacks_->rp_message_update) {
		callbacks_->rp_message_update(rp_status, str.c_str());
	}
	if(callbacks_ && callbacks_->rp_update) {
		std::lock_guard<std::mutex> lock(update_mutex_);
		update_.populate_message(rp_status, str.c_str());
		update_.serialize();
		callbacks_->rp_update(update_.to_bytes(), update_.size());
	}

	save_error(str, type, code);
}

const char* rf_phreaker_impl::last_error_message() {
	if(error_history_.size())
		return error_history_.back().what();
	else
		return "";
}

void rf_phreaker_impl::save_error(const rf_phreaker_error &err) {
	std::lock_guard<std::recursive_mutex> lock(mutex_);
	error_history_.push_back(err);
}

void rf_phreaker_impl::save_error(const std::string &str, int type, int code) {
	save_error(rf_phreaker::create_error(static_cast<rf_phreaker::error_type>(type), str, code));
}


}}
