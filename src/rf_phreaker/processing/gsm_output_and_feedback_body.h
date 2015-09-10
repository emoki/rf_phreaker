#pragma once
#include <tuple>
#include "tbb/flow_graph.h"
#include "boost/circular_buffer.hpp"
#include "rf_phreaker/processing/node_defs.h"
#include "rf_phreaker/processing/data_output_async.h"
#include "rf_phreaker/processing/measurement_conversion.h"
#include "rf_phreaker/processing/processing_and_feedback_helper.h"
#include "rf_phreaker/common/common_utility.h"
#include "rf_phreaker/gsm_analysis/gsm_defs.h"

namespace rf_phreaker { namespace processing {

class gsm_sweep_output_and_feedback_body
{
public:
	gsm_sweep_output_and_feedback_body(data_output_async *io)
		: io_(io)
		, freq_history_(freq_history_size_) {}

	gsm_sweep_output_and_feedback_body(const gsm_sweep_output_and_feedback_body &body)
		: io_(body.io_)
		, freq_history_(freq_history_size_)
		// Cannot copy std::vector<std::future<>>. Use new one.
	{}

	void operator()(gsm_info info, gsm_output_and_feedback_node::output_ports_type &out) {
		auto meas = *info.measurement_package_.measurement_info_.get();
		if(helper_.has_sweep_restarted(meas)) {
			added_freqs_.clear();
			freq_history_.clear();
		}

		helper_.remove_futures();

		// Output basic tech.
		for(const auto &i : info.power_info_group_) {
			// Output the freqs if we haven't already.
			auto it = std::find(freq_history_.begin(), freq_history_.end(), i.freq_);
			if(it == freq_history_.end()) {
				helper_.track_future(io_->output(convert_to_basic_data(meas, i), std::vector<gsm_data>()));
				freq_history_.push_back(i.freq_);
			}
		}

		for(auto &i : info.processed_data_) {
			if(do_we_add_freq(i.center_frequency_)) {
				// Add the freq to the layer_3_decoder making sure that we use a center freq that does not represent a true GSM channel.
				auto freq = calculate_closest_freq(i.center_frequency_, meas.get_operating_band());
				added_freqs_.insert(freq);
				std::get<0>(out).try_put(add_collection_info(gsm_layer_3_collection_info(freq, meas.get_operating_band(), true), GSM_LAYER_3_DECODE));
			}
		}
		std::get<1>(out).try_put(tbb::flow::continue_msg());
	}

private:
	bool do_we_add_freq(frequency_type freq) {
		bool add = true;
		if(added_freqs_.find(freq) != added_freqs_.end())
			add = false;
		else {
			auto lesser = greatest_less(added_freqs_, freq);
			auto greater = added_freqs_.upper_bound(freq);
			if(lesser != added_freqs_.end() && freq - *lesser <= low_bandwidth_range_)
				add = false;
			else if(greater != added_freqs_.end() && *greater - freq <= high_bandwidth_range_)
				add = false;
		}
		return add;
	}
	frequency_type calculate_closest_freq(frequency_type f, operating_band b) {
		auto end_range = range_specifier_.get_band_freq_range(b);
		auto new_freq = f + low_bandwidth_range_;
		if(new_freq > end_range.high_freq_hz_)
			new_freq = end_range.high_freq_hz_ - high_bandwidth_range_;

		if(new_freq % khz(200) == 0)
			new_freq -= khz(100);

		return new_freq;
	}
	
	data_output_async *io_;

	processing_and_feedback_helper helper_;

	std::set<frequency_type> added_freqs_;
	static const bandwidth_type low_bandwidth_range_ = GSM_LOW_BANDWIDTH_HZ;
	static const bandwidth_type high_bandwidth_range_ = GSM_HIGH_BANDWIDTH_HZ;
	operating_band_range_specifier range_specifier_;

	boost::circular_buffer<frequency_type> freq_history_;
	static const int freq_history_size_ = 60;
};

class gsm_layer_3_output_and_feedback_body
{
public:
	gsm_layer_3_output_and_feedback_body(data_output_async *io)
		: io_(io) {}

	gsm_layer_3_output_and_feedback_body(const gsm_layer_3_output_and_feedback_body &body)
		: io_(body.io_)
		// Cannot copy std::vector<std::future<>>. Use new one.
	{}

	void operator()(gsm_info info, gsm_output_and_feedback_node::output_ports_type &out) {
		auto meas = *info.measurement_package_.measurement_info_.get();
		helper_.remove_futures();

		// Add the freq to the layer_3_decoder.
		if(info.remove_) {
			std::get<0>(out).try_put(remove_collection_info(gsm_layer_3_collection_info(meas.frequency(), meas.get_operating_band(), info.measurement_package_.can_remove_), GSM_LAYER_3_DECODE));
		}

		std::vector<gsm_data> gsm_group;

		for(const auto &dat : info.processed_data_)
			gsm_group.push_back(convert_to_gsm_data(meas, dat));

		helper_.track_future(io_->output(std::move(gsm_group), basic_data{}));

		std::get<1>(out).try_put(tbb::flow::continue_msg());
	}

private:
	data_output_async *io_;

	processing_and_feedback_helper helper_;
};


}}
