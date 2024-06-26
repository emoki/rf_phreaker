/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_TS_ChannelisationCode_H_
#define	_DL_TS_ChannelisationCode_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TS_ChannelisationCode {
	DL_TS_ChannelisationCode_cc16_1	= 0,
	DL_TS_ChannelisationCode_cc16_2	= 1,
	DL_TS_ChannelisationCode_cc16_3	= 2,
	DL_TS_ChannelisationCode_cc16_4	= 3,
	DL_TS_ChannelisationCode_cc16_5	= 4,
	DL_TS_ChannelisationCode_cc16_6	= 5,
	DL_TS_ChannelisationCode_cc16_7	= 6,
	DL_TS_ChannelisationCode_cc16_8	= 7,
	DL_TS_ChannelisationCode_cc16_9	= 8,
	DL_TS_ChannelisationCode_cc16_10	= 9,
	DL_TS_ChannelisationCode_cc16_11	= 10,
	DL_TS_ChannelisationCode_cc16_12	= 11,
	DL_TS_ChannelisationCode_cc16_13	= 12,
	DL_TS_ChannelisationCode_cc16_14	= 13,
	DL_TS_ChannelisationCode_cc16_15	= 14,
	DL_TS_ChannelisationCode_cc16_16	= 15
} e_DL_TS_ChannelisationCode;

/* DL-TS-ChannelisationCode */
typedef long	 DL_TS_ChannelisationCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TS_ChannelisationCode;
asn_struct_free_f DL_TS_ChannelisationCode_free;
asn_struct_print_f DL_TS_ChannelisationCode_print;
asn_constr_check_f DL_TS_ChannelisationCode_constraint;
ber_type_decoder_f DL_TS_ChannelisationCode_decode_ber;
der_type_encoder_f DL_TS_ChannelisationCode_encode_der;
xer_type_decoder_f DL_TS_ChannelisationCode_decode_xer;
xer_type_encoder_f DL_TS_ChannelisationCode_encode_xer;
per_type_decoder_f DL_TS_ChannelisationCode_decode_uper;
per_type_encoder_f DL_TS_ChannelisationCode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TS_ChannelisationCode_H_ */
