/** @file beagle_defines.h
Contains "global" struct, enum, class, etc. definitions to support the Beagle API.
*/

#ifndef __BEAGLEDEFINES_H__
#define __BEAGLEDEFINES_H__


#include <stdint.h>

/** @addtogroup beagle beagle_dll
@{
*/
namespace beagle_api
{

	// A valid Qrxlevmin (inter_rat_gsm_rssi) is only valid from -25 to -115 
	// therefore -1 can be used to represent Qrxlevmin not decoded.
	static const int8_t inter_rat_rssi_not_decoded = -1;

	typedef int64_t frequency_type;
	typedef uint32_t beagle_id_type;
	typedef int32_t channel_type;
	typedef uint16_t cpich_type;
	typedef int8_t rssi_type;

	/**
		Represents different operating bands.
	*/
	enum TECHNOLOGIES_AND_BANDS {
		GSM_BAND_850, // [869 � 894 MHZ]
		GSM_BAND_900, // [925 - 960 MHZ]
		GSM_BAND_1800, // [1805 - 1880 MHZ]
		GSM_BAND_1900, // [1930 - 1960 MHZ]
		WCDMA_BAND_850, // operating band 5 [869 - 894 MHZ]
		WCDMA_BAND_900, // operating band 8 [925 � 960 MHZ] **also includes [921 - 925 MHZ]**
		WCDMA_BAND_1800, // operating band 3 [1805 - 1880 MHZ]
		WCDMA_BAND_1900, // operating band 2 [1930 - 1990 MHZ]
		WCDMA_BAND_2100, // operating band 1 and 4 [2110 - 2170 MHZ]
		LTE_BAND_1, // [2110 - 2170 MHZ]
		LTE_BAND_2, // [1930 - 1990 MHZ]
		LTE_BAND_3, // [1805 - 1880 MHZ]
		LTE_BAND_4, // [2110 - 2155 MHZ]
		LTE_BAND_5, // [869 - 894 MHZ]
		LTE_BAND_6,	// [875�- 885 MHZ]
		LTE_BAND_7, // [2620 - 2690 MHZ]
		LTE_BAND_8, // [925 - 960 MHZ]
		LTE_BAND_9, // [1844.9 - 1879.9 MHZ]
		LTE_BAND_10, // [2110�- 2170 MHZ]
		LTE_BAND_11, // [1475.9�- 1495.9 MHZ]
		LTE_BAND_12, // [729�- 746 MHZ]
		LTE_BAND_13, // [746�- 756 MHZ]
		LTE_BAND_14, // [758�- 768 MHZ]
		LTE_BAND_17, // [734�- 746 MHZ]
		LTE_BAND_18, // [860�- 875 MHZ]
		LTE_BAND_19, // [875�- 890 MHZ]
		LTE_BAND_20, // [791�- 821 MHZ]
		LTE_BAND_21, // [1495.9�- 1510.9 MHZ]
		LTE_BAND_22, // [3510�- 3590 MHZ]
		LTE_BAND_23, // [2180�- 2200 MHZ]
		LTE_BAND_24, // [1525�- 1559 MHZ]
		LTE_BAND_25, // [1930�- 1995 MHZ]
		LTE_BAND_26, // [859�- 894 MHZ]
		LTE_BAND_27, // [852�- 869 MHZ]
		LTE_BAND_28, // [758�- 803 MHZ]
		LTE_BAND_29, // [716�- 728 MHZ]
		LTE_BAND_30, // [2350 - 2360 MHZ]
		LTE_BAND_33, // [1900 - 1920 MHZ]
		LTE_BAND_34, // [2010�- 2025 MHZ]
		LTE_BAND_35, // [1850�- 1910 MHZ]
		LTE_BAND_36, // [1930�- 1990 MHZ]
		LTE_BAND_37, // [1910�- 1930 MHZ]
		LTE_BAND_38, // [2570�- 2620 MHZ]
		LTE_BAND_39, // [1880�- 1920 MHZ]
		LTE_BAND_40, // [2300�- 2400 MHZ]
		LTE_BAND_41, // [2496�- 2690 MHZ]
		LTE_BAND_42, // [3400�- 3600 MHZ]
		LTE_BAND_43, // [3600�- 3800 MHZ]
		LTE_BAND_44, // [703�- 803 MHZ]
		MAX_TECHNOLOGIES_AND_BANDS
	};

