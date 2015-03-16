#include "rf_phreaker/cappeen/cappeen_impl.h"
#include "rf_phreaker/cappeen/operating_band_conversion.h"
#include "rf_phreaker/cappeen/beagle_defines.h"
#include "rf_phreaker/qt_specific/settings_io.h"
#include "rf_phreaker/qt_specific/file_path_validation.h"
#include "rf_phreaker/common/exception_types.h"
#include "rf_phreaker/processing/frequency_range_creation.h"
#include "rf_phreaker/qt_specific/qt_utility.h"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace rf_phreaker;
using namespace rf_phreaker::cappeen_api;
using namespace beagle_api;

cappeen_impl::cappeen_impl()
: is_initialized_(false)
{
}

cappeen_impl::~cappeen_impl()
{
	try {
		// Order of components is important when destructing.
		gps_graph_.reset();
		processing_graph_.reset();
		frequency_correction_graph_.reset();
		data_output_.reset();
		scanner_.reset();
		delegate_.reset();
		logger_.reset();
	}
	catch(...) {}
}

long cappeen_impl::initialize(beagle_api::beagle_delegate *del)
{
	int status = 0;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		read_settings();

		// If logging fails continue anyway.
		try {
			if(!file_path_validation::is_path_valid(config_.output_directory_))
				file_path_validation::make_path(config_.output_directory_);
			logger_.reset(new logger("cappeen_api", config_.output_directory_));
		}
		catch(...) {}

		LOG(LINFO) << "Initializing cappeen api version " << api_version();

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
		data_output_.reset();
		delegate_.reset();
		scanner_.reset();

		LOG(LVERBOSE) << "Constructing cappeen_delegate.";
		delegate_.reset(new cappeen_delegate(del));
		LOG(LVERBOSE) << "Constructing bladerf controller async.";
		scanner_.reset(new scanner::blade_rf_controller_async(rf_phreaker::scanner::USB_BLADE_RF));
		LOG(LVERBOSE) << "Constructing data output async.";
		data_output_.reset(new processing::data_output_async());
		LOG(LVERBOSE) << "Constructing processing graph.";
		processing_graph_.reset(new processing::processing_graph());
		LOG(LVERBOSE) << "Constructing gps graph.";
		gps_graph_.reset(new processing::gps_graph());
		LOG(LVERBOSE) << "Constructing frequency correction graph.";
		frequency_correction_graph_.reset(new processing::frequency_correction_graph());
		
		LOG(LVERBOSE) << "Initializing cappeen_delegate.";
		delegate_->initialize(data_output_.get(), processing_graph_.get(), gps_graph_.get(), frequency_correction_graph_.get());

		data_output_->set_output_path(config_.output_directory_);
		data_output_->set_file_output(config_.file_output_);
		data_output_->set_standard_output(config_.standard_output_);
		data_output_->set_signal_output(config_.signal_slots_);

		scanner_->set_log_level(config_.blade_settings_.log_level_);

		if(!tbb_task_scheduler_.is_active())
			tbb_task_scheduler_.initialize(-1);

		LOG(LINFO) << "Initialization complete.";
		is_initialized_ = true;
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
		LOG(LERROR) << err.what() << "  Error code: " << err.error_code_ << ".";
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
		LOG(LERROR) << err.what();
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
		LOG(LERROR) << "Unknown error.";
	}
	return status;
}

void cappeen_impl::read_settings()
{
	settings_io io("cappeen_api", qt_utility::app_name());

	io.read(config_);
}

long cappeen_impl::clean_up()
{
	long status = 0;
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
		LOG(LVERBOSE) << "Deleting gps graph...";
		gps_graph_.reset();
		LOG(LVERBOSE) << "Deleting processing graph...";
		processing_graph_.reset();
		LOG(LVERBOSE) << "Deleting frequency correction graph...";
		frequency_correction_graph_.reset();
		LOG(LVERBOSE) << "Deleting data output async...";
		data_output_.reset();
		LOG(LVERBOSE) << "Deleting cappeen delegate...";
		delegate_.reset();
		LOG(LVERBOSE) << "Deleting bladerf controller async...";
		scanner_.reset();
		LOG(LINFO) << "Cleaned up successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}

	try {
		LOG(LVERBOSE) << "Deleting logger...";
		logger_.reset();
	}
	catch(...) {}
	return status;
}

