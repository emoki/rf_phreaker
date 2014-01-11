/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RejectionCause_H_
#define	_RejectionCause_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RejectionCause {
	RejectionCause_congestion	= 0,
	RejectionCause_unspecified	= 1
} e_RejectionCause;

/* RejectionCause */
typedef long	 RejectionCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RejectionCause;
asn_struct_free_f RejectionCause_free;
asn_struct_print_f RejectionCause_print;
asn_constr_check_f RejectionCause_constraint;
ber_type_decoder_f RejectionCause_decode_ber;
der_type_encoder_f RejectionCause_encode_der;
xer_type_decoder_f RejectionCause_decode_xer;
xer_type_encoder_f RejectionCause_encode_xer;
per_type_decoder_f RejectionCause_decode_uper;
per_type_encoder_f RejectionCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RejectionCause_H_ */