	/**
	Represents all possible bands installed in the scanner.
	*/
	enum BANDS {
		BAND_700, // [729 - 803 MHZ]  
		BAND_850, // [791 - 894 MHZ]
		BAND_900, // [921 - 960 MHZ]
		BAND_1700, // [1710 - 1785 MHZ]
		BAND_1800, // [1805 - 1880 MHZ]
		BAND_1900, // [1930 - 1995 MHZ]
		BAND_2100, // [2100 - 2170 MHZ]
		BAND_2300, // [2300 - 2400 MHZ]
		BAND_2600, // [2620 - 2690 MHZ].
		MAX_NUM_BANDS
	};

	/**
	Used within GSM Inter Frequency RAT structure.  Helps determine band when UARFCN is ambiguous.
	*/
	enum BAND_INDICATOR {
		DCS_1800_WAS_USED = 0,
		PCS_1900_WAS_USED = 1,
	};

	enum LTE_SIB_TYPE {
		LTE_SIB_3,
		LTE_SIB_4,
		LTE_SIB_5,
		LTE_SIB_6,
		LTE_SIB_7,
		LTE_SIB_8,
		LTE_SIB_9,
		LTE_SIB_10,
		LTE_SIB_11,
		LTE_SIB_12_V920,
		LTE_SIB_13_V920,
		LTE_SIB_14_V1130,
		LTE_SIB_15_V1130,
		LTE_SIB_16_V1130,
		LTE_SPARE_2,
		LTE_SPARE_1
	};

	enum BAND_CLASS_CMDA_2000 {
		BC0,
		BC1,
		BC2,
		BC3,
		BC4,
		BC5,
		BC6,
		BC7,
		BC8,
		BC9,
		BC10,
		BC11,
		BC12,
		BC13,
		BC14,
		BC15,
		BC16,
		BC17,
		BC18_V9A0,
		BC19_V9A0,
		BC20_V9A0,
		BC21_V9A0,
		SPARE10,
		SPARE9,
		SPARE8,
		SPARE7,
		SPARE6,
		SPARE5,
		SPARE4,
		SPARE3,
		SPARE2,
		SPARE1
	};

	/**
	Encapsulates a PLMN.
	*/
	struct plmn {
		char mcc_[4];
		char mnc_[4];
	};

	/**
	Contains multiple PLMN.
	*/
	struct plmn_group {
		uint32_t num_elements_;
		plmn *elements_;
	};

	/**
	Contains multiple bands.
	*/
	struct band_group {
		uint32_t num_elements_;
		BANDS *elements_;
	};

	/**
	Contains multiple technologies/bands.
	*/
	struct technologies_and_band_group {
		uint32_t num_elements_;
		TECHNOLOGIES_AND_BANDS *elements_;
	};
	
	struct band_freq {
		TECHNOLOGIES_AND_BANDS band_;
		frequency_type frequency_;
	};

	/**
		Contains multiple band/freqs.
	*/
	struct technology_band_freq_group {
		uint32_t num_elements_;
		band_freq *elements_;
	};

	/**
	Can represent GSM/UMTS/LTE channels.
	*/
	struct channel_group {
		uint32_t num_elements_;
		channel_type *elements_;
	};

	typedef channel_group gsm_bcch_neighbors_group;
	typedef channel_group gsm_utran_scrambling_code_group;
	typedef channel_group gsm_pcid_group;
	typedef channel_group gsm_extended_earfcn_group;

	struct gsm_si_1 {
		bool decoded_;
		BAND_INDICATOR band_indicator_;
	};
	
	struct gsm_si_2 {
		bool decoded_;
		int32_t ba_ind_; 
		int32_t ext_ind_;
		gsm_bcch_neighbors_group bcch_neighbors_;
	};

	struct gsm_si_2bis {
		bool decoded_;
		int32_t ba_ind_;
		int32_t ext_ind_;
		gsm_bcch_neighbors_group bcch_neighbors_;
		int32_t rest_octet_index_;
		int32_t rest_octet_count_;
	};

	enum DUPLEX {
		FDD,
		TDD
	};

	enum UTRAN_BANDWIDTH {
		UTRAN_3_84_MCPS, 
		UTRAN_1_24_MCPS, 
		UTRAN_2_MCPS,
		UTRAN_3_MCPS,
		UTRAN_4_MCPS,
		UTRAN_5_MCPS,
		UTRAN_6_MCPS,
		UTRAN_7_MCPS,
	};

