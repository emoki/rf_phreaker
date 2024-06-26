#pragma once

#include "rf_phreaker/scanner/lms_defines.h"
#include "libbladeRF.h"

bladerf_lna_gain convert(rf_phreaker::scanner::lms::lna_gain_enum gain)
{
	using namespace rf_phreaker::scanner::lms;
	switch(gain) {
	case LNA_BYPASS:
		return BLADERF_LNA_GAIN_BYPASS;
	case LNA_MID:
		return BLADERF_LNA_GAIN_MID;
	case LNA_MAX:
		return BLADERF_LNA_GAIN_MAX;
	case LNA_UNKNOWN:
	default:
		return BLADERF_LNA_GAIN_UNKNOWN;
	}
}

rf_phreaker::scanner::lms::lna_gain_enum convert(bladerf_lna_gain gain)
{
	using namespace rf_phreaker::scanner::lms;
	switch(gain) {
	case BLADERF_LNA_GAIN_BYPASS:
		return LNA_BYPASS;
	case BLADERF_LNA_GAIN_MID:
		return LNA_MID;
	case BLADERF_LNA_GAIN_MAX:
		return LNA_MAX;
	case BLADERF_LNA_GAIN_UNKNOWN:
	default:
		return LNA_UNKNOWN;
	}
}



//
//bladerf_lpf_mode
//bladerf_log_level
//bladerf_sampling
//bladerf_fpga_size