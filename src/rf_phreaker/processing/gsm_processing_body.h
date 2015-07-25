#pragma once
#include "tbb/flow_graph.h"
#include "rf_phreaker/processing/node_defs.h"
#include "rf_phreaker/processing/layer_3_tracker.h"
#include "rf_phreaker/processing/scanner_error_tracker.h"
#include "rf_phreaker/processing/frequency_correction_calculator.h"
#include "rf_phreaker/processing/processing_and_feedback_helper.h"
#include "rf_phreaker/gsm_analysis/gsm_analysis.h"
#include "rf_phreaker/gsm_analysis/gsm_config.h"
#include "rf_phreaker/common/settings.h"
#include "rf_phreaker/common/common_utility.h"
#include "rf_phreaker/common/frequency_bin_calculator.h"

namespace rf_phreaker { namespace processing {

class gsm_cell_search_settings
{
public:
	gsm_cell_search_settings(const collection_settings &s, const gsm_general_settings &g)
		: gsm_general_(g)
		, gsm_config_(g.perform_sync_correlations_, (int)s.sampling_rate_, (int)s.sampling_rate_, rf_phreaker::convert_to_samples(s.collection_time_, s.sampling_rate_),
			(int)g.side_power_threshold_, (int)g.band_power_threshold_, (int)s.bandwidth_) {}

	gsm_config gsm_config_;
	gsm_general_settings gsm_general_;
};

class gsm_processing_body
{
public:
	gsm_processing_body(const gsm_cell_search_settings &config, std::atomic_bool *is_cancelled = nullptr)
		: analysis_(config.gsm_config_, is_cancelled)
		, tracker_(70/*config.layer_3_.max_update_threshold_*/)
		, config_(config) {
		//if(config.layer_3_.wanted_layer_3_.empty()) {
		//	LOG(LVERBOSE) << "Defaulting to decoding all GSM SIBs.";
		//	std::vector<layer_3_information::gsm_sib_type> wanted;
		//	wanted.push_back(layer_3_information::gsm_sib_type::SIB1);
		//	wanted.push_back(layer_3_information::gsm_sib_type::SIB3_SIB4);
		//	wanted.push_back(layer_3_information::gsm_sib_type::SIB11);
		//	tracker_.set_wanted_layer_3(wanted);
		//}
		//else
		//	tracker_.set_wanted_layer_3((std::vector<layer_3_information::gsm_sib_type>&)config.layer_3_.wanted_layer_3_);
	}

	gsm_processing_body(const gsm_processing_body &body)
		: analysis_(body.config_.gsm_config_)
		, tracker_(body.tracker_.max_update_, body.tracker_.wanted_layer_3())
		, config_(body.config_) {}

	//gsm_processing_body(gsm_processing_body &&body)
	//	: gsm_analysis_(std::move(body.gsm_analysis_))
	//{}

	gsm_info operator()(measurement_package package) {
		auto meas = *package.measurement_info_.get();
		gsm_measurements gsm_group;

		int status = analysis_.cell_search(meas, gsm_group, config_.gsm_general_.perform_sync_correlations_);
		if(status != 0)
			throw gsm_analysis_error("Error processing gsm.");

		// Remove any measurements that are lower than are confidence threshold.  Note we should always keep measurements
		// that have a BSIC decoded.
		gsm_group.erase(std::remove_if(gsm_group.begin(), gsm_group.end(), [&](const gsm_measurement& m) {
			return m.norm_sync_corr_ < config_.gsm_general_.sync_corr_confidence_threshold_ && m.bsic_ == -1;
		}), gsm_group.end());

		LOG_IF(LCOLLECTION, (gsm_group.size() != 0)) << "GSM processing - Found " << gsm_group.size() << " GSM measurements using a center frequency of " 
			<< meas.frequency() / 1e6 << "mhz and a bandwidth of " << meas.bandwidth() / 1e6 << "mhz";

		freq_bin_calculator_.calculate_power_in_bins(meas.get_iq(), meas.sampling_rate(), gsm_channel_bandwidth_, 131072);

		auto center_freq = meas.frequency();
		if(center_freq % khz(200) == 0)
			center_freq -= khz(100);

		power_info_group p_info_group;
		for(frequency_type freq = -khz(1500); freq <= khz(1500); freq += gsm_channel_bandwidth_) {
			p_info_group.push_back(power_info(center_freq + freq, gsm_channel_bandwidth_, freq_bin_calculator_.get_power_in_bin(freq)));
		}

		return gsm_info(std::move(package), std::move(gsm_group), std::move(p_info_group));
	}

	gsm_info operator()(gsm_info info) {
		auto meas = *info.measurement_package_.measurement_info_.get();
		// If the collection round is 0 it means we need to start decoding from scratch.
		if(helper_.has_layer_3_restarted(meas)) {
			tracker_.clear();
		}

		auto freq = meas.frequency();
		for(auto &data : info.processed_data_) {
			//if(!tracker_.is_fully_decoded(freq, data) && (data.c_i_ratio_ > config_.layer_3_.decode_threshold_ || tracker_.in_history(freq, data))) {
			//	int status = analysis_.decode_layer_3(meas, data);
			//	if(status != 0)
			//		throw gsm_analysis_error("Error decoding gsm layer 3.");
			//	tracker_.update(freq, data);
			//}
		}

		//// If no measurements were greater than the decode_threshold and we are not tracking any cells on this freq, add the cell with the greatest ecio if
		//// it meets the min decode threshold.
		//if(!tracker_.is_freq_in_history(freq)) {
		//	gsm_measurement data;
		//	data.ecio_ = -99;
		//	for(auto &tmp_data : info.processed_data_) {
		//		if(tmp_data.ecio_ > data.ecio_)
		//			data = tmp_data;
		//	}
		//	if(data.ecio_ > config_.layer_3_.decode_minimum_threshold_)
		//		tracker_.update(freq, data);
		//}

		tracker_.update_freq(freq);

		if((tracker_.has_freq_exceeded_max_updates(freq) )) //|| tracker_.is_all_decoded_on_freq(freq)) && info.meas_->collection_round() > config_.layer_3_.minimum_collection_round_)
			info.remove_ = true;

		return info;
	}

private:
	static const int gsm_channel_bandwidth_ = khz(200);
	gsm_analysis analysis_;
	gsm_layer_3_tracker tracker_;
	gsm_cell_search_settings config_;
	processing_and_feedback_helper helper_;
	frequency_bin_calculator freq_bin_calculator_;
};

}}