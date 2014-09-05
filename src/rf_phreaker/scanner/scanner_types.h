#ifndef __VAR_TYPES_H__
#define __VAR_TYPES_H__

#include <stdint.h>
#include <string>
#include <vector>

namespace rf_phreaker { namespace scanner {

typedef std::vector<char> buf_type;

// Keep unsigned due to bitwise operations.
typedef uint8_t lms_register_type;

typedef uint8_t lms_value_type;

typedef short sample_type;

typedef int32_t band_identifier_type;

struct iq_sample_type
{
	sample_type i;
	sample_type q;
};


static const int serialize_buffer_size = 256;

const double freq_ref_hz_default = 30720000;

//static const char *scanner_description = "USB <-> Scanner";

}}

#endif