long cappeen_impl::list_available_units(char *list, unsigned int buf_size)
{
	long status = 0;
	try {
		LOG(LINFO) << "Listing units...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		verify_init();

		memset(list, 0, buf_size);

		auto scanner_list = scanner_->list_available_scanners().get();
		// Sometimes the libbladeRF reports there is a connected unit but does not give serial.
		// Requesting the list again seems to fix it.
		if(scanner_list.size() && (*scanner_list.begin())->id() == "")
			scanner_list = scanner_->list_available_scanners().get();

		std::string str;
		for(auto &scanner : scanner_list) {
			str += scanner->id() + ";";
		}
		if(buf_size < str.size() + 1)
			throw cappeen_api_error("Error while listing available units.  buf_size is not large enough.  buf_size should be at least "
			+ boost::lexical_cast<std::string>(str.size() + 1) + ".", BUFFER_TOO_SMALL);
		else
			memcpy(list, str.c_str(), str.size() + 1);
		LOG(LINFO) << "Listed units successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

void cappeen_impl::verify_init()
{
	if(!is_initialized_)
		throw rf_phreaker::cappeen_api_error("Cappeen API not initialized correctly.", BEAGLENOTINITIALIZED);
}

long cappeen_impl::open_unit(const char *serial, unsigned int buf_size)
{
	long status = 0;
	try {
		LOG(LINFO) << "Opening unit " << serial << "...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		verify_init();

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(gps_graph_)
			gps_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		// Initialize a fake hw and initialize it.
		hardware tmp_hw{serial, 0, device_communication::UNKNOWN_SPEED, 0, 0, {}, {true}};
		delegate_->initialize_beagle_info(tmp_hw);
		delegate_->change_beagle_state(BEAGLE_USBOPENED);

		scanner_->open_scanner_and_refresh_scanner_info(serial).get();
		
		scanner_->do_initial_scanner_config(config_.blade_settings_).get();

		auto hw = scanner_->get_scanner().get()->get_hardware();
		delegate_->initialize_beagle_info(hw);

		gps_graph_->start(scanner_.get(), data_output_.get(), config_);

		delegate_->change_beagle_state(BEAGLE_READY);

		LOG(LINFO) << "Opened unit " << serial << " successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

long cappeen_impl::close_unit(const char *serial, unsigned int buf_size)
{
	long status = 0;
	try {
		LOG(LINFO) << "Closing unit " << serial << "...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		verify_init();

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(gps_graph_)
			gps_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		auto hw = scanner_->get_scanner().get()->get_hardware();

		std::string str_serial(serial, buf_size);
		auto current_scanner_id = hw.serial_;
		if(current_scanner_id != serial)
			throw cappeen_api_error("Unit (" + str_serial + ") was not found.", COMMNOTFOUND);

		// Write gps 1pps calibration to EEPROM if neccessary.
		auto gps_1pps = scanner_->get_last_valid_gps_1pps_integration().get();
		auto time_diff = gps_1pps.time_calculated() - hw.frequency_correction_calibration_date_;
		LOG(LDEBUG) << "Frequency correction value last updated on " << boost::posix_time::to_simple_string(boost::posix_time::from_time_t(hw.frequency_correction_calibration_date_)) << ".";
		
		if(gps_1pps.is_valid()) {
			LOG(LDEBUG) << "GPS 1PPS calibration last occurred on " << boost::posix_time::to_simple_string(boost::posix_time::from_time_t(gps_1pps.time_calculated())) << ".";
		}
		else {
			LOG(LDEBUG) << "GPS 1PPS calibration did not occur.";
		}
		if(gps_1pps.is_valid() && time_diff > config_.eeprom_update_period_for_1pps_calibration_minutes_ * 60) {
			LOG(LDEBUG) << "Storing latest GPS 1PPS calibration using " << gps_1pps.clock_ticks() << " clock ticks for an error of " << gps_1pps.error_in_hz() << " Hz.";
			scanner_->calculate_vctcxo_trim_and_update_eeprom(gps_1pps.error_in_hz());
		}

		// Close scanner.
		scanner_->close_scanner().get();
		delegate_->change_beagle_state(BEAGLE_USBCLOSED);
		LOG(LINFO) << "Closed unit " << serial << " successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

long cappeen_impl::stop_collection()
{
	long status = 0;
	try {
		LOG(LINFO) << "Stopping collection...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state != BEAGLE_COLLECTING)
			throw cappeen_api_error("Cannot stop collection.  Wrong beagle state.", WRONGBEAGLESTATE);

		processing_graph_->cancel_and_wait();
		delegate_->change_beagle_state(BEAGLE_READY);
		LOG(LINFO) << "Stopped collection successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

long cappeen_impl::start_collection(const beagle_api::collection_info &collection)
{
	long status = 0;
	try {
		LOG(LINFO) << "Starting collection...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state != BEAGLE_WARMINGUP && state != BEAGLE_READY && state != BEAGLE_USBOPENED)
			throw cappeen_api_error("Cannot start collection.  Wrong beagle state.", WRONGBEAGLESTATE);

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();

		check_licenses(collection);

		// Initialize packet sizes.
		read_settings();
		processing::initialize_collection_info_defaults(config_);

		auto collection_containers = create_collection_info_containers(collection);

		if(collection_containers.empty())
			throw cappeen_api_error("beagle_api::collection_info is empty.", GENERAL_ERROR);

		check_bands(collection_containers);

		processing_graph_->start(scanner_.get(), data_output_.get(), collection_containers, config_);

		delegate_->change_beagle_state(BEAGLE_COLLECTING);
		LOG(LINFO) << "Started collection successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

processing::collection_info_containers cappeen_impl::create_collection_info_containers(const beagle_api::collection_info &collection)
{
	using namespace processing;

	collection_info_containers containers;

	for(uint32_t i = 0, end = collection.tech_and_bands_to_sweep_.num_elements_; i < end; ++i) {
		auto band = convert_band(collection.tech_and_bands_to_sweep_.elements_[i]);
		
		LOG(LVERBOSE) << "Adding operating band: " << to_string(band) << ".";

		if(band >= FIRST_UMTS_OPERATING_BAND && band <= LAST_UMTS_OPERATING_BAND) {
			auto it = std::find_if(containers.begin(), containers.end(), [&](const collection_info_container &c) {
				return c.tech_ == UMTS_SWEEP;
			});

			if(it == containers.end()) {
				containers.push_back(collection_info_container(UMTS_SWEEP, true));
				containers.push_back(collection_info_container(UMTS_LAYER_3_DECODE, false));
				it = std::find_if(containers.begin(), containers.end(), [&](const collection_info_container &c) {
					return c.tech_ == UMTS_SWEEP;
				});
			}

			auto range = operating_bands_.get_band_freq_range(band);
			// Comply with beagle_api behavior.  Adjust starting freq for operating band 8 so that it contains [921 - 925].
			if(band == UMTS_OPERATING_BAND_8)
				range.low_freq_hz_ = mhz(921) + khz(2400);
			frequency_range_creation::adjust_umts_sweep_collection_info_with_adjustment(range, *it);
		}
		else if(band >= FIRST_LTE_OPERATING_BAND && band <= LAST_LTE_OPERATING_BAND) {
			auto it = std::find_if(containers.begin(), containers.end(), [&](const collection_info_container &c) {
				return c.tech_ == LTE_SWEEP;
			});

			if(it == containers.end()) {
				containers.push_back(collection_info_container(LTE_SWEEP, true));
				containers.push_back(collection_info_container(LTE_LAYER_3_DECODE, false));
				it = std::find_if(containers.begin(), containers.end(), [&](const collection_info_container &c) {
					return c.tech_ == LTE_SWEEP;
				});
			}

			frequency_range_creation::adjust_lte_sweep_collection_info(operating_bands_.get_band_freq_range(band), *it);
		}
	}

	//if(containers.empty()) {
	//	containers.push_back(collection_info_container(LTE_LAYER_3_DECODE, false));
	//	auto &con = containers.back();
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(2140000000, lte_bandwidth_10_mhz_sampling_rate, khz(10000), LTE_OPERATING_BAND_1)));
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(739000000, lte_bandwidth_10_mhz_sampling_rate, khz(10000), LTE_OPERATING_BAND_12)));
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(2120000000, lte_bandwidth_20_mhz_sampling_rate, khz(20000), LTE_OPERATING_BAND_1)));
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(1967500000, lte_bandwidth_5_mhz_sampling_rate, khz(5000), LTE_OPERATING_BAND_2)));
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(1947500000, lte_bandwidth_1_4_mhz_sampling_rate, khz(1500), LTE_OPERATING_BAND_2)));
	//	con.adjust(add_collection_info(lte_layer_3_collection_info(879600000, lte_bandwidth_1_4_mhz_sampling_rate, khz(1500), LTE_OPERATING_BAND_5)));
	//}

	// Comply with beagle_api behavior.  Go thru and change any xxxx.5 freqs that are in the operating band 1 to operating band 4.
	auto it = std::find_if(containers.begin(), containers.end(), [&](const collection_info_container &c) {
		return c.tech_ == UMTS_SWEEP;
	});
	if(it != containers.end()) {
		for(auto &ci : it->collection_info_group_) {
			if(ci.operating_band_ == UMTS_OPERATING_BAND_1 && ci.freq_ % khz(200) != 0)
				ci.operating_band_ = UMTS_OPERATING_BAND_4;
		}
	}

	return containers;
}

