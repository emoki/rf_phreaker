#pragma once

#if defined _WIN32 || defined __CYGWIN__
#ifdef BUILDING_DLL
#ifdef __GNUC__
#define DLL_PUBLIC __attribute__ ((dllexport))
#else
#define DLL_PUBLIC __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
#endif
#else
#ifdef __GNUC__
#define DLL_PUBLIC __attribute__ ((dllimport))
#else
#define DLL_PUBLIC __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
#endif
#endif
#define DLL_LOCAL
#else
#if __GNUC__ >= 4
#define DLL_PUBLIC __attribute__ ((visibility ("default")))
#define DLL_LOCAL  __attribute__ ((visibility ("hidden")))
#else
#define DLL_PUBLIC
#define DLL_LOCAL
#endif
#endif

#include <atomic>
#include "rf_phreaker/lte_analysis/lte_measurement.h"
#include "rf_phreaker/lte_analysis/lte_config.h"
#include "rf_phreaker/common/raw_signal.h"

namespace rf_phreaker {

class lte_analysis_impl;

class DLL_PUBLIC lte_analysis
{
public:
	lte_analysis(const lte_config &config, std::atomic_bool *is_cancelled = nullptr);

	lte_analysis(const lte_analysis &analysis);

	~lte_analysis();

	int cell_search_sweep(const rf_phreaker::raw_signal &raw_signal, lte_measurements &lte_meas, int num_half_frames, 
		frequency_type low_intermediate_freq, frequency_type high_intermediate_freq, frequency_type step_size, power_info_group *rms_group = nullptr);

	int cell_search(const rf_phreaker::raw_signal &raw_signal, lte_measurements &lte_meas, int num_half_frames, double *avg_rms = nullptr);

	int decode_layer_3(const rf_phreaker::raw_signal &raw_signal, lte_measurements &lte_meas, int num_half_frames, int meas_to_process);

	void clear_tracking_si(frequency_type freq);

	void clear_all_tracking_si();

	void set_config(const lte_config &config);

private:
	lte_analysis_impl *impl_;
};

}