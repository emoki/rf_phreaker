#include "rf_phreaker/cappeen/cappeen_impl.h"
#include "rf_phreaker/cappeen/operating_band_conversion.h"
#include "rf_phreaker/cappeen/beagle_defines.h"
#include "rf_phreaker/qt_specific/settings_io.h"
#include "rf_phreaker/common/exception_types.h"
#include "rf_phreaker/processing/frequency_range_creation.h"
#include "rf_phreaker/common/log.h"
#include "tbb/task_scheduler_init.h"

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
		// Do not stop graphs as this will cause an access volation in std::mutex.
		delegate_.release();
		scanner_.release();
		data_output_.release();
		processing_graph_.release();
		gps_graph_.release();
		frequency_correction_graph_.release();
		logger_.release();
	}
	catch(...) {}
}

long cappeen_impl::initialize(beagle_api::beagle_delegate *del)
{
	int status = 0;
	try {
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		// If logging fails continue anyway.
		try {
			logger_.reset(new init_log("cappeen_api", ""));
		}
		catch(...) {}

		LOG_L(INFO) << "Initializing cappeen api version " << api_version();

		is_initialized_ = false;

		LOG_L(VERBOSE) << "Reading settings.";
		read_settings();

		if(logger_)
			logger_->log_worker_->changeLoggingLevel(config_.log_level_);

		// Release all components before changing delegate.
		delegate_.release();
		scanner_.release();
		data_output_.release();
		if(processing_graph_) {
			LOG_L(DEBUG) << "Found processing graph on heap.  Sending cancel request and releasing it.";
			processing_graph_->cancel_and_wait();
			processing_graph_.release();
		}
		if(gps_graph_) {
			LOG_L(DEBUG) << "Found gps graph on heap.  Sending cancel request and releasing it.";
			gps_graph_->cancel_and_wait();
			gps_graph_.release();
		}

		if(frequency_correction_graph_) {
			LOG_L(DEBUG) << "Found frequency correction graph on heap.  Sending cancel request and releasing it.";
			frequency_correction_graph_->cancel_and_wait();
			frequency_correction_graph_.release();
		}


		LOG_L(VERBOSE) << "Constructing cappeen_delegate.";
		delegate_.reset(new cappeen_delegate(del));
		LOG_L(VERBOSE) << "Constructing blade_rf_controller_async.";
		scanner_.reset(new scanner::blade_rf_controller_async(rf_phreaker::scanner::USB_BLADE_RF));
		LOG_L(VERBOSE) << "Constructing data_output_async.";
		data_output_.reset(new processing::data_output_async());
		LOG_L(VERBOSE) << "Constructing processing_graph.";
		processing_graph_.reset(new processing::processing_graph());
		LOG_L(VERBOSE) << "Constructing gps_graph.";
		gps_graph_.reset(new processing::gps_graph());
		LOG_L(VERBOSE) << "Constructing frequency correction graph.";
		frequency_correction_graph_.reset(new processing::frequency_correction_graph());
		
		LOG_L(VERBOSE) << "Initializing cappeen_delegate.";
		delegate_->initialize(data_output_.get(), processing_graph_.get(), gps_graph_.get());
		//log_worker_->connect_sink(boost::bind(&cappeen_delegate::output_error, delegate_.get(), _1, _2));

		data_output_->set_file_output(config_.file_output_);
		data_output_->set_standard_output(config_.standard_output_);
		data_output_->set_signal_output(config_.signal_slots_);

		scanner_->set_log_level(config_.blade_settings_.log_level_);

		//tbb::task_scheduler_init init;
		//init.initialize(15);

		LOG_L(INFO) << "Initialization complete.";
		is_initialized_ = true;
	}
	catch(const rf_phreaker::rf_phreaker_error &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = (long)err.error_code_;
		LOG_L(ERROR) << err.what() << "  Error code: " << err.error_code_ << ".";
	}
	catch(const std::exception &err) {
		if(delegate_) delegate_->output_error_as_message(err);
		status = STD_EXCEPTION_ERROR;
		LOG_L(ERROR) << err.what();
	}
	catch(...) {
		if(delegate_) delegate_->output_error_as_message("Unknown error has occurred.", UNKNOWN_ERROR);
		status = UNKNOWN_ERROR;
		LOG_L(ERROR) << "Unknown error.";
	}
	return status;
}

void cappeen_impl::read_settings()
{
//	settings_io io("cappeen_api_v1", "cappeen");
	settings_io io("cappeen_api.ini");

	io.read(config_);
}

