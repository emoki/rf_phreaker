#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "rf_phreaker/layer_3_common/lte_rrc_message_aggregate.h"
#include "rf_phreaker/layer_3_common/bcch_bch_message_aggregate_io.h"

namespace layer_3_information
{

inline std::ostream& operator<<(std::ostream &os, const lte_sib_base &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib_type &t);
inline std::ostream& operator<<(std::ostream &os, const scheduling_info &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib1_type &t);
inline std::ostream& operator<<(std::ostream &os, const physical_cellid_range &t);
inline std::ostream& operator<<(std::ostream &os, const neighbor_cell &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib4_type &t);
inline std::ostream& operator<<(std::ostream &os, const inter_freq_carrier_freq_info &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib5_type &t);
inline std::ostream& operator<<(std::ostream &os, const carrier_freq_utra &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib6_type &t);
inline std::ostream& operator<<(std::ostream &os, const carrier_freqs_geran &t);
inline std::ostream& operator<<(std::ostream &os, const carrier_freqs_info_geran &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib7_type &t);
inline std::ostream& operator<<(std::ostream &os, const neighbor_cells_per_band_class_cdma_2000 &t);
inline std::ostream& operator<<(std::ostream &os, const band_class_cmda_2000 &t);
inline std::ostream& operator<<(std::ostream &os, const neighbor_cell_cdma_2000 &t);
inline std::ostream& operator<<(std::ostream &os, const cell_reselection_parameters_cmda_2000 &t);
inline std::ostream& operator<<(std::ostream &os, const lte_sib8_type &t);
inline std::ostream& operator<<(std::ostream &os, const lte_rrc_message_aggregate &t);
inline std::ostream& operator<<(std::ostream &os, const lte_rrc_message_aggregate &t);

inline std::ostream& operator<<(std::ostream &os, const lte_sib_base &t)
{
	os << begin_delim << (t.decoded_ ? "decoded" : "NOT decoded") << end_delim;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib_type &t)
{
	switch(t) {
	case sib_3:
		os << "sib_3";
		break;
	case sib_4:
		os << "sib_4";
		break;
	case sib_5:
		os << "sib_5";
		break;
	case sib_6:
		os << "sib_6";
		break;
	case sib_7:
		os << "sib_7";
		break;
	case sib_8:
		os << "sib_8";
		break;
	case sib_9:
		os << "sib_9";
		break;
	case sib_10:
		os << "sib_10";
		break;
	case sib_11:
		os << "sib_11";
		break;
	case sib_12_v920:
		os << "sib_12_v920";
		break;
	case sib_13_v920:
		os << "sib_13_v920";
		break;
	case sib_14_v1130:
		os << "sib_14_v1130";
		break;
	case sib_15_v1130:
		os << "sib_15_v1130";
		break;
	case sib_16_v1130:
		os << "sib_16_v1130";
		break;
	case spare_2:
		os << "spare_2";
		break;
	case spare_1:
		os << "spare_1";
	break;
	default:
		os << "unknown";
	}
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const scheduling_info &t)
{
	for(auto &i : t.sib_mapping_info_)
		os << begin_delim << i << spacer3 << t.periodicity_in_frames_ << "f" << end_delim << spacer3;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<scheduling_info> &t)
{
	for(auto &i : t)
		os <<  i << spacer3;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib1_type &t)
{
	os << "sib1 " << static_cast<const lte_sib_base&>(t) << spacer
		<< t.tracking_area_code_ << spacer
		<< t.cell_id_ << spacer
		<< t.multiple_plmn_ << spacer
		<< t.scheduling_info_list_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const physical_cellid_range &t)
{
	os << t.start_ << spacer3 << t.range_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<physical_cellid_range> &t)
{
	for(auto &i : t)
		os << begin_delim << i << end_delim << spacer2;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const neighbor_cell &t)
{
	os << t.physical_cell_id_ << spacer3 << t.q_offset_cell_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<neighbor_cell> &t)
{
	for(auto &i : t)
		os << begin_delim << i << end_delim << spacer2;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib4_type &t)
{
	os << "sib4 " << static_cast<const lte_sib_base&>(t) << spacer
		<< t.csg_physical_cellid_range_ << spacer
		<< t.intra_freq_neighbor_cell_list_ << spacer
		<< t.intra_freq_black_cell_list_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const inter_freq_carrier_freq_info &t)
{
	os << t.downlink_arfcn_value_eutra_ << spacer3
		<< t.allowed_measurement_bandwidth_ << spacer3
		<< (t.presence_antenna_port_1_ ? "ant port1 detected" : "no ant port1") << spacer3
		<< t.q_offset_cell_ << spacer3
		<< t.q_rx_lev_min_ << spacer3
		<< t.inter_freq_neighbor_cell_list_ << spacer3
		<< t.inter_freq_black_cell_list_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<inter_freq_carrier_freq_info> &t)
{
	for(auto &i : t)
		os << begin_delim << i << end_delim << spacer2;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib5_type &t)
{
	os << "sib5 " << static_cast<const lte_sib_base&>(t) << spacer
		<< t.inter_freq_carrier_info_list_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const carrier_freq_utra &t)
{
	os << t.arfcn_value_utra_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<carrier_freq_utra> &t)
{
	for(auto &i : t)
		os << i << spacer3;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib6_type &t)
{
	os << "sib6 " << static_cast<const lte_sib_base&>(t) << spacer
		<< begin_delim << t.carrier_freq_list_utra_fdd_ << end_delim << spacer
		<< begin_delim << t.carrier_freq_list_utra_tdd_ << end_delim;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const carrier_freqs_geran &t)
{
	os << (t.band_indicator_ == dcs_1800_was_used ? "dcs_1800_was_used" : "pcs_1900_was_used") << spacer3
		<< t.starting_arfcn_ << spacer3 << begin_delim;
	for(auto &i : t.following_arfcns_)
		os << i << spacer3;
	os << end_delim;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const carrier_freqs_info_geran &t)
{
	os << t.carrier_freqs_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<carrier_freqs_info_geran> &t)
{
	for(auto &i : t)
		os << i.carrier_freqs_ << spacer2;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib7_type &t)
{
	os << "sib7 " << static_cast<const lte_sib_base&>(t) << spacer
		<< t.carrier_freqs_info_list_geran_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const neighbor_cells_per_band_class_cdma_2000 &t)
{
	os << t.arfcn_value_cmda_2000_ << spacer3 << begin_delim;
	for(auto &i : t.physical_cell_ids_)
		os << i << spacer3;
	os << end_delim;
	return os;
}
inline std::ostream& operator<<(std::ostream &os, const std::vector<neighbor_cells_per_band_class_cdma_2000> &t)
{
	for(auto &i : t)
		os << i << spacer3;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const band_class_cmda_2000 &t)
{
	switch(t) {
	case bc0:
		os << "bc0";
		break;
	case bc1:
		os << "bc1";
		break;
	case bc2:
		os << "bc2";
		break;
	case bc3:
		os << "bc3";
		break;
	case bc4:
		os << "bc4";
		break;
	case bc5:
		os << "bc5";
		break;
	case bc6:
		os << "bc6";
		break;
	case bc7:
		os << "bc7";
		break;
	case bc8:
		os << "bc8";
		break;
	case bc9:
		os << "bc9";
		break;
	case bc10:
		os << "bc10";
		break;
	case bc11:
		os << "bc11";
		break;
	case bc12:
		os << "bc12";
		break;
	case bc13:
		os << "bc13";
		break;
	case bc14:
		os << "bc14";
		break;
	case bc15:
		os << "bc15";
		break;
	case bc16:
		os << "bc16";
		break;
	case bc17:
		os << "bc17";
		break;
	case bc18_v9a0:
		os << "bc18_v9a0";
		break;
	case bc19_v9a0:
		os << "bc19_v9a0";
		break;
	case bc20_v9a0:
		os << "bc20_v9a0";
		break;
	case bc21_v9a0:
		os << "bc21_v9a0";
		break;
	case spare10:
		os << "spare10";
		break;
	case spare9:
		os << "spare9";
		break;
	case spare8:
		os << "spare8";
		break;
	case spare7:
		os << "spare7";
		break;
	case spare6:
		os << "spare6";
		break;
	case spare5:
		os << "spare5";
		break;
	case spare4:
		os << "spare4";
		break;
	case spare3:
		os << "spare3";
		break;
	case spare2:
		os << "spare2";
		break;
	case spare1:
		os << "spare1";
		break;
	default:
		os << "unknown band";
	}
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const neighbor_cell_cdma_2000 &t)
{
	os << t.band_ << spacer3
		<< begin_delim << t.neighbor_cells_per_freq_list_ << end_delim;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const std::vector<neighbor_cell_cdma_2000> &t)
{
	for(auto &i  : t)
		os << i << spacer2;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const cell_reselection_parameters_cmda_2000 &t)
{
	os << t.neighbor_cell_list_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_sib8_type &t)
{
	os << "sib8 " << static_cast<const lte_sib_base&>(t) << spacer
		<< t.parameters_hrpd_ << spacer
		<< t.parameters_1xrtt_;
	return os;
}

inline std::ostream& operator<<(std::ostream &os, const lte_rrc_message_aggregate &t)
{
	os << t.sib1_ << main_delim
		<< t.sib4_ << main_delim
		<< t.sib5_ << main_delim
		<< t.sib6_ << main_delim
		<< t.sib7_ << main_delim
		<< t.sib8_;
	return os;
}

}