void cappeen_impl::check_bands(const processing::collection_info_containers &containers) {
	bool invalid_bands = false;
	std::set<TECHNOLOGIES_AND_BANDS> bad_band;

	for(auto &container : containers) {
		for(auto &info : container.collection_info_group_) {
			if(!delegate_->is_within_freq_paths(info.freq_)) {
				bad_band.insert(convert_band_to_tech_band(info.operating_band_));
				invalid_bands = true;
				break;
			}
		}
	}
	if(invalid_bands) {
		std::string str("Unable to start collection.  Following tech/band(s) are not calibrated:");
		for(auto &lic : bad_band)
			str += " " + tech_band_to_string(lic) + ",";
		str[str.find_last_of(",")] = '.';
		throw cappeen_api_error(str, FREQNOTWITHINCALIBRATIONLIMITS);
	}
}

void cappeen_impl::check_licenses(const beagle_api::collection_info &collection) {
	bool invalid_license = false;
	std::vector<TECHNOLOGIES_AND_BANDS> bad_licenses;

	auto valid_licenses = delegate_->valid_licenses();
	auto tbs = collection.tech_and_bands_to_sweep_.elements_;
	for(uint32_t i = 0; i < collection.tech_and_bands_to_sweep_.num_elements_; ++i) {
		if(std::find(valid_licenses.begin(), valid_licenses.end(), tbs[i]) == valid_licenses.end()) {
			bad_licenses.push_back(tbs[i]);
			invalid_license = true;
		}
	}
	if(invalid_license) {
		std::string str("Unable to start collection.  No license for the following tech/band(s):");
		for(auto &lic : bad_licenses)
			str += " " + tech_band_to_string(lic) + ",";
		str[str.find_last_of(",")] = '.';
		throw cappeen_api_error(str, FREQNOTLICENSED);
	}
}

