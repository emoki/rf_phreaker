/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DedicatedInfoNAS_H_
#define	_DedicatedInfoNAS_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DedicatedInfoNAS */
typedef OCTET_STRING_t	 DedicatedInfoNAS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DedicatedInfoNAS;
asn_struct_free_f DedicatedInfoNAS_free;
asn_struct_print_f DedicatedInfoNAS_print;
asn_constr_check_f DedicatedInfoNAS_constraint;
ber_type_decoder_f DedicatedInfoNAS_decode_ber;
der_type_encoder_f DedicatedInfoNAS_encode_der;
xer_type_decoder_f DedicatedInfoNAS_decode_xer;
xer_type_encoder_f DedicatedInfoNAS_encode_xer;
per_type_decoder_f DedicatedInfoNAS_decode_uper;
per_type_encoder_f DedicatedInfoNAS_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DedicatedInfoNAS_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
