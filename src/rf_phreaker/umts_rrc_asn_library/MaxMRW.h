/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MaxMRW_H_
#define	_MaxMRW_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxMRW {
	MaxMRW_mm1	= 0,
	MaxMRW_mm4	= 1,
	MaxMRW_mm6	= 2,
	MaxMRW_mm8	= 3,
	MaxMRW_mm12	= 4,
	MaxMRW_mm16	= 5,
	MaxMRW_mm24	= 6,
	MaxMRW_mm32	= 7
} e_MaxMRW;

/* MaxMRW */
typedef long	 MaxMRW_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxMRW;
asn_struct_free_f MaxMRW_free;
asn_struct_print_f MaxMRW_print;
asn_constr_check_f MaxMRW_constraint;
ber_type_decoder_f MaxMRW_decode_ber;
der_type_encoder_f MaxMRW_encode_der;
xer_type_decoder_f MaxMRW_decode_xer;
xer_type_encoder_f MaxMRW_encode_xer;
per_type_decoder_f MaxMRW_decode_uper;
per_type_encoder_f MaxMRW_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxMRW_H_ */
