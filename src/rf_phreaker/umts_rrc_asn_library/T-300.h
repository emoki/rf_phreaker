/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_T_300_H_
#define	_T_300_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_300 {
	T_300_ms100	= 0,
	T_300_ms200	= 1,
	T_300_ms400	= 2,
	T_300_ms600	= 3,
	T_300_ms800	= 4,
	T_300_ms1000	= 5,
	T_300_ms1200	= 6,
	T_300_ms1400	= 7,
	T_300_ms1600	= 8,
	T_300_ms1800	= 9,
	T_300_ms2000	= 10,
	T_300_ms3000	= 11,
	T_300_ms4000	= 12,
	T_300_ms6000	= 13,
	T_300_ms8000	= 14
} e_T_300;

/* T-300 */
typedef long	 T_300_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_300;
asn_struct_free_f T_300_free;
asn_struct_print_f T_300_print;
asn_constr_check_f T_300_constraint;
ber_type_decoder_f T_300_decode_ber;
der_type_encoder_f T_300_encode_der;
xer_type_decoder_f T_300_decode_xer;
xer_type_encoder_f T_300_encode_xer;
per_type_decoder_f T_300_decode_uper;
per_type_encoder_f T_300_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_300_H_ */
