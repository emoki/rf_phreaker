#include "gtest/gtest.h"

#include "rf_phreaker/scanner/measurement_info_serialization.h"
#include "boost/archive/text_iarchive.hpp"
#include "boost/archive/text_oarchive.hpp"
#include "boost/archive/binary_iarchive.hpp"
#include "boost/archive/binary_oarchive.hpp"

using namespace rf_phreaker::scanner;

TEST(MeasurementInfoSerialization, TestMain) {
	const int signal_size = 1000;
	gain_type g(lms::LNA_MAX, 30, 10);
	rf_phreaker::frequency_type freq = 1001;
	measurement_info test(signal_size, freq, 1002, 1003, g, std::chrono::milliseconds(1004), rf_adjustment{{freq, freq}, 1}, rf_adjustment{{freq, freq}, 2}, 1004, "1234567891234567891234");
	test.set_operating_band(rf_phreaker::UMTS_OPERATING_BAND_1);
	test.rf_board_adjustments(rf_adjustment{{freq, freq}, -53});
	test.blade_adjustments(rf_adjustment{{freq, freq}, 33});

	for(int i = 0; i < signal_size; ++i) {
		test.get_iq()[i].re = (float)i;
		test.get_iq()[i].im = (float)(i * 5);
	}

	{
		std::ofstream f("test_meas_info_serialization.txt");
		boost::archive::text_oarchive oa(f);
		oa & test;
	}
	measurement_info sig2;
	{
		std::ifstream f("test_meas_info_serialization.txt");
		boost::archive::text_iarchive ia(f);
		ia & sig2;
	}
	EXPECT_TRUE(test == sig2);
	{
		std::ofstream f("test_meas_info_serialization.bin", std::ios::binary);
		boost::archive::binary_oarchive oa(f);
		oa & test;
	}
	measurement_info sig3;
	{
		std::ifstream f("test_meas_info_serialization.bin", std::ios::binary);
		boost::archive::binary_iarchive ia(f);
		ia & sig3;
	}	
	EXPECT_TRUE(test == sig3);
}