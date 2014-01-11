/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ANSI_41_NAS_Parameter_H_
#define	_ANSI_41_NAS_Parameter_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ANSI-41-NAS-Parameter */
typedef BIT_STRING_t	 ANSI_41_NAS_Parameter_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ANSI_41_NAS_Parameter;
asn_struct_free_f ANSI_41_NAS_Parameter_free;
asn_struct_print_f ANSI_41_NAS_Parameter_print;
asn_constr_check_f ANSI_41_NAS_Parameter_constraint;
ber_type_decoder_f ANSI_41_NAS_Parameter_decode_ber;
der_type_encoder_f ANSI_41_NAS_Parameter_encode_der;
xer_type_decoder_f ANSI_41_NAS_Parameter_decode_xer;
xer_type_encoder_f ANSI_41_NAS_Parameter_encode_xer;
per_type_decoder_f ANSI_41_NAS_Parameter_decode_uper;
per_type_encoder_f ANSI_41_NAS_Parameter_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ANSI_41_NAS_Parameter_H_ */
