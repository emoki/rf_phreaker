/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_T_304_H_
#define	_T_304_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_304 {
	T_304_ms100	= 0,
	T_304_ms200	= 1,
	T_304_ms400	= 2,
	T_304_ms1000	= 3,
	T_304_ms2000	= 4,
	T_304_spare3	= 5,
	T_304_spare2	= 6,
	T_304_spare1	= 7
} e_T_304;

/* T-304 */
typedef long	 T_304_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_304;
asn_struct_free_f T_304_free;
asn_struct_print_f T_304_print;
asn_constr_check_f T_304_constraint;
ber_type_decoder_f T_304_decode_ber;
der_type_encoder_f T_304_encode_der;
xer_type_decoder_f T_304_decode_xer;
xer_type_encoder_f T_304_encode_xer;
per_type_decoder_f T_304_decode_uper;
per_type_encoder_f T_304_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_304_H_ */
