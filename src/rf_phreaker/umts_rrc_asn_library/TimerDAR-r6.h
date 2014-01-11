/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TimerDAR_r6_H_
#define	_TimerDAR_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimerDAR_r6 {
	TimerDAR_r6_ms40	= 0,
	TimerDAR_r6_ms80	= 1,
	TimerDAR_r6_ms120	= 2,
	TimerDAR_r6_ms160	= 3,
	TimerDAR_r6_ms240	= 4,
	TimerDAR_r6_ms320	= 5,
	TimerDAR_r6_ms480	= 6,
	TimerDAR_r6_ms640	= 7,
	TimerDAR_r6_ms960	= 8,
	TimerDAR_r6_ms1280	= 9,
	TimerDAR_r6_ms1920	= 10,
	TimerDAR_r6_ms2560	= 11,
	TimerDAR_r6_ms3840	= 12,
	TimerDAR_r6_ms5120	= 13
} e_TimerDAR_r6;

/* TimerDAR-r6 */
typedef long	 TimerDAR_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimerDAR_r6;
asn_struct_free_f TimerDAR_r6_free;
asn_struct_print_f TimerDAR_r6_print;
asn_constr_check_f TimerDAR_r6_constraint;
ber_type_decoder_f TimerDAR_r6_decode_ber;
der_type_encoder_f TimerDAR_r6_encode_der;
xer_type_decoder_f TimerDAR_r6_decode_xer;
xer_type_encoder_f TimerDAR_r6_encode_xer;
per_type_decoder_f TimerDAR_r6_decode_uper;
per_type_encoder_f TimerDAR_r6_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimerDAR_r6_H_ */
