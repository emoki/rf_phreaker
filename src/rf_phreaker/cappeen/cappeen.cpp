#include "rf_phreaker/cappeen/cappeen.h"
#include "rf_phreaker/cappeen/cappeen_impl.h"
#include <memory>


namespace rf_phreaker { namespace cappeen_api { 

	cappeen_impl& impl() {
		static cappeen_impl impl;
		return impl;
	}
}}

using namespace rf_phreaker::cappeen_api;

long cappeen_initialize(beagle_api::beagle_delegate *del)
{
	long status = 0;
	try {
		status = impl().initialize(del);
	}
	catch(...) {
		LOG(LERROR) << "Failed to initialize cappeen api.";

		status = beagle_api::BEAGLEUNABLETOINITIALIZE;
	}
	return status;
}

long cappeen_clean_up()
{
	return impl().clean_up();
}


long cappeen_list_available_units(char *list, unsigned int buf_size)
{
	return impl().list_available_units(list, buf_size);
}

long cappeen_open_unit(const char *serial, unsigned int buf_size)
{
	return impl().open_unit(serial, buf_size);
}

long cappeen_close_unit(const char *serial, unsigned int buf_size)
{
	return impl().close_unit(serial, buf_size);
}

long cappeen_stop_collection()
{
	return impl().stop_collection();
}

long cappeen_start_collection(const beagle_api::collection_info &collection, bool perform_quick_scan)
{
	return impl().start_collection(collection, perform_quick_scan);
}

long cappeen_input_new_license(const char *serial, uint32_t serial_buf_size, const char *new_license_filename, uint32_t license_buf_size)
{
	return impl().input_new_license(serial, serial_buf_size, new_license_filename, license_buf_size);
}

const char* cappeen_api_version()
{
	return impl().api_version();
}

long cappeen_start_frequency_correction_using_sweep(const beagle_api::collection_info &collection)
{
	return impl().start_frequency_correction(collection);
}

long cappeen_start_frequency_correction_using_frequencies(uint32_t *wcdma_frequencies, int num_channels)
{
	return impl().start_frequency_correction(wcdma_frequencies, num_channels);
}
