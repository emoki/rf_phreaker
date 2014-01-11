/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntegrityProtectionAlgorithm_r7_H_
#define	_IntegrityProtectionAlgorithm_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntegrityProtectionAlgorithm_r7 {
	IntegrityProtectionAlgorithm_r7_uia1	= 0,
	IntegrityProtectionAlgorithm_r7_uia2	= 1
} e_IntegrityProtectionAlgorithm_r7;

/* IntegrityProtectionAlgorithm-r7 */
typedef long	 IntegrityProtectionAlgorithm_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntegrityProtectionAlgorithm_r7;
asn_struct_free_f IntegrityProtectionAlgorithm_r7_free;
asn_struct_print_f IntegrityProtectionAlgorithm_r7_print;
asn_constr_check_f IntegrityProtectionAlgorithm_r7_constraint;
ber_type_decoder_f IntegrityProtectionAlgorithm_r7_decode_ber;
der_type_encoder_f IntegrityProtectionAlgorithm_r7_encode_der;
xer_type_decoder_f IntegrityProtectionAlgorithm_r7_decode_xer;
xer_type_encoder_f IntegrityProtectionAlgorithm_r7_encode_xer;
per_type_decoder_f IntegrityProtectionAlgorithm_r7_decode_uper;
per_type_encoder_f IntegrityProtectionAlgorithm_r7_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityProtectionAlgorithm_r7_H_ */