	struct gsm_utran_neighbor {
		channel_type uarfcn_;
		DUPLEX duplexing_;
		UTRAN_BANDWIDTH bandwidth_;
		gsm_utran_scrambling_code_group scrambling_codes_;
	};
	
	struct gsm_utran_neighbor_group {
		uint32_t num_elements_;
		gsm_utran_neighbor *elements_;
	};

	struct gsm_si_2ter {
		bool decoded_;
		int32_t ba_ind_;
		int32_t bcch_neighbor_multiband_reporting_;
		gsm_bcch_neighbors_group bcch_neighbors_;
		gsm_utran_neighbor_group utran_neighbors_;
		int32_t rest_octet_index_;
		int32_t rest_octet_count_;
	};

	struct gsm_pcid_groups {
		uint32_t num_elements_;
		gsm_pcid_group *elements_;
	};

	struct gsm_eutran_neighbor {
		channel_type earfcn_;
		int32_t bandwidth_in_resource_blocks_;
		int32_t priority_;
		int32_t threshold_high_db_;
		int32_t threshold_low_db_;
		int32_t qrxlevmin_db_;
		gsm_pcid_group pcids_not_allowed_;
		gsm_pcid_group pcids_allowed_;
		gsm_pcid_groups pcids_same_tracking_area_;
		gsm_pcid_groups pcids_different_tracking_area_;
	};
	
	struct gsm_eutran_neighbor_group {
		uint32_t num_elements_;
		gsm_eutran_neighbor *elements_;
	};
	
	struct gsm_si_2quater {
		bool decoded_;
		int32_t ba_ind_;
		int32_t ba_ind_3g_;
		gsm_utran_neighbor_group utran_neighbors_;
		gsm_eutran_neighbor_group eutran_neighbors_;
		gsm_extended_earfcn_group extended_earfcns_;
		int32_t rest_octet_index_;
		int32_t rest_octet_count_;
	};

	struct gsm_si_3 {
		bool decoded_;
		plmn plmn_;
		int32_t lac_;
		int32_t cid_;
		int32_t cell_reselect_hysteresis_db_;
		int32_t cell_reselect_offset_db_;
		bool is_2ter_present_;
		bool is_2quater_present_;
	};

	struct gsm_si_4 {
		bool decoded_;
		plmn plmn_;
		int32_t lac_;
		int32_t cid_;
		int32_t cell_reselect_hysteresis_db_;
		int32_t cell_reselect_offset_db_;
		bool is_cbch_present_;
	};


	/**
	Encapsulates intra frequency neighbor list decoded from SIB 11/SIB 11bis.
	*/
	struct umts_neighbor_intra_group {
		uint32_t num_elements_;
		cpich_type *elements_;
	};

	/**
	Encapsulates inter frequency neighbor decoded from SIB 11/SIB 11bis.
	*/
	struct umts_neighbor_inter {
		// UARFCN
		channel_type channel_;
		// Scrambling code
		cpich_type cpich_;
	};

	/**
	*/
	struct umts_neighbor_inter_group {
		uint32_t num_elements_;
		umts_neighbor_inter *elements_;
	};

	/**
	Encapsulates inter RAT frequency neighbor.
	*/
	struct umts_neighbor_inter_rat_gsm {
		channel_type channel_;
		char bsic_[3];
		BAND_INDICATOR band_indicator_;
		rssi_type rssi_;
	};

	/**
	Encapsulates neighbor inter RAT frequency list decoded from SIB 11/SIB 11bis.
	Specified as gsm because we ignore any IS-2000 information.
	*/
	struct umts_neighbor_inter_rat_gsm_group {
		uint32_t num_elements_;
		umts_neighbor_inter_rat_gsm *elements_;
	};

	/**
	Encasulates UMTS SIB 18.
	*/
	struct umts_sib_18 {
		bool decoded_;
		plmn_group plmns_;
	};

	struct lte_scheduled_sib {
		LTE_SIB_TYPE sib;
		int32_t periodicity_in_frames_;
	};

	struct lte_scheduled_sib_group {
		uint32_t num_elements_;
		lte_scheduled_sib *elements_;
	};

	struct lte_sib_1 {
		/// Specifies if we were able to decode this particular System information block.
		bool decoded_;

		/// The list of PLMNS decoded within SIB1.
		plmn_group plmns_;

		/// Tracking Area Code.
		int16_t tac_;

		/// Cell ID
		int32_t cid_;

