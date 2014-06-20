#pragma once

#include <regex>
#include <locale>
#include "rf_phreaker/common/common_types.h"

#define khz(x) (static_cast<rf_phreaker::frequency_type>(x)*1000)             /**< Convenience for kHz */
#define mhz(x) (static_cast<rf_phreaker::frequency_type>(x)*1000000)          /**< Convenience for MHz */
#define ghz(x) (static_cast<rf_phreaker::frequency_type>(x)*1000000000)       /**< Convenience for GHz */
#define milli_to_nano(x) (static_cast<rf_phreaker::time_type>(x)*1000000)       /**< Convenience for nano */


namespace rf_phreaker {

//template<frequency_type N>
//struct khz_ {
//	enum { v = N * 1000 };
//};
//
//template<frequency_type N>
//struct mhz {
//	enum { v = N * 1000000 };
//};
//
//template<frequency_type N>
//struct hz {
//	enum { v = N * 1000000000 };
//};
//
//template<time_type N>
//struct nano
//{
//	enum {v = N * 1000000000};
//};
//
//template<time_type N>
//struct micro
//{
//	enum { v = N * 1000000 };
//};
//
//template<time_type N>
//struct milli
//{
//	enum { v = N * 1000 };
//};


inline int16_t sign_extend_12_bits(int16_t &var)
{
	if(var & 0x0800) 
		var |= 0xF000;
	else
		var &= 0x0FFF;

	return var;
}

inline int convert_to_samples(time_type time_ns, frequency_type actual_sampling_rate_used)
{
	return static_cast<int>(time_ns / 1e9 * actual_sampling_rate_used);
}

inline time_type convert_to_time(int num_samples, frequency_type actual_sampling_rate_used)
{
	return static_cast<time_type>(((double)num_samples / actual_sampling_rate_used) * 1e9);
}

inline std::vector<std::string> tokenize(const std::string& input, const std::regex& pattern)
{
	if(input.empty())
		return std::vector<std::string>();
	// Passing -1 as the submatch index parameter performs splitting
	std::sregex_token_iterator first(input.begin(), input.end(), pattern, -1);
	std::sregex_token_iterator last;
	return std::vector<std::string>(first, last);
}

inline std::string split_file_name(const std::string& str)
{
	size_t found;
	found = str.find_last_of("(/\\");
	return str.substr(found + 1);
}

inline std::string& trim_whitespace(std::string &s) {
	s.erase(std::remove_if(s.begin(), s.end(), [&](char ch) { return std::isspace<char>(ch, std::locale::classic()); }));
	return s;
}

template<typename Type>
typename Type add_mod(Type num, int mod)
{
	if(num % mod)
		return num + (mod - (num % mod));
	else
		return num;
}



}