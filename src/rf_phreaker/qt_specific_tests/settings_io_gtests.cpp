#include "gtest/gtest.h"

#include "rf_phreaker/qt_specific/settings_io.h"
#include "rf_phreaker/common/settings.h"

TEST(QtSpecific, TestSettingsIO)
{
	using namespace rf_phreaker;
	
	settings set;
	settings_io set_io("qt_specific_tests", "cappeen");

	set_io.clear();

	set_io.read(set);

	EXPECT_EQ(settings_log_level_default, set.log_level_);
	EXPECT_EQ(gps_collection_period_ms_default, set.gps_collection_period_ms_);
	EXPECT_EQ(num_items_in_flight_default, set.num_items_in_flight_);
	EXPECT_EQ(use_rf_board_adjustment_default, set.use_rf_board_adjustment_);

	EXPECT_EQ(settings_output_default, set.standard_output_.scanner_);
	EXPECT_EQ(settings_output_default, set.standard_output_.gps_);
	EXPECT_EQ(settings_output_default, set.standard_output_.umts_sweep_);
	EXPECT_EQ(settings_output_default, set.standard_output_.umts_layer_3_);
	EXPECT_EQ(settings_output_default, set.standard_output_.lte_sweep_);
	EXPECT_EQ(settings_output_default, set.standard_output_.lte_layer_3_);

	EXPECT_EQ(settings_output_default, set.signal_slots_.scanner_);
	EXPECT_EQ(settings_output_default, set.signal_slots_.gps_);
	EXPECT_EQ(settings_output_default, set.signal_slots_.umts_sweep_);
	EXPECT_EQ(settings_output_default, set.signal_slots_.umts_layer_3_);
	EXPECT_EQ(settings_output_default, set.signal_slots_.lte_sweep_);
	EXPECT_EQ(settings_output_default, set.signal_slots_.lte_layer_3_);

	EXPECT_EQ(settings_output_default, set.packet_output_.scanner_);
	EXPECT_EQ(settings_output_default, set.packet_output_.gps_);
	EXPECT_EQ(settings_output_default, set.packet_output_.umts_sweep_);
	EXPECT_EQ(settings_output_default, set.packet_output_.umts_layer_3_);
	EXPECT_EQ(settings_output_default, set.packet_output_.lte_sweep_);
	EXPECT_EQ(settings_output_default, set.packet_output_.lte_layer_3_);

	EXPECT_EQ(settings_sampling_rate_default, set.umts_sweep_collection_.sampling_rate_);
	EXPECT_EQ(settings_bandwidth_default, set.umts_sweep_collection_.bandwidth_);
	EXPECT_EQ(settings_collection_time_default, set.umts_sweep_collection_.collection_time_);

	EXPECT_EQ(settings_sampling_rate_default, set.umts_layer_3_collection_.sampling_rate_);
	EXPECT_EQ(settings_bandwidth_default, set.umts_layer_3_collection_.bandwidth_);
	EXPECT_EQ(settings_collection_time_default, set.umts_layer_3_collection_.collection_time_);

	EXPECT_EQ(settings_sampling_rate_default, set.lte_sweep_collection_.sampling_rate_);
	EXPECT_EQ(settings_bandwidth_default, set.lte_sweep_collection_.bandwidth_);
	EXPECT_EQ(settings_collection_time_default, set.lte_sweep_collection_.collection_time_);

	EXPECT_EQ(settings_sampling_rate_default, set.lte_layer_3_collection_.sampling_rate_);
	EXPECT_EQ(settings_bandwidth_default, set.lte_layer_3_collection_.bandwidth_);
	EXPECT_EQ(settings_collection_time_default, set.lte_layer_3_collection_.collection_time_);

	EXPECT_EQ(settings_layer_3_max_update_threshold_default, set.umts_decode_layer_3_.max_update_threshold_);
	EXPECT_EQ(settings_layer_3_min_collection_round_default, set.umts_decode_layer_3_.minimum_collection_round_);
	EXPECT_EQ(settings_layer_3_decode_threshold_default, set.umts_decode_layer_3_.decode_threshold_);
	EXPECT_EQ(settings_layer_3_min_decode_threshold_default, set.umts_decode_layer_3_.decode_minimum_threshold_);

	EXPECT_EQ(settings_layer_3_max_update_threshold_default, set.lte_decode_layer_3_.max_update_threshold_);
	EXPECT_EQ(settings_layer_3_min_collection_round_default, set.lte_decode_layer_3_.minimum_collection_round_);
	EXPECT_EQ(settings_layer_3_decode_threshold_default, set.lte_decode_layer_3_.decode_threshold_);
	EXPECT_EQ(settings_layer_3_min_decode_threshold_default, set.lte_decode_layer_3_.decode_minimum_threshold_);

	EXPECT_EQ(settings_umts_general_sensitivity_default, set.umts_sweep_general_.sensitivity_);
	EXPECT_EQ(settings_umts_general_full_scan_interval_default, set.umts_sweep_general_.full_scan_interval_);
	EXPECT_EQ(settings_umts_general_num_coherent_slots_default, set.umts_sweep_general_.num_coherent_slots_);

	EXPECT_EQ(settings_umts_general_sensitivity_default, set.umts_layer_3_general_.sensitivity_);
	EXPECT_EQ(settings_umts_general_full_scan_interval_default, set.umts_layer_3_general_.full_scan_interval_);
	EXPECT_EQ(settings_umts_general_num_coherent_slots_default, set.umts_layer_3_general_.num_coherent_slots_);

	EXPECT_EQ(initial_frequency_correction_offset_start_default, set.frequency_correction_settings_.initial_frequency_correction_range_start_);
	EXPECT_EQ(initial_frequency_correction_offset_end_default, set.frequency_correction_settings_.initial_frequency_correction_range_end_);
	EXPECT_EQ(settings_umts_general_sensitivity_default, set.frequency_correction_settings_.general_settings_.sensitivity_);
	EXPECT_EQ(settings_umts_general_full_scan_interval_default, set.frequency_correction_settings_.general_settings_.full_scan_interval_);
	EXPECT_EQ(settings_umts_general_num_coherent_slots_default, set.frequency_correction_settings_.general_settings_.num_coherent_slots_);

	// Alter and store new settings. 
	int tmp = 0;
	set.log_level_ = tmp++;
	set.gps_collection_period_ms_ = tmp++;
	set.num_items_in_flight_ = tmp++;
	set.use_rf_board_adjustment_ = true;
	set.standard_output_.scanner_ = true;
	set.standard_output_.gps_ = true;
	set.standard_output_.umts_sweep_ = true;
	set.standard_output_.umts_layer_3_ = true;
	set.standard_output_.lte_sweep_ = true;
	set.standard_output_.lte_layer_3_ = true;
	set.signal_slots_.scanner_ = true;
	set.signal_slots_.gps_ = true;
	set.signal_slots_.umts_sweep_ = true;
	set.signal_slots_.umts_layer_3_ = true;
	set.signal_slots_.lte_sweep_ = true;
	set.signal_slots_.lte_layer_3_ = true;
	set.packet_output_.scanner_ = true;
	set.packet_output_.gps_ = false;
	set.packet_output_.umts_sweep_ = true;
	set.packet_output_.umts_layer_3_ = false;
	set.packet_output_.lte_sweep_ = false;
	set.packet_output_.lte_layer_3_ = true;
	set.umts_sweep_collection_.sampling_rate_ = tmp++;
	set.umts_sweep_collection_.bandwidth_ = tmp++;
	set.umts_sweep_collection_.collection_time_ = tmp++;
	set.umts_layer_3_collection_.sampling_rate_ = tmp++;
	set.umts_layer_3_collection_.bandwidth_ = tmp++;
	set.umts_layer_3_collection_.collection_time_ = tmp++;
	set.lte_sweep_collection_.sampling_rate_ = tmp++;
	set.lte_sweep_collection_.bandwidth_ = tmp++;
	set.lte_sweep_collection_.collection_time_ = tmp++;
	set.lte_layer_3_collection_.sampling_rate_ = tmp++;
	set.lte_layer_3_collection_.bandwidth_ = tmp++;
	set.lte_layer_3_collection_.collection_time_ = tmp++;
	set.umts_decode_layer_3_.max_update_threshold_ = tmp++;
	set.umts_decode_layer_3_.minimum_collection_round_= tmp++;
	set.umts_decode_layer_3_.decode_threshold_ = tmp++;
	set.umts_decode_layer_3_.decode_minimum_threshold_ = tmp++;
	set.lte_decode_layer_3_.max_update_threshold_ = tmp++;
	set.lte_decode_layer_3_.minimum_collection_round_ = tmp++;
	set.lte_decode_layer_3_.decode_threshold_ = tmp++;
	set.lte_decode_layer_3_.decode_minimum_threshold_ = tmp++;
	set.umts_sweep_general_.sensitivity_ = tmp++;
	set.umts_sweep_general_.full_scan_interval_ = tmp++;
	set.umts_sweep_general_.num_coherent_slots_ = tmp++;
	set.umts_layer_3_general_.sensitivity_ = tmp++;
	set.umts_layer_3_general_.full_scan_interval_ = tmp++;
	set.frequency_correction_settings_.initial_frequency_correction_range_start_ = tmp++;
	set.frequency_correction_settings_.initial_frequency_correction_range_end_ = tmp++;
	set.frequency_correction_settings_.general_settings_.full_scan_interval_ = tmp++;
	set.frequency_correction_settings_.general_settings_.num_coherent_slots_ = tmp++;
	set.frequency_correction_settings_.general_settings_.sensitivity_ = tmp++;
	set_io.write(set);
	
	settings set2;
	set_io.read(set2);
	EXPECT_EQ(set.log_level_, set2.log_level_);
	EXPECT_EQ(set.gps_collection_period_ms_, set2.gps_collection_period_ms_);
	EXPECT_EQ(set.num_items_in_flight_, set2.num_items_in_flight_);
	EXPECT_EQ(set.use_rf_board_adjustment_, set2.use_rf_board_adjustment_);

	EXPECT_EQ(set.standard_output_.scanner_, set2.standard_output_.scanner_);
	EXPECT_EQ(set.standard_output_.gps_, set2.standard_output_.gps_);
	EXPECT_EQ(set.standard_output_.umts_sweep_, set2.standard_output_.umts_sweep_);
	EXPECT_EQ(set.standard_output_.umts_layer_3_, set2.standard_output_.umts_layer_3_);
	EXPECT_EQ(set.standard_output_.lte_sweep_, set2.standard_output_.lte_sweep_);
	EXPECT_EQ(set.standard_output_.lte_layer_3_, set2.standard_output_.lte_layer_3_);

	EXPECT_EQ(set.signal_slots_.scanner_, set2.signal_slots_.scanner_);
	EXPECT_EQ(set.signal_slots_.gps_, set2.signal_slots_.gps_);
	EXPECT_EQ(set.signal_slots_.umts_sweep_, set2.signal_slots_.umts_sweep_);
	EXPECT_EQ(set.signal_slots_.umts_layer_3_, set2.signal_slots_.umts_layer_3_);
	EXPECT_EQ(set.signal_slots_.lte_sweep_, set2.signal_slots_.lte_sweep_);
	EXPECT_EQ(set.signal_slots_.lte_layer_3_, set2.signal_slots_.lte_layer_3_);

	EXPECT_EQ(set.umts_sweep_collection_.sampling_rate_, set2.umts_sweep_collection_.sampling_rate_);
	EXPECT_EQ(set.umts_sweep_collection_.bandwidth_, set2.umts_sweep_collection_.bandwidth_);
	EXPECT_EQ(set.umts_sweep_collection_.collection_time_, set2.umts_sweep_collection_.collection_time_);

	EXPECT_EQ(set.umts_layer_3_collection_.sampling_rate_, set2.umts_layer_3_collection_.sampling_rate_);
	EXPECT_EQ(set.umts_layer_3_collection_.bandwidth_, set2.umts_layer_3_collection_.bandwidth_);
	EXPECT_EQ(set.umts_layer_3_collection_.collection_time_, set2.umts_layer_3_collection_.collection_time_);

	EXPECT_EQ(set.lte_sweep_collection_.sampling_rate_, set2.lte_sweep_collection_.sampling_rate_);
	EXPECT_EQ(set.lte_sweep_collection_.bandwidth_, set2.lte_sweep_collection_.bandwidth_);
	EXPECT_EQ(set.lte_sweep_collection_.collection_time_, set2.lte_sweep_collection_.collection_time_);

	EXPECT_EQ(set.lte_layer_3_collection_.sampling_rate_, set2.lte_layer_3_collection_.sampling_rate_);
	EXPECT_EQ(set.lte_layer_3_collection_.bandwidth_, set2.lte_layer_3_collection_.bandwidth_);
	EXPECT_EQ(set.lte_layer_3_collection_.collection_time_, set2.lte_layer_3_collection_.collection_time_);

	EXPECT_EQ(set.umts_decode_layer_3_.max_update_threshold_, set2.umts_decode_layer_3_.max_update_threshold_);
	EXPECT_EQ(set.umts_decode_layer_3_.minimum_collection_round_, set2.umts_decode_layer_3_.minimum_collection_round_);
	EXPECT_EQ(set.umts_decode_layer_3_.decode_threshold_, set2.umts_decode_layer_3_.decode_threshold_);
	EXPECT_EQ(set.umts_decode_layer_3_.decode_minimum_threshold_, set2.umts_decode_layer_3_.decode_minimum_threshold_);

	EXPECT_EQ(set.lte_decode_layer_3_.max_update_threshold_, set2.lte_decode_layer_3_.max_update_threshold_);
	EXPECT_EQ(set.lte_decode_layer_3_.minimum_collection_round_, set2.lte_decode_layer_3_.minimum_collection_round_);
	EXPECT_EQ(set.lte_decode_layer_3_.decode_threshold_, set2.lte_decode_layer_3_.decode_threshold_);
	EXPECT_EQ(set.lte_decode_layer_3_.decode_minimum_threshold_, set2.lte_decode_layer_3_.decode_minimum_threshold_);

	EXPECT_EQ(set.umts_sweep_general_.sensitivity_, set2.umts_sweep_general_.sensitivity_);
	EXPECT_EQ(set.umts_sweep_general_.full_scan_interval_, set2.umts_sweep_general_.full_scan_interval_);
	EXPECT_EQ(set.umts_sweep_general_.num_coherent_slots_, set2.umts_sweep_general_.num_coherent_slots_);

	EXPECT_EQ(set.umts_layer_3_general_.sensitivity_, set2.umts_layer_3_general_.sensitivity_);
	EXPECT_EQ(set.umts_layer_3_general_.full_scan_interval_, set2.umts_layer_3_general_.full_scan_interval_);
	EXPECT_EQ(set.umts_layer_3_general_.num_coherent_slots_, set2.umts_layer_3_general_.num_coherent_slots_);

	EXPECT_EQ(set.frequency_correction_settings_.initial_frequency_correction_range_start_, set2.frequency_correction_settings_.initial_frequency_correction_range_start_);
	EXPECT_EQ(set.frequency_correction_settings_.initial_frequency_correction_range_end_, set2.frequency_correction_settings_.initial_frequency_correction_range_end_);
	EXPECT_EQ(set.frequency_correction_settings_.general_settings_.full_scan_interval_, set2.frequency_correction_settings_.general_settings_.full_scan_interval_);
	EXPECT_EQ(set.frequency_correction_settings_.general_settings_.num_coherent_slots_, set2.frequency_correction_settings_.general_settings_.num_coherent_slots_);
	EXPECT_EQ(set.frequency_correction_settings_.general_settings_.sensitivity_, set2.frequency_correction_settings_.general_settings_.sensitivity_);

	// Store default settings.
	set_io.clear();
	set_io.read(set);
	set_io.write(set);
}