		/// Specifies the SIBs scheduled.  Includes frame periodicity. 
		lte_scheduled_sib_group scheduled_sibs_;
	};

	struct cell_reselection_serving_freq_info {
		int32_t s_non_intra_search_;
		int32_t threshold_serving_low_;
		int32_t cell_reselection_priority_;
	};

	struct intra_freq_cell_reselection_info {
		int32_t s_intra_search_;
	};

	struct s_search_v920 {
		int32_t reselection_threshold_p_;
		int32_t reselection_threshold_q_;
	};

	struct lte_sib_3 {
		bool decoded_;
		cell_reselection_serving_freq_info cell_reselection_serving_freq_info_;
		intra_freq_cell_reselection_info intra_freq_cell_reselection_info_;
		s_search_v920 s_intra_search_v920_;
		s_search_v920 s_non_intra_search_v920_;
		int32_t threshold_serving_low_q_;
	};

	/**
	Is used to encode either a single or a range of lte physical cell identities. The range is encoded by
	using a  start value and by indicating the number of consecutive physical cell identities (including start ) in the range.
	*/
	struct lte_physical_cell_id_range {
		int32_t start_;
		int32_t range_;
	};

	struct lte_physical_cell_id_range_group {
		uint32_t num_elements_;
		lte_physical_cell_id_range *elements_;
	};

	struct lte_neighbor_cell {
		int32_t physical_cell_id_;
		int32_t q_offset_cell_;
	};

	struct lte_neighbor_cell_group {
		uint32_t num_elements_;
		lte_neighbor_cell *elements_;
	};

	struct lte_sib_4 {
		bool decoded_;
		lte_neighbor_cell_group intra_freq_neighbor_cell_list_;
		lte_physical_cell_id_range_group intra_freq_black_cell_list_;
		lte_physical_cell_id_range csg_physical_cellid_range_;
	};

	struct lte_neighbor_inter {
		channel_type downlink_arfcn_value_eutra_;
		int32_t allowed_measurement_bandwidth_;
		bool presence_antenna_port_1_;
		int32_t q_rx_lev_min_;
		int32_t q_offset_freq_;
		int32_t threshold_x_high_;
		int32_t threshold_x_low_;
		int32_t threshold_x_high_q_r9_;
		int32_t threshold_x_low_q_r9_;
		int32_t cell_reselection_priority_;
		lte_neighbor_cell_group inter_freq_neighbor_cell_list_;
		lte_physical_cell_id_range_group inter_freq_black_cell_list_;
	};

	struct lte_neighbor_inter_group {
		uint32_t num_elements_;
		lte_neighbor_inter *elements_;
	};

	struct lte_sib_5 {
		bool decoded_;
		lte_neighbor_inter_group inter_freq_carrier_info_list_;
	};

	struct carrier_freq_utra {
		int32_t arfcn_value_utra_;
		int32_t threshold_x_low_;
		int32_t threshold_x_high_;
		int32_t threshold_x_low_q_r9_;
		int32_t threshold_x_high_q_r9_;
		int32_t cell_reselection_priority_;
	};

	struct carrier_freq_utra_group {
		uint32_t num_elements_;
		carrier_freq_utra *elements_;
	};


	struct lte_sib_6 {
		bool decoded_;
		carrier_freq_utra_group carrier_freq_list_utra_fdd_;
		carrier_freq_utra_group carrier_freq_list_utra_tdd_;
	};

	struct geran_common_info {
		int32_t cell_reselection_priority_;
		int32_t threshold_x_high_;
		int32_t threshold_x_low_;
	};

	struct lte_neighbor_inter_rat_geran {
		BAND_INDICATOR band_indicator_;
		channel_group arfcns_;
		geran_common_info common_info_;
	};

	struct lte_neighbor_inter_rat_geran_group {
		uint32_t num_elements_;
		lte_neighbor_inter_rat_geran *elements_;
	};

	struct lte_sib_7 {
		bool decoded_;
		lte_neighbor_inter_rat_geran_group carrier_freqs_;
	};

	struct physical_cell_id_cdma_2000_group {
		uint32_t num_elements_;
		int32_t *elements_;
	};

	struct lte_neighbor_inter_rat_cdma_2000 {
		BAND_CLASS_CMDA_2000 band_;
		channel_type arfcn_value_cmda_2000_;
		physical_cell_id_cdma_2000_group physical_cell_ids_;
	};

