#include "gtest/gtest.h"

#include "rf_phreaker/scanner/measurement_info.h"

using namespace rf_phreaker::scanner;

TEST(RawSignal, TestMain)
{
	const int signal_size = 1000;
	gain_type g(lms::LNA_MAX, 30, 10);
	measurement_info test(signal_size, 1001, 1002, 1003, g, 1, 2, 1004, "1234567891234567891234");
	test.set_operating_band(rf_phreaker::UMTS_OPERATING_BAND_1);

	for(int i = 0; i < signal_size; ++i) {
		test.get_iq()[i].re = (float)i;
		test.get_iq()[i].im = (float)(i * 5);
	}

	std::string filename("test_meas.txt");
	{
		std::ofstream out(filename);
		ASSERT_TRUE(out.good());
		out << test;
	}

	{
		std::ifstream in(filename);
		ASSERT_TRUE(in.good());
		measurement_info new_sig;
		in >> new_sig;

		EXPECT_EQ(new_sig.get_iq().length(), signal_size);
		for(int i = 0; i < signal_size; ++i) {
			EXPECT_DOUBLE_EQ(test.get_iq()[i].re, i);
			EXPECT_DOUBLE_EQ(test.get_iq()[i].im, i * 5);
		}
		EXPECT_EQ(new_sig.frequency(), 1001);
		EXPECT_EQ(new_sig.bandwidth(), 1002);
		EXPECT_EQ(new_sig.sampling_rate(), 1003);
		EXPECT_EQ(new_sig.gain().lna_gain_, lms::LNA_MAX);
		EXPECT_EQ(new_sig.gain().rxvga1_, 30);
		EXPECT_EQ(new_sig.gain().rxvga2_, 10);
		EXPECT_EQ(new_sig.blade_adjustment(), 1);
		EXPECT_EQ(new_sig.rf_board_adjustment(), 2);
		EXPECT_EQ(new_sig.collection_round(), 1004);
		EXPECT_EQ(new_sig.serial(), "1234567891234567891234");
	}
}