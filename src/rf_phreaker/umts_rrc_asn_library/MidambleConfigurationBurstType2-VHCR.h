/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MidambleConfigurationBurstType2_VHCR_H_
#define	_MidambleConfigurationBurstType2_VHCR_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MidambleConfigurationBurstType2_VHCR {
	MidambleConfigurationBurstType2_VHCR_ms4	= 0,
	MidambleConfigurationBurstType2_VHCR_ms8	= 1
} e_MidambleConfigurationBurstType2_VHCR;

/* MidambleConfigurationBurstType2-VHCR */
typedef long	 MidambleConfigurationBurstType2_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MidambleConfigurationBurstType2_VHCR;
asn_struct_free_f MidambleConfigurationBurstType2_VHCR_free;
asn_struct_print_f MidambleConfigurationBurstType2_VHCR_print;
asn_constr_check_f MidambleConfigurationBurstType2_VHCR_constraint;
ber_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_ber;
der_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_der;
xer_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_xer;
xer_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_xer;
per_type_decoder_f MidambleConfigurationBurstType2_VHCR_decode_uper;
per_type_encoder_f MidambleConfigurationBurstType2_VHCR_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MidambleConfigurationBurstType2_VHCR_H_ */
