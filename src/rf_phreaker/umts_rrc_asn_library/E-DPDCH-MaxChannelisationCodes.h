/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_E_DPDCH_MaxChannelisationCodes_H_
#define	_E_DPDCH_MaxChannelisationCodes_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_DPDCH_MaxChannelisationCodes {
	E_DPDCH_MaxChannelisationCodes_sf256	= 0,
	E_DPDCH_MaxChannelisationCodes_sf128	= 1,
	E_DPDCH_MaxChannelisationCodes_sf64	= 2,
	E_DPDCH_MaxChannelisationCodes_sf32	= 3,
	E_DPDCH_MaxChannelisationCodes_sf16	= 4,
	E_DPDCH_MaxChannelisationCodes_sf8	= 5,
	E_DPDCH_MaxChannelisationCodes_sf4	= 6,
	E_DPDCH_MaxChannelisationCodes_sf4x2	= 7,
	E_DPDCH_MaxChannelisationCodes_sf2x2	= 8,
	E_DPDCH_MaxChannelisationCodes_sf4x2_and_sf2x2	= 9
} e_E_DPDCH_MaxChannelisationCodes;

/* E-DPDCH-MaxChannelisationCodes */
typedef long	 E_DPDCH_MaxChannelisationCodes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DPDCH_MaxChannelisationCodes;
asn_struct_free_f E_DPDCH_MaxChannelisationCodes_free;
asn_struct_print_f E_DPDCH_MaxChannelisationCodes_print;
asn_constr_check_f E_DPDCH_MaxChannelisationCodes_constraint;
ber_type_decoder_f E_DPDCH_MaxChannelisationCodes_decode_ber;
der_type_encoder_f E_DPDCH_MaxChannelisationCodes_encode_der;
xer_type_decoder_f E_DPDCH_MaxChannelisationCodes_decode_xer;
xer_type_encoder_f E_DPDCH_MaxChannelisationCodes_encode_xer;
per_type_decoder_f E_DPDCH_MaxChannelisationCodes_decode_uper;
per_type_encoder_f E_DPDCH_MaxChannelisationCodes_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DPDCH_MaxChannelisationCodes_H_ */
