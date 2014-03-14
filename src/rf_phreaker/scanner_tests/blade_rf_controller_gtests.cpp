#include "gtest/gtest.h"

#include "rf_phreaker/scanner/blade_rf_controller.h"
#include "rf_phreaker/scanner/blade_rf_controller_async.h"
#include "rf_phreaker/common/benchmark.h"
#include "rf_phreaker/common/concurrent.h"
#include "rf_phreaker/common/common_types.h"
#include "rf_phreaker/common/common_utility.h"
#include "rf_phreaker/scanner/lms_defines.h"
#include <boost/lexical_cast.hpp>

using namespace rf_phreaker::scanner;

TEST(BladeControllerTest, TestBladeControllerGeneral)
{
	try {
		blade_rf_controller blade;

		// We ask twice because the first time we don't recieve a valid serial.  An error occurs inside libusb...
		auto scanner_list = blade.list_available_scanners();
		if(scanner_list.size() && (*scanner_list.begin())->id() == "")
			scanner_list = blade.list_available_scanners();

		if(scanner_list.size()) {
			auto scanner_id = (*scanner_list.begin())->id();

			blade.open_scanner(scanner_id);

			blade.do_initial_scanner_config();

			auto blade_info = blade.get_scanner_blade_rf();

			rf_phreaker::benchmark b("blade_benchmark_1.txt", true);

			b.start_timer();

			rf_phreaker::frequency_type das_freq = 888000000;
			rf_phreaker::frequency_type nyc_umts_freq1 = 871800000;
			rf_phreaker::frequency_type nyc_umts_freq2 = 876800000;
			rf_phreaker::frequency_type nyc_umts_freq3 = 2152500000;
			rf_phreaker::frequency_type nyc_umts_freq4 = 2147500000;
			rf_phreaker::frequency_type nyc_lte_freq1 = 2140000000; // 10 mhz
			rf_phreaker::frequency_type nyc_lte_freq2 = 739000000; // 10 mhz

            const int num_iterations = 30;
			std::string base_filename = "blade_samples_umts_3840_";
			rf_phreaker::frequency_type freq = nyc_umts_freq4;
			rf_phreaker::time_type time_ns = milli_to_nano(5);
            rf_phreaker::bandwidth_type bandwidth = mhz(5);
			//int sampling_rate = khz(30720); 
			int sampling_rate = khz(4875); 
			//int sampling_rate = khz(3840);
			//int sampling_rate = khz(1920);
			rf_phreaker::scanner::gain_type gain(lms::LNA_MAX, 30, 0);

			measurement_info data;
			//for(int i = mhz(869); i < mhz(894); i += khz(100))
			//	data = blade.get_rf_data(i, time_ns, bandwidth, gain, sampling_rate);
			
			std::ofstream file("gain_test.txt");
			std::ofstream file_auto("gain_test_auto.txt");


			//for(int j = 0; j < 2; ++j) {
				for(int i = 5; i <= 60; ++i) {
					gain.rxvga1_ = i <= 30 ? i : 30;
					gain.rxvga2_ = i > 30 ? i - 30 : 0;

					data = blade.get_rf_data(freq, time_ns, bandwidth, gain, sampling_rate);
					gain_manager::gain_history tmp(data);
					auto avg_rms_ = ipp_helper::calculate_average_rms(data.get_iq().get(), data.get_iq().length());
					file << freq << "\t" << gain.rxvga1_ << "\t" << gain.rxvga2_ << "\t" << gain.rxvga1_ + gain.rxvga2_  << "\t" << 
						tmp.max_adc_ << "\t" << 20 * log10(tmp.max_adc_) << "\t" << avg_rms_ << "\t" << 20 * log10(avg_rms_) << "\n";

					//data = blade.get_rf_data_use_auto_gain(freq, time_ns, bandwidth, sampling_rate);
					//gain_manager::gain_history tmp_auto(data);

					//auto avg_rms_auto = ipp_helper::calculate_average_rms(data.get_iq().get(), data.get_iq().length());

					//file_auto << freq << "\t" << gain.rxvga1_ << "\t" << gain.rxvga2_ << "\t" << gain.rxvga1_ + gain.rxvga2_ << "\t" << 
					//	tmp_auto.max_adc_ << "\t" << 20 * log10(tmp_auto.max_adc_) << "\t" << 
					//	avg_rms_auto << "\t" << 20 * log10(avg_rms_auto) << "\n";

					//data.collection_round(i);

					//            std::string name = base_filename + boost::lexical_cast<std::string>(i) +".txt";
					//            std::ofstream file(name.c_str());
					//            file << data;
				}
			//}
			b.stop_timer();
			auto t = b.total_time_elapsed();
			std::cout << t.wall / 1e9 << " wall, " << t.user / 1e9 << " user + " << t.system / 1e9 << " system" << std::endl;
			blade_info = blade.get_scanner_blade_rf();

			std::string str;
			str.append("release_mode\t")
				.append("vtune\t")
				.append("blade_rf\t")
				.append("\taverage_transer_rate B/s:\t")
				.append(boost::lexical_cast<std::string>(((double)data.get_iq().length() * sizeof(int16_t)* 2 * (num_iterations)) / (b.total_time_elapsed().wall / 1e9)))
				.append("\tsnapshot_time:\t")
				.append(boost::lexical_cast<std::string>(time_ns / 1e9));
			b.output_time_elapsed(str);
		}
	}
	catch(const std::exception &err) {
		std::cout << err.what() << std::endl;
		EXPECT_TRUE(0) << "Error while testing with the bladeRF.  Error = " << err.what();
	}
}

