/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IMEI_Digit_H_
#define	_IMEI_Digit_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IMEI-Digit */
typedef long	 IMEI_Digit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IMEI_Digit;
asn_struct_free_f IMEI_Digit_free;
asn_struct_print_f IMEI_Digit_print;
asn_constr_check_f IMEI_Digit_constraint;
ber_type_decoder_f IMEI_Digit_decode_ber;
der_type_encoder_f IMEI_Digit_encode_der;
xer_type_decoder_f IMEI_Digit_decode_xer;
xer_type_encoder_f IMEI_Digit_encode_xer;
per_type_decoder_f IMEI_Digit_decode_uper;
per_type_encoder_f IMEI_Digit_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IMEI_Digit_H_ */
