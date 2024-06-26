#pragma once

#include <stdint.h>
#include <vector>
#include "rf_phreaker/common/common_types.h"
#include "rf_phreaker/common/exception_types.h"

namespace rf_phreaker
{

// Default Values
static const bool settings_output_raw_packets_default = false;
static const int settings_log_level_default = 3;
static const int scheduling_algorithm_default = (int)collection_round_based;
static const frequency_type settings_sampling_rate_default = 4875000;
static const frequency_type settings_bandwidth_default = 5000000;
static const time_type settings_collection_time_default = (32000000);
static const time_type settings_overlap_time_default = 10000000;
static const bool settings_is_streaming_default = false;
static const int settings_priority_default = 1;
static const int settings_iq_data_priority_default = 1;
static const int settings_power_spectrum_priority_default = 1;
static const frequency_type settings_low_intermediate_frequency_default = 0;
static const frequency_type settings_high_intermediate_frequency_default = 0;
static const frequency_type settings_step_size_default = 100000;
static const int settings_layer_3_max_update_threshold_default = 150;
static const int settings_layer_3_min_collection_round_default = 5;
static const int settings_layer_3_decode_threshold_default = -13;
static const int settings_layer_3_min_decode_threshold_default = -21;
static const bool settings_layer_3_should_prioritize_layer_3_default = true;
static const int settings_layer_3_minimum_decode_count_default = 10;
static const int settings_layer_3_complete_decode_interval_default = 110;
static const int settings_umts_general_sensitivity_default = -23;
static const int settings_umts_general_full_scan_interval_default = 1;
static const int settings_umts_general_num_coherent_slots_default = 2;
static const double settings_lte_general_sync_quality_confidence_threshold_default = -10.5;
static const int settings_lte_general_full_scan_interval_default = 100;
static const double settings_lte_general_pbch_decoding_threshold_default = -20;
static const double settings_lte_general_minimum_relative_peak_threshold_default = 1.0/9.0;
static const bool settings_output_default = false;
static const int gps_collection_period_ms_default = 800;
static const int num_items_in_flight_default = 0;
static const int initial_frequency_correction_offset_start_default = (-3000);
static const int initial_frequency_correction_offset_end_default = (3000);
static const bool use_rf_board_adjustment_default = true;
static const int blade_log_level_default = 2;
static const int blade_rx_sync_num_buffers_default = 5;
static const int blade_rx_sync_buffer_size_default = 1024 * 4;
static const int blade_rx_sync_num_transfers_default = 4;
static const int blade_rx_sync_timeout_default = 2000;
static const std::string output_directory_default = "NULL";
static const bool output_in_binary_default = true;
static const bool simultaneous_collection_default = false;
static const int eeprom_update_period_for_1pps_calibration_minutes_default = 60;
static const bool log_gps_general_default = false;
static const bool log_gps_parsing_default = false;
static const bool log_collection_default = false;
static const int settings_gsm_general_side_power_threshold_default = 5;
static const int settings_gsm_general_band_power_threshold_default = 25;
static const bool settings_gsm_general_perform_sync_correlations_default = true;
static const double settings_gsm_general_c_i_ratio_confidence_threshold_default = -5;
static const int settings_output_interval_default = 1;

class collection_settings;
class settings;
collection_settings& find_collection_settings(rf_phreaker::specifier tech, settings &s);

class output_settings {
public:
	bool scanner_;
	bool gps_;
	bool gsm_sweep_;
	bool gsm_layer_3_;
	bool umts_sweep_;
	bool umts_layer_3_;
	bool lte_sweep_;
	bool lte_layer_3_;
	bool sweep_;
	bool power_spectrum_;
	bool iq_data_;
};

class output_interval_settings {
public:
	int32_t gsm_layer_3_;
};

class collection_settings {
public:
	frequency_type sampling_rate_;
	bandwidth_type bandwidth_;
	time_type collection_time_;
	bool is_streaming_;
	time_type overlap_time_;
	int priority_;
	frequency_type low_intermediate_frequency_;
	frequency_type high_intermediate_frequency_;
	frequency_type step_size_;
};

class layer_3_settings {
public:
	int32_t max_update_threshold_;
	int32_t minimum_collection_round_;
	double decode_threshold_;
	double decode_minimum_threshold_;
	bool should_prioritize_layer_3_;
	int32_t minimum_decode_count_;
	int32_t complete_decode_interval_;
	std::vector<int> wanted_layer_3_;
};

class umts_general_settings {
public:
	double sensitivity_;
	int32_t full_scan_interval_;
	int32_t num_coherent_slots_;
};

class lte_general_settings {
public:
	double sync_quality_confidence_threshold_;
	int full_scan_interval_;
	double pbch_decoding_threshold_;
	double minimum_relative_peak_threshold_;
	double psch_margin_;
};

class gsm_general_settings {
public:
	double side_power_threshold_;
	double band_power_threshold_;
	bool perform_sync_correlations_;
	double c_i_ratio_confidence_threshold_;
};

class frequency_correction_settings {
public:
	int initial_frequency_correction_range_start_;
	int initial_frequency_correction_range_end_;
	//int initial_increment_;
	//int second_increment_;

