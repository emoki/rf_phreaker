/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_TS_ChannelisationCode_VHCR_H_
#define	_UL_TS_ChannelisationCode_VHCR_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TS_ChannelisationCode_VHCR {
	UL_TS_ChannelisationCode_VHCR_cc1_1	= 0,
	UL_TS_ChannelisationCode_VHCR_cc2_1	= 1,
	UL_TS_ChannelisationCode_VHCR_cc2_2	= 2,
	UL_TS_ChannelisationCode_VHCR_cc4_1	= 3,
	UL_TS_ChannelisationCode_VHCR_cc4_2	= 4,
	UL_TS_ChannelisationCode_VHCR_cc4_3	= 5,
	UL_TS_ChannelisationCode_VHCR_cc4_4	= 6,
	UL_TS_ChannelisationCode_VHCR_cc8_1	= 7,
	UL_TS_ChannelisationCode_VHCR_cc8_2	= 8,
	UL_TS_ChannelisationCode_VHCR_cc8_3	= 9,
	UL_TS_ChannelisationCode_VHCR_cc8_4	= 10,
	UL_TS_ChannelisationCode_VHCR_cc8_5	= 11,
	UL_TS_ChannelisationCode_VHCR_cc8_6	= 12,
	UL_TS_ChannelisationCode_VHCR_cc8_7	= 13,
	UL_TS_ChannelisationCode_VHCR_cc8_8	= 14,
	UL_TS_ChannelisationCode_VHCR_cc16_1	= 15,
	UL_TS_ChannelisationCode_VHCR_cc16_2	= 16,
	UL_TS_ChannelisationCode_VHCR_cc16_3	= 17,
	UL_TS_ChannelisationCode_VHCR_cc16_4	= 18,
	UL_TS_ChannelisationCode_VHCR_cc16_5	= 19,
	UL_TS_ChannelisationCode_VHCR_cc16_6	= 20,
	UL_TS_ChannelisationCode_VHCR_cc16_7	= 21,
	UL_TS_ChannelisationCode_VHCR_cc16_8	= 22,
	UL_TS_ChannelisationCode_VHCR_cc16_9	= 23,
	UL_TS_ChannelisationCode_VHCR_cc16_10	= 24,
	UL_TS_ChannelisationCode_VHCR_cc16_11	= 25,
	UL_TS_ChannelisationCode_VHCR_cc16_12	= 26,
	UL_TS_ChannelisationCode_VHCR_cc16_13	= 27,
	UL_TS_ChannelisationCode_VHCR_cc16_14	= 28,
	UL_TS_ChannelisationCode_VHCR_cc16_15	= 29,
	UL_TS_ChannelisationCode_VHCR_cc16_16	= 30,
	UL_TS_ChannelisationCode_VHCR_cc32_1	= 31,
	UL_TS_ChannelisationCode_VHCR_cc32_2	= 32,
	UL_TS_ChannelisationCode_VHCR_cc32_3	= 33,
	UL_TS_ChannelisationCode_VHCR_cc32_4	= 34,
	UL_TS_ChannelisationCode_VHCR_cc32_5	= 35,
	UL_TS_ChannelisationCode_VHCR_cc32_6	= 36,
	UL_TS_ChannelisationCode_VHCR_cc32_7	= 37,
	UL_TS_ChannelisationCode_VHCR_cc32_8	= 38,
	UL_TS_ChannelisationCode_VHCR_cc32_9	= 39,
	UL_TS_ChannelisationCode_VHCR_cc32_10	= 40,
	UL_TS_ChannelisationCode_VHCR_cc32_11	= 41,
	UL_TS_ChannelisationCode_VHCR_cc32_12	= 42,
	UL_TS_ChannelisationCode_VHCR_cc32_13	= 43,
	UL_TS_ChannelisationCode_VHCR_cc32_14	= 44,
	UL_TS_ChannelisationCode_VHCR_cc32_15	= 45,
	UL_TS_ChannelisationCode_VHCR_cc32_16	= 46,
	UL_TS_ChannelisationCode_VHCR_cc32_17	= 47,
	UL_TS_ChannelisationCode_VHCR_cc32_18	= 48,
	UL_TS_ChannelisationCode_VHCR_cc32_19	= 49,
	UL_TS_ChannelisationCode_VHCR_cc32_20	= 50,
	UL_TS_ChannelisationCode_VHCR_cc32_21	= 51,
	UL_TS_ChannelisationCode_VHCR_cc32_22	= 52,
	UL_TS_ChannelisationCode_VHCR_cc32_23	= 53,
	UL_TS_ChannelisationCode_VHCR_cc32_24	= 54,
	UL_TS_ChannelisationCode_VHCR_cc32_25	= 55,
	UL_TS_ChannelisationCode_VHCR_cc32_26	= 56,
	UL_TS_ChannelisationCode_VHCR_cc32_27	= 57,
	UL_TS_ChannelisationCode_VHCR_cc32_28	= 58,
	UL_TS_ChannelisationCode_VHCR_cc32_29	= 59,
	UL_TS_ChannelisationCode_VHCR_cc32_30	= 60,
	UL_TS_ChannelisationCode_VHCR_cc32_31	= 61,
	UL_TS_ChannelisationCode_VHCR_cc32_32	= 62
} e_UL_TS_ChannelisationCode_VHCR;

/* UL-TS-ChannelisationCode-VHCR */
typedef long	 UL_TS_ChannelisationCode_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TS_ChannelisationCode_VHCR;
asn_struct_free_f UL_TS_ChannelisationCode_VHCR_free;
asn_struct_print_f UL_TS_ChannelisationCode_VHCR_print;
asn_constr_check_f UL_TS_ChannelisationCode_VHCR_constraint;
ber_type_decoder_f UL_TS_ChannelisationCode_VHCR_decode_ber;
der_type_encoder_f UL_TS_ChannelisationCode_VHCR_encode_der;
xer_type_decoder_f UL_TS_ChannelisationCode_VHCR_decode_xer;
xer_type_encoder_f UL_TS_ChannelisationCode_VHCR_encode_xer;
per_type_decoder_f UL_TS_ChannelisationCode_VHCR_decode_uper;
per_type_encoder_f UL_TS_ChannelisationCode_VHCR_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_TS_ChannelisationCode_VHCR_H_ */
