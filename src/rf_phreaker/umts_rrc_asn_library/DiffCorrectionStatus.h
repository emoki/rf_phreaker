/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DiffCorrectionStatus_H_
#define	_DiffCorrectionStatus_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DiffCorrectionStatus {
	DiffCorrectionStatus_udre_1_0	= 0,
	DiffCorrectionStatus_udre_0_75	= 1,
	DiffCorrectionStatus_udre_0_5	= 2,
	DiffCorrectionStatus_udre_0_3	= 3,
	DiffCorrectionStatus_udre_0_2	= 4,
	DiffCorrectionStatus_udre_0_1	= 5,
	DiffCorrectionStatus_noData	= 6,
	DiffCorrectionStatus_invalidData	= 7
} e_DiffCorrectionStatus;

/* DiffCorrectionStatus */
typedef long	 DiffCorrectionStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DiffCorrectionStatus;
asn_struct_free_f DiffCorrectionStatus_free;
asn_struct_print_f DiffCorrectionStatus_print;
asn_constr_check_f DiffCorrectionStatus_constraint;
ber_type_decoder_f DiffCorrectionStatus_decode_ber;
der_type_encoder_f DiffCorrectionStatus_encode_der;
xer_type_decoder_f DiffCorrectionStatus_decode_xer;
xer_type_encoder_f DiffCorrectionStatus_encode_xer;
per_type_decoder_f DiffCorrectionStatus_decode_uper;
per_type_encoder_f DiffCorrectionStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DiffCorrectionStatus_H_ */
