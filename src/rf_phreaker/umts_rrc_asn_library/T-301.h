/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_T_301_H_
#define	_T_301_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_301 {
	T_301_ms100	= 0,
	T_301_ms200	= 1,
	T_301_ms400	= 2,
	T_301_ms600	= 3,
	T_301_ms800	= 4,
	T_301_ms1000	= 5,
	T_301_ms1200	= 6,
	T_301_ms1400	= 7,
	T_301_ms1600	= 8,
	T_301_ms1800	= 9,
	T_301_ms2000	= 10,
	T_301_ms3000	= 11,
	T_301_ms4000	= 12,
	T_301_ms6000	= 13,
	T_301_ms8000	= 14,
	T_301_spare	= 15
} e_T_301;

/* T-301 */
typedef long	 T_301_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_301;
asn_struct_free_f T_301_free;
asn_struct_print_f T_301_print;
asn_constr_check_f T_301_constraint;
ber_type_decoder_f T_301_decode_ber;
der_type_encoder_f T_301_encode_der;
xer_type_decoder_f T_301_decode_xer;
xer_type_encoder_f T_301_encode_xer;
per_type_decoder_f T_301_decode_uper;
per_type_encoder_f T_301_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_301_H_ */