long cappeen_impl::start_frequency_correction(const beagle_api::collection_info &collection)
{
	long status = 0;
	try {
		LOG(LINFO) << "Starting frequency correction using WCDMA bands...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state != BEAGLE_WARMINGUP && state != BEAGLE_READY && state != BEAGLE_USBOPENED)
			throw cappeen_api_error("Cannot start collection.  Wrong beagle state.", WRONGBEAGLESTATE);

		// Initialize packet sizes.
		read_settings();
		config_.umts_layer_3_collection_.collection_time_ = milli_to_nano(60);
		processing::initialize_collection_info_defaults(config_);

		auto collection_containers = create_collection_info_containers(collection);

		collection_containers.erase(std::remove_if(collection_containers.begin(), collection_containers.end(), [&](const processing::collection_info_container &c) {
			return c.tech_ == LTE_LAYER_3_DECODE || c.tech_ == LTE_SWEEP;
		}), collection_containers.end());

		if(collection_containers.empty())
			throw cappeen_api_error("Please input at least one WCDMA band to start frequency correction.", GENERAL_ERROR);

		if(gps_graph_)
			gps_graph_->disable_1pps_calibration();

		frequency_correction_graph_->start(scanner_.get(), data_output_.get(), collection_containers, config_);

		delegate_->change_beagle_state(BEAGLE_CALCULATING_FREQUENCY_CORRECTION);

		// Temp sleep to allow graph thread to get going.
		std::this_thread::sleep_for(std::chrono::seconds(1));

		LOG(LINFO) << "Frequency collection started successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

long cappeen_impl::start_frequency_correction(uint32_t *wcdma_frequencies, int num_channels)
{
	using namespace processing;

	long status = 0;
	try {
		LOG(LINFO) << "Starting frequency correction using WCDMA channels...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state != BEAGLE_WARMINGUP && state != BEAGLE_READY && state != BEAGLE_USBOPENED)
			throw cappeen_api_error("Cannot start collection.  Wrong beagle state.", WRONGBEAGLESTATE);

		// Initialize packet sizes.
		read_settings();
		config_.umts_layer_3_collection_.collection_time_ = milli_to_nano(60);
		processing::initialize_collection_info_defaults(config_);

		collection_info_containers containers;
		
		containers.push_back(collection_info_container(UMTS_LAYER_3_DECODE, false));

		for(int i = 0; i < num_channels; ++i)
			containers[0].adjust(add_collection_info(umts_layer_3_collection_info(wcdma_frequencies[i])));

		if(num_channels <= 0)
			throw cappeen_api_error("Please input at least one WCDMA frequency to start frequency correction.", GENERAL_ERROR);

		if(gps_graph_)
			gps_graph_->disable_1pps_calibration();

		frequency_correction_graph_->start(scanner_.get(), data_output_.get(), containers, config_);

		delegate_->change_beagle_state(BEAGLE_CALCULATING_FREQUENCY_CORRECTION);

		// Temp sleep to allow graph thread to get going.
		std::this_thread::sleep_for(std::chrono::seconds(1));

		LOG(LINFO) << "Frequency collection started successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;

}

long cappeen_impl::input_new_license(const char *serial, uint32_t serial_buf_size, const char *new_license_filename, uint32_t license_buf_size)
{
	long status = 0;
	try {
		LOG(LINFO) << "Updating new license...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state == BEAGLE_USBCLOSED) {
			LOG(LINFO) << "Unit not open.  Attempting to open unit before updating license...";
			open_unit(serial, serial_buf_size);
			state = delegate_->current_beagle_state();
		}

		if(state != BEAGLE_WARMINGUP && state != BEAGLE_READY && state != BEAGLE_USBOPENED)
			throw cappeen_api_error("Cannot update license.  Wrong beagle state.", WRONGBEAGLESTATE);

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(gps_graph_)
			gps_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		int32_t hw_id = delegate_->get_hw_id();

		std::string filename(new_license_filename, license_buf_size);

		// Read license.
		cappeen_license_version_3 license(cell_analysis_license);
		auto raw_license = license.create_new_license_from_file(filename);

		// Verify license is not corrupt.
		license.initialize_license(raw_license, hw_id);
		if(license.corrupt_license())
			throw cappeen_api_error("License read from file appears corrupt.", CORRUPTLICENSE);

		scanner_->write_license(raw_license).get();

		scanner_->refresh_scanner_info().get();
		auto hw = scanner_->get_scanner().get()->get_hardware();
		delegate_->initialize_beagle_info(hw);

		if(gps_graph_)
			gps_graph_->start(scanner_.get(), data_output_.get(), config_);

		LOG(LINFO) << "Updated license successfully.";
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
	}
	return status;
}

const char* cappeen_impl::api_version() const
{
	return "0.14.0.0";
}
