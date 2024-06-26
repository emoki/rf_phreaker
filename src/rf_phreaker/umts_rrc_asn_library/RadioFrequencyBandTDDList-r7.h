/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RadioFrequencyBandTDDList_r7_H_
#define	_RadioFrequencyBandTDDList_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioFrequencyBandTDDList_r7 {
	RadioFrequencyBandTDDList_r7_a	= 0,
	RadioFrequencyBandTDDList_r7_b	= 1,
	RadioFrequencyBandTDDList_r7_c	= 2,
	RadioFrequencyBandTDDList_r7_d	= 3,
	RadioFrequencyBandTDDList_r7_ab	= 4,
	RadioFrequencyBandTDDList_r7_ac	= 5,
	RadioFrequencyBandTDDList_r7_ad	= 6,
	RadioFrequencyBandTDDList_r7_bc	= 7,
	RadioFrequencyBandTDDList_r7_bd	= 8,
	RadioFrequencyBandTDDList_r7_cd	= 9,
	RadioFrequencyBandTDDList_r7_abc	= 10,
	RadioFrequencyBandTDDList_r7_abd	= 11,
	RadioFrequencyBandTDDList_r7_acd	= 12,
	RadioFrequencyBandTDDList_r7_bcd	= 13,
	RadioFrequencyBandTDDList_r7_abcd	= 14,
	RadioFrequencyBandTDDList_r7_notabcd	= 15
} e_RadioFrequencyBandTDDList_r7;

/* RadioFrequencyBandTDDList-r7 */
typedef long	 RadioFrequencyBandTDDList_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioFrequencyBandTDDList_r7;
asn_struct_free_f RadioFrequencyBandTDDList_r7_free;
asn_struct_print_f RadioFrequencyBandTDDList_r7_print;
asn_constr_check_f RadioFrequencyBandTDDList_r7_constraint;
ber_type_decoder_f RadioFrequencyBandTDDList_r7_decode_ber;
der_type_encoder_f RadioFrequencyBandTDDList_r7_encode_der;
xer_type_decoder_f RadioFrequencyBandTDDList_r7_decode_xer;
xer_type_encoder_f RadioFrequencyBandTDDList_r7_encode_xer;
per_type_decoder_f RadioFrequencyBandTDDList_r7_decode_uper;
per_type_encoder_f RadioFrequencyBandTDDList_r7_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioFrequencyBandTDDList_r7_H_ */