long cappeen_impl::clean_up()
{
	long status = 0;
	try {
		LOG_L(INFO) << "Cleaning up...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		// Do more!
		if(processing_graph_) {
			LOG_L(VERBOSE) << "Waiting for processing graph...";
			processing_graph_->cancel_and_wait();
		}
		if(gps_graph_) {
			LOG_L(VERBOSE) << "Waiting for gps graph...";
			gps_graph_->cancel_and_wait();
		}
		if(frequency_correction_graph_) {
			LOG_L(VERBOSE) << "Waiting for frequency correction graph...";
			frequency_correction_graph_->cancel_and_wait();
		}
		delegate_.release();
		scanner_.release();
		data_output_.release();
		processing_graph_.release();
		gps_graph_.release();
		frequency_correction_graph_.release();
		LOG_L(INFO) << "Cleaned up successfully.";
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
		logger_.release();
	}
	catch(...) {}
	return status;
}

long cappeen_impl::list_available_units(char *list, unsigned int buf_size)
{
	long status = 0;
	try {
		LOG_L(INFO) << "Listing units...";
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
		LOG_L(INFO) << "Listed units successfully.";
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
		LOG_L(INFO) << "Opening unit " << serial << "...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		verify_init();

		scanner_->open_scanner(serial).get();
		
		scanner_->do_initial_scanner_config(config_.blade_settings_).get();

		auto hw = scanner_->get_scanner().get()->get_hardware();
		delegate_->initialize_beagle_info(hw);
		delegate_->change_beagle_state(BEAGLE_USBOPENED);

		gps_graph_->start(scanner_.get(), data_output_.get(), config_);
		LOG_L(INFO) << "Opened unit " << serial << " successfully.";
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
	try{
		LOG_L(INFO) << "Closing unit " << serial << "...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);
		verify_init();

		if(frequency_correction_graph_)
			frequency_correction_graph_->cancel_and_wait();
		if(gps_graph_)
			gps_graph_->cancel_and_wait();
		if(processing_graph_)
			processing_graph_->cancel_and_wait();

		std::string str_serial(serial, buf_size);
		auto current_scanner_id = scanner_->get_scanner().get()->get_hardware().scanner_id_;
		if(current_scanner_id != serial)
			throw cappeen_api_error("Unit (" + str_serial + ") was not found.", COMMNOTFOUND);

		scanner_->close_scanner().get();
		delegate_->change_beagle_state(BEAGLE_USBCLOSED);
		LOG_L(INFO) << "Closed unit " << serial << " successfully.";
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
		LOG_L(INFO) << "Stopping collection...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state != BEAGLE_COLLECTING)
			throw cappeen_api_error("Cannot stop collection.  Wrong beagle state.", WRONGBEAGLESTATE);

		processing_graph_->cancel_and_wait();
		delegate_->change_beagle_state(BEAGLE_READY);
		LOG_L(INFO) << "Stopped collection successfully.";
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
		LOG_L(INFO) << "Starting collection...";
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
		LOG_L(INFO) << "Started collection successfully.";
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
			frequency_range_creation::adjust_umts_sweep_collection_info(range, *it);
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
		LOG_L(INFO) << "Starting frequency correction using WCDMA bands...";
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

		frequency_correction_graph_->start(scanner_.get(), data_output_.get(), collection_containers, config_);

		// Temp sleep to allow graph thread to get going.
		std::this_thread::sleep_for(std::chrono::seconds(1));

		LOG_L(INFO) << "Frequency collection started successfully.";
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
		LOG_L(INFO) << "Starting frequency correction using WCDMA channels...";
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

		frequency_correction_graph_->start(scanner_.get(), data_output_.get(), containers, config_);

		// Temp sleep to allow graph thread to get going.
		std::this_thread::sleep_for(std::chrono::seconds(1));

		LOG_L(INFO) << "Frequency collection started successfully.";
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
		LOG_L(INFO) << "Updating new license...";
		std::lock_guard<std::recursive_mutex> lock(mutex_);

		auto state = delegate_->current_beagle_state();
		if(state == BEAGLE_USBCLOSED) {
			LOG_L(INFO) << "Unit not open.  Attempting to open unit before updating license...";
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

		std::string filename(new_license_filename, license_buf_size);

		// Read license.
		cappeen_license_version_3 license(cell_analysis_license);
		auto raw_license = license.create_new_license_from_file(filename);

		// Verify license is not corrupt.
		license.initialize_license(raw_license, serial);
		if(license.corrupt_license())
			throw cappeen_api_error("License read from file appears corrupt.", CORRUPTLICENSE);

		scanner_->write_license(raw_license).get();

		scanner_->refresh_scanner_info().get();
		auto hw = scanner_->get_scanner().get()->get_hardware();
		delegate_->initialize_beagle_info(hw);

		if(gps_graph_)
			gps_graph_->start(scanner_.get(), data_output_.get(), config_);

		LOG_L(INFO) << "Updated license successfully.";
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
	return "0.12.0.0";
}
