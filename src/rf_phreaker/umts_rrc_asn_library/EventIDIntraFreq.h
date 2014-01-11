/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EventIDIntraFreq_H_
#define	_EventIDIntraFreq_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventIDIntraFreq {
	EventIDIntraFreq_e1a	= 0,
	EventIDIntraFreq_e1b	= 1,
	EventIDIntraFreq_e1c	= 2,
	EventIDIntraFreq_e1d	= 3,
	EventIDIntraFreq_e1e	= 4,
	EventIDIntraFreq_e1f	= 5,
	EventIDIntraFreq_e1g	= 6,
	EventIDIntraFreq_e1h	= 7,
	EventIDIntraFreq_e1i	= 8,
	EventIDIntraFreq_e1j	= 9,
	EventIDIntraFreq_spare6	= 10,
	EventIDIntraFreq_spare5	= 11,
	EventIDIntraFreq_spare4	= 12,
	EventIDIntraFreq_spare3	= 13,
	EventIDIntraFreq_spare2	= 14,
	EventIDIntraFreq_spare1	= 15
} e_EventIDIntraFreq;

/* EventIDIntraFreq */
typedef long	 EventIDIntraFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventIDIntraFreq;
asn_struct_free_f EventIDIntraFreq_free;
asn_struct_print_f EventIDIntraFreq_print;
asn_constr_check_f EventIDIntraFreq_constraint;
ber_type_decoder_f EventIDIntraFreq_decode_ber;
der_type_encoder_f EventIDIntraFreq_encode_der;
xer_type_decoder_f EventIDIntraFreq_decode_xer;
xer_type_encoder_f EventIDIntraFreq_encode_xer;
per_type_decoder_f EventIDIntraFreq_decode_uper;
per_type_encoder_f EventIDIntraFreq_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EventIDIntraFreq_H_ */