TEST(BladeControllerTest, TestBladeControllerAsync)
{
	//try {
	//	blade_rf_controller_async blade;

	//	// We ask twice because the first time we don't recieve a valid serial.  An error occurs inside libusb...
	//	auto scanner_list = blade.list_available_scanners().get();
	//	if(scanner_list.size() && (*scanner_list.begin())->id() == "")
	//		scanner_list = blade.list_available_scanners().get();

	//	if(scanner_list.size()) {
	//		auto scanner_id = (*scanner_list.begin())->id();

	//		blade.open_scanner(scanner_id);

	//		blade.do_initial_scanner_config();

	//		auto blade_info = blade.get_scanner();

	//		rf_phreaker::benchmark b("blade_benchmark_1.txt", true);

	//		b.start_timer();

	//		//	rf_phreaker::frequency_type das_freq = 888000000;
	//		rf_phreaker::frequency_type nyc_umts_freq1 = 876800000;
	//		//	rf_phreaker::frequency_type nyc_umts_freq2 = 2152500000;
	//		//	rf_phreaker::frequency_type nyc_lte_freq1 = 2140000000; // 10 mhz
	//		//	rf_phreaker::frequency_type nyc_lte_freq2 = 739000000; // 10 mhz

	//		const int num_iterations = 10;
	//		std::string base_filename = "test_blade_async";
	//		rf_phreaker::frequency_type freq = nyc_umts_freq1;
	//		rf_phreaker::time_type time_ns = (rf_phreaker::time_type)0.06e9;
	//		rf_phreaker::bandwidth_type bandwidth = mhz(5);
	//		//int sampling_rate = khz(4875);
	//		int sampling_rate = khz(3840);
	//		//int sampling_rate = khz(1920);
	//		rf_phreaker::scanner::gain_type gain(lms::LNA_MAX, 30, 5);

	//		std::vector<std::future<measurement_info>> measurements;

	//		for(int i = 0; i < num_iterations; ++i) {
	//			freq += mhz(1);
	//			measurements.push_back(blade.get_rf_data(freq, time_ns, bandwidth));

	//		}
	//		b.stop_timer();
	//		b.output_time_elapsed("Finished async transfer.");

	//		//int i = 0;
	//		//for(auto& data : measurements) {
	//		//	std::string name = base_filename + boost::lexical_cast<std::string>(i++) + ".txt";
	//		//	std::ofstream file(name.c_str());
	//		//	file << data.get();
	//		//}
	//	}
	//}
	//catch(const std::exception &err) {
	//	std::cout << err.what() << std::endl;
	//	EXPECT_TRUE(0) << "Error while testing with the bladeRF.  Error = " << err.what();
	//}
}