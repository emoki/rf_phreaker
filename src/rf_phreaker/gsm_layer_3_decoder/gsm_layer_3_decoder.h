#pragma once

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the GSM_LAYER_3_DECODER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// GSM_LAYER_3_DECODER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
//#ifdef GSM_LAYER_3_DECODER_EXPORTS
//#define GSM_LAYER_3_DECODER_API __declspec(dllexport)
//#else
//#define GSM_LAYER_3_DECODER_API __declspec(dllimport)
//#endif

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


#include <stdint.h>
#include "rf_phreaker/layer_3_common/gsm_layer_3_message_aggregate.h"


class gsm_layer_3_container;

class DLL_PUBLIC gsm_layer_3_decoder
{
public:
	gsm_layer_3_decoder();

	~gsm_layer_3_decoder();

	int32_t decode_bcch_message(const uint8_t *bit_stream, uint32_t num_of_bytes, uint32_t unused_bits, layer_3_information::gsm_layer_3_message_aggregate &message);

	void update_message_decode_list(layer_3_information::bcch_message_t message_t);

private:
	gsm_layer_3_container *gsm_layer_3_container_;
};















extern GSM_LAYER_3_DECODER_API int ngsm_layer_3_decoder;

GSM_LAYER_3_DECODER_API int fngsm_layer_3_decoder(void);