	struct lte_neighbor_inter_rat_cdma_2000_group {
		uint32_t num_elements_;
		lte_neighbor_inter_rat_cdma_2000 *elements_;
	};

	struct lte_sib_8 {
		bool decoded_;
		lte_neighbor_inter_rat_cdma_2000_group parameters_hrpd_;
		lte_neighbor_inter_rat_cdma_2000_group parameters_1xrtt_;
	};

	/**
	Encapsulates parameters used during collection.
	*/
	struct collection_info {
		/// Specifies the technologies and bands to sweep during collection.
		technologies_and_band_group tech_and_bands_to_sweep_;

		/// Specifies the technologies and freqs to scan during collection.
		technology_band_freq_group frequencies_to_scan_;
	};

	/**
	The different states of the beagle.
	*/
	enum BEAGLESTATE {
		BEAGLE_USBCLOSED = 0, /// USB Module is closed.

		BEAGLE_USBOPENED,	/// USB Module is open, but the status of the Beagle unit is unknown.

		BEAGLE_WARMINGUP,	/// Beagle is acquiring satellites and calibrating.

		BEAGLE_READY,	/// Beagle is calibrated and ready to go.  For calibration Beagle needs 45 seconds of uninterrupted GPS lock.

		BEAGLE_COLLECTING,	/// Beagle is collecting data.

		BEAGLE_CALCULATING_FREQUENCY_CORRECTION, /// Beagle is calculating frequency correction

		BEAGLE_ERROR = -1	/// A substantial error occurred within Beagle.  

	};

	enum DEVICESPEED {
		UNKOWN_SPEED, /// We were unable to determine the speed of the device.

		USB_HI_SPEED, /// The device is USB 2.0.  

		USB_SUPER_SPEED /// The device is USB 3.0.
	};

	/**
	Gives a description of the beagle unit.
	*/
	struct beagle_info {
		/// A unique ID which corresponds to the Beagle unit.  Also used in callback class to identify 
		/// which unit the information originated from.
		beagle_id_type beagle_id_;

		/// Current state of the beagle unit.
		BEAGLESTATE state_;

		/// A 32 hex character string plus NULL representing the serial.
		char beagle_serial_[33];

		/// List of the valid licenses installed on the beagle unit.  
		technologies_and_band_group valid_licenses_;

		/// List of the bands installed on the hardware.
		band_group available_bands_in_hardware_;

		/// Seconds since 1970.  Refers to the last time the beagle unit was calibrated to measure signal
		/// level properly.
		int64_t rf_calibration_date_;

		/// Seconds since 1970.  Refers to the last time we calculated a DDS clock correction.  This value is used
		/// when the beagle unit has not had initial GPS lock and is collecting data.  For ideal processing it is good to keep this number 
		/// under 1 week.
		int64_t dds_clock_correction_calibration_date_;

		/// Specifies the type of communication that has been established with the scanner. 
		DEVICESPEED device_speed_;
	};

	/**
	Encapsulates the Beagle hardware calibration and GPS data.
	*/
	struct gps_info {
		/// True if Beagle is calibrated.  Calibration will occur after 45 seconds of uninterrupted GPS lock.
		/// @note Beagle needs to be calibrated to properly decode signals.
		bool hw_calibrated_;

		/// True if Beagle has a 2D lock or better.
		bool gps_locked_;

		/// Universal time coordinate stored as seconds since January 1970.
		int64_t utc_time_;

		/// Number of satellites within the GPS almanac.
		uint32_t num_visible_sat_;

		/// Number of satellites GPS is actively tracking.  Needs to be at least 3 for 2D locked.
		uint32_t num_track_sat_;

		/// Latitude.
		double lat_;

		/// Longitude. 
		double lon_;

		/// Reserved
		uint16_t raw_gps_status_;

	};

	/**
	Encapsulates a GSM measurement.
	*/
	struct gsm_sector_info {
		/// Specifies a complete set of measurments.
		uint32_t collection_round_;

		/// Carrier frequency in Hz.
		frequency_type carrier_freq_;

		/// Received signal strength indicator in dBm.
		double rssi_;

		/// GSM channel.
		channel_type arfcn_;

		/// Corresponds to the GSM operating band.
		TECHNOLOGIES_AND_BANDS operating_band_;

		/// Base station identity code.  -1 if not decoded.
		int32_t bsic_;

		/// Signal level of GSM cell in dBm.
		double cell_sl_;

		/// Carrier to Interference ratio in dB.
		double ctoi_;