	umts_general_settings general_settings_;
};

class scanner_settings {};

class blade_rx_settings {
public:
	blade_rx_settings() 
		: rx_sync_num_buffers_(blade_rx_sync_num_buffers_default)
		, rx_sync_buffer_size_(blade_rx_sync_buffer_size_default)
		, rx_sync_num_transfers_(blade_rx_sync_num_transfers_default)
		, rx_sync_timeout_(blade_rx_sync_timeout_default) {}
	int rx_sync_num_buffers_;
	int rx_sync_buffer_size_;
	int rx_sync_num_transfers_;
	int rx_sync_timeout_;
};
class blade_settings : public scanner_settings {
public:
	blade_settings()
		: log_level_(blade_log_level_default) {}
	int log_level_;
	blade_rx_settings intermittent_streaming_rx_;
	blade_rx_settings full_streaming_rx_;
};

class settings {
public:
	// TODO - Change these to system settings, general settings or something.
	int log_level_;
	bool log_gps_general_;
	bool log_gps_parsing_;
	bool log_collection_;
	int gps_collection_period_ms_;
	int num_items_in_flight_;
	bool use_rf_board_adjustment_;
	std::string output_directory_;
	bool output_in_binary_;
	bool simultaneous_collection_;
	int eeprom_update_period_for_1pps_calibration_minutes_;
	scheduling_algorithm_type scheduling_algorithm_;
	bool offload_umts_full_scan_;
	bool have_common_sweep_output_;
	int iq_data_priority_;
	int power_spectrum_priority_;

	blade_settings blade_settings_;

	output_settings packet_output_;
	output_settings standard_output_;
	output_settings file_output_;
	output_settings signal_slots_;

	output_interval_settings output_intervals_;

	collection_settings gsm_sweep_collection_;
	collection_settings gsm_layer_3_collection_;
	collection_settings umts_sweep_collection_;
	collection_settings umts_layer_3_collection_;
	collection_settings lte_sweep_collection_;
	collection_settings lte_layer_3_collection_;
	collection_settings sweep_collection_;

	layer_3_settings gsm_layer_3_decode_;
	layer_3_settings umts_layer_3_decode_;
	layer_3_settings lte_layer_3_decode_;

	gsm_general_settings gsm_sweep_general_;
	gsm_general_settings gsm_layer_3_general_;

	umts_general_settings umts_sweep_general_;
	umts_general_settings umts_layer_3_general_;

	lte_general_settings lte_sweep_general_;
	lte_general_settings lte_layer_3_general_;
	
	frequency_correction_settings frequency_correction_settings_;
};

inline collection_settings& find_collection_settings(rf_phreaker::specifier tech, settings &s) {
	switch(tech) {
	case GSM_SWEEP:
		return s.gsm_sweep_collection_;
	case GSM_LAYER_3_DECODE:
		return s.gsm_layer_3_collection_;
		//case CDMA_SWEEP:
		//	return s.gsm_sweep_collection_;
		//case CDMA_LAYER_3_DECODE:
		//	return s.gsm_sweep_collection_;
	case UMTS_SWEEP:
		return s.umts_sweep_collection_;
	case UMTS_LAYER_3_DECODE:
		return s.umts_layer_3_collection_;
	case LTE_SWEEP:
		return s.lte_sweep_collection_;
	case LTE_LAYER_3_DECODE:
		return s.lte_layer_3_collection_;
	case POWER_SPECTRUM:
	case IQ_DATA:
		throw rf_phreaker_error("Unable to find collection_settings.  Specifier not supported!");
	default:
		throw rf_phreaker_error("Unable to find collection_settings.  Specifier unknown!");
	}
}

}