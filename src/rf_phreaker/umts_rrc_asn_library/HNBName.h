/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HNBName_H_
#define	_HNBName_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HNBName */
typedef OCTET_STRING_t	 HNBName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBName;
asn_struct_free_f HNBName_free;
asn_struct_print_f HNBName_print;
asn_constr_check_f HNBName_constraint;
ber_type_decoder_f HNBName_decode_ber;
der_type_encoder_f HNBName_encode_der;
xer_type_decoder_f HNBName_decode_xer;
xer_type_encoder_f HNBName_encode_xer;
per_type_decoder_f HNBName_decode_uper;
per_type_encoder_f HNBName_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HNBName_H_ */
