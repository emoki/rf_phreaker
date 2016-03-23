#include "gtest/gtest.h"

#include "rf_phreaker/processing/processing_utility.h"
#include "rf_phreaker/common/operating_band_range_specifier.h"
#include "rf_phreaker/gsm_analysis/gsm_defs.h"

using namespace rf_phreaker::processing;

TEST(GsmFrequencyTracker, EmptyList) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	EXPECT_TRUE(tracker.do_we_add_freq(mhz(960)));
}

TEST(GsmFrequencyTracker, SameFreq) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	tracker.insert(mhz(960));
	EXPECT_FALSE(tracker.do_we_add_freq(mhz(960)));
}

TEST(GsmFrequencyTracker, AddingFreqsGoingUp) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	auto range = bands.get_band_freq_range(rf_phreaker::GSM_DCS_1800);

	auto i = range.low_freq_hz_;
	// Don't handle border condition
	while(i < range.high_freq_hz_ - 2 * GSM_PROCESSING_BANDWIDTH) {
		auto freq = tracker.calculate_closest_freq(i, range.band_);
		EXPECT_EQ(i + GSM_LOW_BANDWIDTH_HZ - khz(100), freq);
		tracker.insert(freq);

		auto last_freq_within_range = i + GSM_PROCESSING_BANDWIDTH;
		EXPECT_FALSE(tracker.do_we_add_freq(last_freq_within_range));

		auto freq_not_within_range = last_freq_within_range + khz(200);
		EXPECT_TRUE(tracker.do_we_add_freq(freq_not_within_range));
		freq = tracker.calculate_closest_freq(freq_not_within_range, range.band_);
		EXPECT_EQ(freq_not_within_range + GSM_LOW_BANDWIDTH_HZ - khz(100), freq);
		tracker.insert(freq);

		i = freq_not_within_range + GSM_PROCESSING_BANDWIDTH + khz(200);
	}
}

TEST(GsmFrequencyTracker, AddingFreqsGoingDown) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	auto range = bands.get_band_freq_range(rf_phreaker::GSM_DCS_1800);

	auto i = range.high_freq_hz_ - GSM_PROCESSING_BANDWIDTH;
	// Don't handle border condition
	while(i < range.low_freq_hz_ - 2 * GSM_PROCESSING_BANDWIDTH) {
		auto freq = tracker.calculate_closest_freq(i, range.band_);
		EXPECT_EQ(i + GSM_LOW_BANDWIDTH_HZ - khz(100), freq);
		tracker.insert(freq);

		auto last_freq_within_range = freq;
		EXPECT_FALSE(tracker.do_we_add_freq(last_freq_within_range));

		auto freq_not_within_range = last_freq_within_range - khz(200);
		EXPECT_TRUE(tracker.do_we_add_freq(freq_not_within_range));
		freq = tracker.calculate_closest_freq(freq_not_within_range, range.band_);
		EXPECT_EQ(freq_not_within_range + GSM_LOW_BANDWIDTH_HZ - khz(100), freq);
		tracker.insert(freq);

		i = freq_not_within_range + GSM_PROCESSING_BANDWIDTH + khz(200);
	}
}

TEST(GsmFrequencyTracker, LowerBorderCondition) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	auto range = bands.get_band_freq_range(rf_phreaker::GSM_DCS_1800);

	tracker.insert(range.low_freq_hz_ + GSM_LOW_BANDWIDTH_HZ + khz(400));
	auto freq = range.low_freq_hz_ + khz(200);
	EXPECT_TRUE(tracker.do_we_add_freq(freq));
	EXPECT_EQ(range.low_freq_hz_ - GSM_PROCESSING_IF, tracker.calculate_closest_freq(freq, range.band_));
}

TEST(GsmFrequencyTracker, UpperBorderCondition) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	auto range = bands.get_band_freq_range(rf_phreaker::GSM_DCS_1800);

	tracker.insert(range.high_freq_hz_ - GSM_HIGH_BANDWIDTH_HZ - khz(400));
	auto freq = range.high_freq_hz_ - khz(200);
	EXPECT_TRUE(tracker.do_we_add_freq(freq));
	EXPECT_EQ(range.high_freq_hz_ - GSM_PROCESSING_IF, tracker.calculate_closest_freq(freq, range.band_));
}

TEST(GsmFrequencyTracker, BetweenTwoFreqs) {
	gsm_frequency_tracker tracker;
	rf_phreaker::operating_band_range_specifier bands;
	auto range = bands.get_band_freq_range(rf_phreaker::GSM_DCS_1800);
	auto low_freq = range.low_freq_hz_ + GSM_PROCESSING_BANDWIDTH;
	auto high_freq = low_freq + GSM_HIGH_BANDWIDTH_HZ + mhz(1) + GSM_LOW_BANDWIDTH_HZ;
	tracker.insert(low_freq);
	tracker.insert(high_freq);
	auto freq = low_freq + GSM_HIGH_BANDWIDTH_HZ + khz(200);
	EXPECT_TRUE(tracker.do_we_add_freq(freq));
	auto calc_freq = rf_phreaker::round_to_nearest<khz(200)>((low_freq + high_freq) / 2);
	EXPECT_EQ(tracker.ensure_proper_processing_if(calc_freq), tracker.calculate_closest_freq(freq, range.band_));
}