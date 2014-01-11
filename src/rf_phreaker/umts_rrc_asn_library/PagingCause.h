/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PagingCause_H_
#define	_PagingCause_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingCause {
	PagingCause_terminatingConversationalCall	= 0,
	PagingCause_terminatingStreamingCall	= 1,
	PagingCause_terminatingInteractiveCall	= 2,
	PagingCause_terminatingBackgroundCall	= 3,
	PagingCause_terminatingHighPrioritySignalling	= 4,
	PagingCause_terminatingLowPrioritySignalling	= 5,
	PagingCause_terminatingCauseUnknown	= 6,
	PagingCause_spare	= 7
} e_PagingCause;

/* PagingCause */
typedef long	 PagingCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingCause;
asn_struct_free_f PagingCause_free;
asn_struct_print_f PagingCause_print;
asn_constr_check_f PagingCause_constraint;
ber_type_decoder_f PagingCause_decode_ber;
der_type_encoder_f PagingCause_encode_der;
xer_type_decoder_f PagingCause_decode_xer;
xer_type_encoder_f PagingCause_encode_xer;
per_type_decoder_f PagingCause_decode_uper;
per_type_encoder_f PagingCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PagingCause_H_ */