		gsm_si_1 si_1_;
		gsm_si_2 si_2_;
		gsm_si_2bis si_2bis_;
		gsm_si_2ter si_2ter_;
		gsm_si_2quater si_2quater_;
		gsm_si_3 si_3_;
		gsm_si_4 si_4_;
	};

	/**
	Encapsulates a GSM sweep measurement.
	*/
	struct gsm_sweep_info {
		/// Center frequency in Hz.
		frequency_type frequency_;

		/// Power (dBm) of a 200 KHz bin that is centered around the frequency.  
		double rssi_;
	};


	/**
	Encapsulates a UMTS measurement.
	*/
	struct umts_sector_info {
		/// Specifies a complete set of measurments.
		uint32_t collection_round_;

		/// Carrier frequency in Hz.  Always valid.
		frequency_type carrier_freq_;

		/// Signal level of Carrier.  Always valid.
		double carrier_sl_;

		/// UMTS channel.  Always valid.
		uint16_t uarfcn_;

		/// Decoded Mobile Country Code.  0xFFFF if not successfully decoded.
		uint16_t mcc_;

		/// Decoded Mobile Network Code.  0xFFFF if not successfully decoded.
		uint16_t mnc_;

		/// Decoded Location Area Code.  0xFFFF if not successfully decoded.
		uint16_t lac_;

		/// Decoded Cellular Identity.  0xFFFFFFFF if not successfully decoded.
		uint32_t cell_id_;

		/// Common pilot channel.  Always valid. 
		uint16_t cpich_;

		/// Received energy per chip to the interference level in dB.  Always valid.
		double ecio_;

		/// Received Signal Code Power in dBm.  Represents the signal level coming from a specific sector.
		double rscp_;

		//// Corresponds to the hardware band the info was measured on.
		BANDS band_;

		/// True if mcc was decoded with three digits.  Allows for leading zero.
		bool mcc_three_digits_;

		/// True if mnc was decoded with three digits.  Allows for leading zero.
		bool mnc_three_digits_;

		/// Neighbor intra frequency list.  Decoded from SIB 11 or SIB 11bis.
		umts_neighbor_intra_group neighbor_intra_group_;

		/// Neighbor inter frequency list.  Decoded from SIB 11 or SIB 11bis.
		umts_neighbor_inter_group neighbor_inter_group_;

		/// Neighbor inter frequency RAT list.  Decoded from SIB 11 or SIB 11bis.
		umts_neighbor_inter_rat_gsm_group neighbor_inter_rat_gsm_group_;

		/// Contains the PLMN of the inter frequency list.  Currently not decoded.
		umts_sib_18 sib_18_group_;
	};

	/**
	Encapsulates a UMTS sweep measurement.
	*/
	struct umts_sweep_info
	{
		/// Frequency in Hz
		frequency_type frequency_;

		/// Power within a 4 MHz bin centered around the frequency.
		double rssi_;
	};

	/**
	Encapsulates a LTE measurement.
	*/
	struct lte_sector_info {
		/// Specifies a complete set of measurments.
		uint32_t collection_round_;

		/// Carrier frequency in Hz.  
		frequency_type carrier_freq_;

		/// Total power within the bandwidth of the LTE channel.  When channel bandwidth is not decoded, the bandwidth is specified via 
		/// the configuration file.
		double carrier_sl_;

		/// LTE channel number. 
		uint16_t earfcn_;

		/// Corresponds to the LTE operating band.
		TECHNOLOGIES_AND_BANDS lte_operating_band_;

		/// Physical cell ID.  Equal to 3 * Physical layer cell identity group + physical layer identity.
		int32_t physical_cell_id_;

		/// Reference Signal Received Power.  Linear average over the power contributions of the resource elements
		/// that carry cell-specific reference signals within 15 resource blocks.
		double rsrp_;

		/// Reference Signal Received Quality.  The ratio of (NumResourceBlocks * RSRP) / RSSI; NumResourceBlocks = 15.
		double rsrq_;

		/// E-UTRA Carrier Received Signal Strength Indicator.  The linear average of the total received power
		/// observed only in the OFDM symbols containing reference symbols for antenna port 0.  
		/// Calculated using a bandwidth of 15 resource blocks.
		double rssi_;

		/// Physical layer identity.  
		int16_t primary_sync_id_;

		///  Ratio of the primary sync signal vs total received power.
		double primary_sync_quality_;

