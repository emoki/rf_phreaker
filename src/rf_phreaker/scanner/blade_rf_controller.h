#pragma once

#include "rf_phreaker/scanner/scanner_controller_interface.h"
#include "rf_phreaker/common/common_types.h"
#include "rf_phreaker/common/concurrent.h"
#include "rf_phreaker/common/measurements.h"
#include "rf_phreaker/scanner/scanner_comm.h"
#include "rf_phreaker/scanner/measurement_info.h"
#include "rf_phreaker/scanner/byte_aligned_buffer.h"
#include "rf_phreaker/scanner/time_samples_conversion.h"
#include "rf_phreaker/scanner/sampling_rate_conversion.h"
#include "rf_phreaker/scanner/rf_switch_conversion.h"
#include "rf_phreaker/scanner/lms_defines.h"
#include "rf_phreaker/scanner/scanner_blade_rf.h"
#include "rf_phreaker/scanner/gain_manager.h"

namespace rf_phreaker { namespace scanner {

class comm_blade_rf;

class blade_rf_controller
{
public:
	blade_rf_controller(comm_type comm = USB_BLADE_RF);

	~blade_rf_controller();

	std::vector<comm_info_ptr> list_available_scanners();

	void open_scanner(const scanner_id_type &id);

	void close_scanner();

	void do_initial_scanner_config();

	void config_scanner_for_collection(std::vector<frequency_type> &freqs);

	void update_dds(); // updates values.. does not calculate dds.. that would be done with 

	const scanner* get_scanner();

	const scanner_blade_rf* get_scanner_blade_rf();

	gps get_gps_data();

	measurement_info get_rf_data_use_auto_gain(frequency_type freq, time_type time_ms, bandwidth_type bandwidth, frequency_type sampling_rate = 0);

	measurement_info get_rf_data(frequency_type freq, time_type time_ms, bandwidth_type bandwidth, const gain_type &gain, frequency_type sampling_rate = 0);

	gain_type set_auto_gain(frequency_type freq, bandwidth_type bandwidth, time_type time_ns = 0, frequency_type sampling_rate = 0);

private:
	void refresh_scanner_info();

	int check_blade_status(int return_status);

	ipp_16sc_aligned_buffer aligned_buffer_;

	gain_manager gain_manager_;

	time_samples_conversion time_samples_conversion_;

	rf_switch_conversion rf_switch_conversion_;

	std::unique_ptr<comm_blade_rf> comm_blade_rf_;

	std::shared_ptr<scanner_blade_rf> scanner_blade_rf_;
};

}}