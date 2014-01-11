/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TGMP_r8_H_
#define	_TGMP_r8_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TGMP_r8 {
	TGMP_r8_tdd_Measurement	= 0,
	TGMP_r8_fdd_Measurement	= 1,
	TGMP_r8_gsm_CarrierRSSIMeasurement	= 2,
	TGMP_r8_gsm_initialBSICIdentification	= 3,
	TGMP_r8_gsmBSICReconfirmation	= 4,
	TGMP_r8_multi_carrier	= 5,
	TGMP_r8_e_UTRA	= 6,
	TGMP_r8_spare	= 7
} e_TGMP_r8;

/* TGMP-r8 */
typedef long	 TGMP_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TGMP_r8;
asn_struct_free_f TGMP_r8_free;
asn_struct_print_f TGMP_r8_print;
asn_constr_check_f TGMP_r8_constraint;
ber_type_decoder_f TGMP_r8_decode_ber;
der_type_encoder_f TGMP_r8_encode_der;
xer_type_decoder_f TGMP_r8_decode_xer;
xer_type_encoder_f TGMP_r8_encode_xer;
per_type_decoder_f TGMP_r8_decode_uper;
per_type_encoder_f TGMP_r8_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TGMP_r8_H_ */