		/// Physical layer cell identity group number.
		int16_t secondary_sync_id_;

		///  Ratio of the secondary sync signal vs total received power.
		double secondary_sync_quality_;

		/// Full bandwidth of the LTE channel.
		frequency_type carrier_bandwidth_;

		/// Number of antenna ports used by LTE cell.
		int8_t antenna_ports_;

		/// 1 = Normal (7 symbols per slot), 2 = Extended (6 symbols per slot)
		int8_t cyclic_prefix_length_;

		/// System frame number.
		int32_t system_frame_number_;

		/// System information.
		lte_sib_1 sib_1_;
		lte_sib_3 sib_3_;
		lte_sib_4 sib_4_;
		lte_sib_5 sib_5_;
		lte_sib_6 sib_6_;
		lte_sib_7 sib_7_;
		lte_sib_8 sib_8_;
	};

	/**
	Encapsulates a LTE sweep measurement.
	*/
	struct lte_sweep_info
	{
		/// Center frequency in Hz.
		frequency_type frequency_;

		/// Power within a bin size (based on the configuration file) that is centered around the frequency.
		double rssi_;
	};

	/**
	Callback interface must be a base class to the class which will access the beagle data during runtime.
	The derived class should not block the calling thread as this will slow or possibly stop beagle collection.
	*/
	class beagle_delegate {
	public:
		virtual __stdcall ~beagle_delegate() {};

		/// Called by Beagle when there is a change in Beagle's state.
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info See BeagleInfo.
		virtual void __stdcall available_beagle_info(beagle_id_type beagle_id, const beagle_info &info) = 0;

		/// Called by Beagle when several times a second.  Allows access to the GPS information.  
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info See GpsInfo.
		virtual void __stdcall available_gps_info(beagle_id_type beagle_id, const gps_info &info) = 0;

		/// Called by Beagle when there is new GSM data.  
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of gsm_sector_info
		/// @param num_records Number of gsm_sector_info structs within the info array.
		virtual void __stdcall available_gsm_sector_info(beagle_id_type beagle_id, const gsm_sector_info *info, long num_records) = 0;

		/// Called by Beagle when there is new GSM data.  
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of gsm_sweep_info
		/// @param num_records Number of gsm_sweep_info structs within the info array.
		virtual void __stdcall available_gsm_sweep_info(beagle_id_type beagle_id, const gsm_sweep_info *info, long num_records) = 0;

		/// Called by Beagle when there is new UMTS data. 
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of umts_sector_info.
		/// @param num_records Number of umts_sector_info structs within the info array.
		virtual void __stdcall available_umts_sector_info(beagle_id_type beagle_id, const umts_sector_info *info, long num_records) = 0;

		/// Called by Beagle when there is new UMTS sweep data. 
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of umts_sweep_info.
		/// @param num_records Number of umts_sweep_info structs within the info array.
		virtual void __stdcall available_umts_sweep_info(beagle_id_type beagle_id, const umts_sweep_info *info, long num_records) = 0;

		/// Called by Beagle when there is new LTE data. 
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of lte_sector_info.
		/// @param num_records Number of lte_sector_info structs within the info array.
		virtual void __stdcall available_lte_sector_info(beagle_id_type beagle_id, const lte_sector_info *info, long num_records) = 0;

		/// Called by Beagle when there is new LTE sweep data. 
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param info Array of lte_sweep_info.
		/// @param num_records Number of lte_sweep_info structs within the info array.
		virtual void __stdcall available_lte_sweep_info(beagle_id_type beagle_id, const lte_sweep_info *info, long num_records) = 0;

		/// Called by Beagle when an error or warning has occurred.  
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param error Error Number
		/// @param str Error description.
		/// @param buf_size Size (in bytes) of str.
		virtual void __stdcall available_error(beagle_id_type beagle_id, long error, const char *str, long buf_size) = 0;

		/// Called by Beagle to display log information.
		/// @param beagle_id A unique ID which corresponds to the Beagle unit.
		/// @param possible_message_number Message number associated with description.
		/// @param str The message description.
		/// @param buf_size Size (in bytes) of str.
		virtual void __stdcall available_message(beagle_id_type beagle_id, long possible_message_number, const char *str, long buf_size) = 0;
	};