TEST(QtSpecific, WriteDefaultSettings)
{
	using namespace rf_phreaker;

	settings set;
	//settings_io set_io("rf_phreaker_graph_test", "cappeen");
	settings_io set_io("cappeen_api.ini");

	set.log_level_ = 3;
	set.gps_collection_period_ms_ = 800;
	set.num_items_in_flight_ = 0;
	set.use_rf_board_adjustment_ = true;

	set.standard_output_.scanner_ = true;
	set.standard_output_.gps_ = true;
	set.standard_output_.umts_sweep_ = true;
	set.standard_output_.umts_layer_3_ = true;
	set.standard_output_.lte_sweep_ = true;
	set.standard_output_.lte_layer_3_ = true;

	set.signal_slots_.scanner_ = true;
	set.signal_slots_.gps_ = true;
	set.signal_slots_.umts_sweep_ = true;
	set.signal_slots_.umts_layer_3_ = true;
	set.signal_slots_.lte_sweep_ = true;
	set.signal_slots_.lte_layer_3_ = true;

	set.umts_sweep_collection_.sampling_rate_ = khz(4875);
	set.umts_sweep_collection_.bandwidth_ = mhz(5);
	set.umts_sweep_collection_.collection_time_ = milli_to_nano(32);

	set.umts_layer_3_collection_.sampling_rate_ = khz(4875);
	set.umts_layer_3_collection_.bandwidth_ = mhz(5);
	set.umts_layer_3_collection_.collection_time_ = milli_to_nano(170);

	set.umts_decode_layer_3_.max_update_threshold_ = 11000;
	set.umts_decode_layer_3_.minimum_collection_round_ = 5;
	set.umts_decode_layer_3_.decode_threshold_ = -13;
	set.umts_decode_layer_3_.decode_minimum_threshold_ = -25;

	set.umts_sweep_general_.sensitivity_ = -25;
	set.umts_sweep_general_.full_scan_interval_ = 1;
	set.umts_sweep_general_.num_coherent_slots_= 8;

	set.umts_layer_3_general_.sensitivity_ = -28;
	set.umts_layer_3_general_.full_scan_interval_ = 110;
	set.umts_layer_3_general_.num_coherent_slots_ = 14;

	set.lte_sweep_collection_.sampling_rate_ = khz(4875);
	set.lte_sweep_collection_.bandwidth_ = khz(2500);
	set.lte_sweep_collection_.collection_time_ = milli_to_nano(42);

	set.lte_layer_3_collection_.sampling_rate_ = khz(4875);
	set.lte_layer_3_collection_.bandwidth_ = khz(2500);
	set.lte_layer_3_collection_.collection_time_ = milli_to_nano(42);

	set.lte_decode_layer_3_.max_update_threshold_ = 110;
	set.lte_decode_layer_3_.minimum_collection_round_ = 5;
	set.lte_decode_layer_3_.decode_threshold_ = -13;
	set.lte_decode_layer_3_.decode_minimum_threshold_ = -25;

	set.frequency_correction_settings_.initial_frequency_correction_range_start_ = khz(-2);
	set.frequency_correction_settings_.initial_frequency_correction_range_end_ = khz(2);
	set.frequency_correction_settings_.general_settings_.full_scan_interval_ = 1;
	set.frequency_correction_settings_.general_settings_.num_coherent_slots_ = 2;
	set.frequency_correction_settings_.general_settings_.sensitivity_ = -23;

	set_io.write(set);
}