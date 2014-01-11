/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_S_RNTI_H_
#define	_S_RNTI_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S-RNTI */
typedef BIT_STRING_t	 S_RNTI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S_RNTI;
asn_struct_free_f S_RNTI_free;
asn_struct_print_f S_RNTI_print;
asn_constr_check_f S_RNTI_constraint;
ber_type_decoder_f S_RNTI_decode_ber;
der_type_encoder_f S_RNTI_encode_der;
xer_type_decoder_f S_RNTI_decode_xer;
xer_type_encoder_f S_RNTI_encode_xer;
per_type_decoder_f S_RNTI_decode_uper;
per_type_encoder_f S_RNTI_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _S_RNTI_H_ */
