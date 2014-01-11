/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_T_323_H_
#define	_T_323_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_323 {
	T_323_s0	= 0,
	T_323_s5	= 1,
	T_323_s10	= 2,
	T_323_s20	= 3,
	T_323_s30	= 4,
	T_323_s60	= 5,
	T_323_s90	= 6,
	T_323_s120	= 7
} e_T_323;

/* T-323 */
typedef long	 T_323_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_323;
asn_struct_free_f T_323_free;
asn_struct_print_f T_323_print;
asn_constr_check_f T_323_constraint;
ber_type_decoder_f T_323_decode_ber;
der_type_encoder_f T_323_encode_der;
xer_type_decoder_f T_323_decode_xer;
xer_type_encoder_f T_323_encode_xer;
per_type_decoder_f T_323_decode_uper;
per_type_encoder_f T_323_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_323_H_ */