	/**
	@enum ERRORCODES
	Lists the different errors that can occur.
	@remark
	Errors -1 thru -44 are reserved for QUICKUSB.  For more information please refer to the Quick USB documentation. @n
	Some errrors will cause data collection and/or GPS collection to stop.  This can be noted by observing the beagle_info::state_.
	*/
	enum ERRORCODES {
		USB_OUTOFMEMORY = -1,
		USB_CANNOTOPENMODULE = -2,
		USB_CANNOTFINDUSBMODULE = -3,
		USB_IOCTRLFAILED = -4,
		USB_DATATOOLARGEORSMALLFORREADWRITE = -5,
		USB_TIMEOUTOCCURREDREADWRITE = -6,
		USB_FUNCTIONNOTSUPPORTED = -7,
		USB_I2CBUSERROR = -8,
		USB_NOACKRECEIVEDFROMI2C = -9,
		USB_I2CSLAVEDEVICEHOLDINGSCLLOW = -10,
		USB_TIMEOUTI2C = -11,
		USB_UNKNOWNDRIVERTYPE = -12,
		USB_ALREADYOPENED = -13,
		USB_CANNOTCLOSEMODULE = -14,
		USB_FPGAINITFAILED = -15,
		USB_PACKETNOTMULTIPLE512 = -16,
		USB_PACKETNOTMULTIPLE64 = -17,
		USB_UNKNOWNSYSTEMERROR = -18,
		USB_ABORTED = -19,
		USB_DEPRECATED = -20,
		USB_INVALIDSERIAL = -21,
		USB_CANNOTOPENFILE = -22,
		USB_VERIFYFAILED = -23,
		USB_FIRMWAREERROR = -24,
		USB_ALREADYCOMPLETED = -25,
		USB_NOTCOMPLETED = -26,
		USB_FPGACONFIGFAILED = -27,
		USB_INVALIDOPERATION = -28,
		USB_TOOMANYREQUESTS = -29,
		USB_EPCSNOTFOUND = -30,
		USB_EPCSTOOSMALL = -31,
		USB_NOTSTREAMING = -32,
		USB_BUFFERNOTALIGNED = -33,
		USB_INTERNALERROR = -34,
		USB_DEVICEISCLOSING = -35,
		USB_PROTECTION = -36,
		USB_NEEDDATA = -37,
		USB_FILENOTFOUND = -38,
		USB_FILEALREADYEXISTS = -39,
		USB_FILERW = -40,
		USB_FILEEOF = -41,
		USB_FILENAME = -42,
		USB_ACCESSDENIED = -43,
		USB_SHARINGVIOLATION = -44,
		USBCOMMUNICATIONERROR = -45,

		EXPIREDDLL = -100,
		HWUSBCOMMERROR,
		HWCOMMUNICATIONERROR,
		COMMUNICATIONERROR,
		CALIBRATIONERROR,
		UNKNOWN_ERROR,
		GENERAL_ERROR,
		STD_EXCEPTION_ERROR,

		BEAGLEUNABLETOINITIALIZE = -400,
		BEAGLENOTINITIALIZED,
		BEAGLEALREADYINITIALIZED,
		BEAGLEBUSY,
		BEAGLELOGERROR,
		BEAGLEINSTANCEALREADYRUNNING,

		WRONGBEAGLESTATE = -500,
		COMMNOTFOUND,
		COULDNOTFINDFREQ,
		NOMODULESFOUND,
		UNABLETOPARSEBEAGLENAMES,
		MAXGSMPROCESSINGOUTAGE,
		MAXUMTSPROCESSINGOUTAGE,
		EXPIREDLICENSE,
		CORRUPTLICENSE,
		FREQNOTWITHINCALIBRATIONLIMITS,
		FREQNOTLICENSED,
		UNABLETOSTOPCOMMUNICATIONTHREADS,
		UNABLETOSTOPPROCESSINGTHREADS,
		UNABLETOSTOPCOLLECTIONTHREADS,

		MAXGPSOUTAGE = -600,
		DLLNOTVALID = -601,
		POSSIBLERFANTENNAFAULT = -602,

		INVALIDPACKET = -700,

		NOTUSINGCUDA = -800,
		FUNCTION_NOT_IMPLEMENTED,

		CRITICAL_SECTION_ERROR = -10000,

		BUFFER_TOO_SMALL,
		FREQUENCY_CORRECTION_FAILED,
		WRONG_SPEED_DETECTED,
		FREQUENCY_CORRECTION_VALUE_INVALID,
		CONFIGURATION_FILE_NOT_FOUND
	};



	/**
	@}
	*/

}
#endif 
