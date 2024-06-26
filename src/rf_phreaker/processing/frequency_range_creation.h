#pragma once

#include "rf_phreaker/processing/collection_info_container.h"
#include "rf_phreaker/common/operating_band_range_specifier.h"
#include "rf_phreaker/common/common_utility.h"
#include "rf_phreaker/gsm_analysis/gsm_defs.h"

namespace rf_phreaker { namespace processing {

class frequency_range_creation 
{
public:
	// These parameters correspond to processing parameters used in gsm_analysis.dll
	static const frequency_type gsm_step_size_hz_ = GSM_LOW_BANDWIDTH_HZ + GSM_HIGH_BANDWIDTH_HZ + khz(200); // no overlap
	static const frequency_type gsm_low_step_size_hz_ = GSM_LOW_BANDWIDTH_HZ;
	static const frequency_type gsm_high_step_size_hz_ = GSM_HIGH_BANDWIDTH_HZ + GSM_PROCESSING_IF;
	static void adjust_gsm_sweep_collection_info_with_adjustment(const operating_band_range &range, collection_info_container &c) {
		// Be sure to make sure the center freq is % khz(200) != 0
		auto t1 = gsm_step_size_hz_;
		auto t2 = gsm_low_step_size_hz_;
		auto t3 = gsm_high_step_size_hz_;
		auto adj_range = range;
		//if(adj_range.band_ == GSM_850 || adj_range.band_ == GSM_DCS_1800 || adj_range.band_ == GSM_PCS_1900) {
			adj_range.low_freq_hz_ -= khz(200);
		//}
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((adj_range.high_freq_hz_ - adj_range.low_freq_hz_) / gsm_step_size_hz_));
		for(auto freq = adj_range.low_freq_hz_ + gsm_low_step_size_hz_, end_freq = adj_range.high_freq_hz_ + gsm_high_step_size_hz_; freq < end_freq; freq += gsm_step_size_hz_) {
			if(freq >= adj_range.high_freq_hz_ - gsm_high_step_size_hz_) {
				if(adj_range.band_ == GSM_850) {
					freq = mhz(894) - gsm_high_step_size_hz_;
				}
				else if(adj_range.band_ == GSM_E_900) {
					freq = mhz(960) - gsm_high_step_size_hz_;
				}
				else if(adj_range.band_ == GSM_DCS_1800) {
					freq = mhz(1880) - gsm_high_step_size_hz_;
				}
				else if(adj_range.band_ == GSM_PCS_1900) {
					freq = mhz(1990) - gsm_high_step_size_hz_;
				}
			}
			if(freq % khz(200) == 0)
				freq -= khz(100);
			info_to_add.add_.emplace_back(gsm_sweep_collection_info(freq, range.band_, false));
		}
		c.adjust(info_to_add);
	}

	static void adjust_gsm_sweep_collection_info(const operating_band_range &range, collection_info_container &c) {
		// Be sure to make sure the center freq is % khz(200) != 0
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((range.high_freq_hz_ - range.low_freq_hz_) / gsm_step_size_hz_));
		for(auto freq = range.low_freq_hz_ + gsm_low_step_size_hz_, end_freq = range.high_freq_hz_ + gsm_high_step_size_hz_; freq <= end_freq; freq += gsm_step_size_hz_) {
			if(freq % khz(200) == 0)
				freq -= khz(100);
			info_to_add.add_.emplace_back(gsm_sweep_collection_info(freq, range.band_, false));
		}
		c.adjust(info_to_add);
	}

	static void adjust_umts_sweep_collection_info_with_adjustment(const operating_band_range &range, collection_info_container &c,
		frequency_type low_if = 0, frequency_type high_if = 0, frequency_type step_size = khz(100)) {
		if(step_size == 0) {
			step_size = khz(100);
		}
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((range.high_freq_hz_ - range.low_freq_hz_) / step_size));
		for(auto freq = range.low_freq_hz_ - khz(2400) + std::abs(low_if), end_freq = range.high_freq_hz_ + khz(2400) + high_if;
			freq <= end_freq; freq += step_size) {
			if(freq % khz(200) != 0 && freq % khz(500) != 0)
				freq += khz(100);
			info_to_add.add_.emplace_back(umts_sweep_collection_info(freq, range.band_, false));
		}
		adjust_end(info_to_add, range.high_freq_hz_ + khz(2400) - high_if, umts_sweep_collection_info(range.high_freq_hz_ + khz(2400) - high_if, range.band_, false));
		c.adjust(info_to_add);
	}

	static void adjust_umts_sweep_collection_info(const operating_band_range &range, collection_info_container &c, 
		frequency_type low_if = 0, frequency_type high_if = 0, frequency_type step_size = khz(100)) {
		if(step_size == 0) {
			step_size = khz(100);
		}
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((range.high_freq_hz_ - range.low_freq_hz_) / step_size));
		for(auto freq = range.low_freq_hz_ + std::abs(low_if), end_freq = range.high_freq_hz_ + high_if;
			freq <= end_freq; freq += step_size) {
			if(freq % khz(200) != 0 && freq % khz(500) != 0)
				freq += khz(100);
			info_to_add.add_.emplace_back(umts_sweep_collection_info(freq, range.band_, false));
		}
		c.adjust(info_to_add);
	}

	static void adjust_lte_sweep_collection_info_with_adjustment(const operating_band_range &range, collection_info_container &c,
		frequency_type low_if = 0, frequency_type high_if = 0, frequency_type step_size = khz(100)) {
		if(step_size == 0) {
			step_size = khz(100);
		}
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((range.high_freq_hz_ - range.low_freq_hz_) / step_size));
		for(auto freq = range.low_freq_hz_ + std::abs(low_if), end_freq = range.high_freq_hz_ + high_if;
			freq <= end_freq; freq += step_size) {
			info_to_add.add_.emplace_back(lte_sweep_collection_info(freq, lte_sweep_collection_info::bandwidth__, range.band_, false));
		}
		adjust_end(info_to_add, range.high_freq_hz_ - high_if, lte_sweep_collection_info(range.high_freq_hz_ - high_if, lte_sweep_collection_info::bandwidth__, range.band_, false));
		c.adjust(info_to_add);
	}
	
	static void adjust_lte_sweep_collection_info(const operating_band_range &range, collection_info_container &c,
		frequency_type low_if = 0, frequency_type high_if = 0, frequency_type step_size = khz(100)) {
		if(step_size == 0) {
			step_size = khz(100);
		}
		add_collection_info info_to_add;
		info_to_add.add_.reserve((unsigned int)((range.high_freq_hz_ - range.low_freq_hz_) / step_size));
		for(auto freq = range.low_freq_hz_ + std::abs(low_if), end_freq = range.high_freq_hz_ + high_if;
			freq <= end_freq; freq += step_size) {
			info_to_add.add_.emplace_back(lte_sweep_collection_info(freq, lte_sweep_collection_info::bandwidth__, range.band_, false));
		}
		c.adjust(info_to_add);
	}

	template<typename Data>
	static void adjust_end(rf_phreaker::processing::add_collection_info &container, frequency_type end_freq, Data &&info) {
		auto last_freq = container.add_.rbegin()->freq_;
		if(last_freq < end_freq) {
			container.add_.emplace_back(info);
		}
		else if(last_freq > end_freq) {
			container.add_.erase(--container.add_.end());
			container.add_.emplace_back(info);
		}
	}
};


}}