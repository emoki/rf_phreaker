/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandUTRA_TDD128_H_
#define	_SupportedBandUTRA_TDD128_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedBandUTRA_TDD128 {
	SupportedBandUTRA_TDD128_a	= 0,
	SupportedBandUTRA_TDD128_b	= 1,
	SupportedBandUTRA_TDD128_c	= 2,
	SupportedBandUTRA_TDD128_d	= 3,
	SupportedBandUTRA_TDD128_e	= 4,
	SupportedBandUTRA_TDD128_f	= 5,
	SupportedBandUTRA_TDD128_g	= 6,
	SupportedBandUTRA_TDD128_h	= 7,
	SupportedBandUTRA_TDD128_i	= 8,
	SupportedBandUTRA_TDD128_j	= 9,
	SupportedBandUTRA_TDD128_k	= 10,
	SupportedBandUTRA_TDD128_l	= 11,
	SupportedBandUTRA_TDD128_m	= 12,
	SupportedBandUTRA_TDD128_n	= 13,
	SupportedBandUTRA_TDD128_o	= 14,
	SupportedBandUTRA_TDD128_p	= 15
	/*
	 * Enumeration is extensible
	 */
} e_SupportedBandUTRA_TDD128;

/* SupportedBandUTRA-TDD128 */
typedef long	 SupportedBandUTRA_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandUTRA_TDD128;
asn_struct_free_f SupportedBandUTRA_TDD128_free;
asn_struct_print_f SupportedBandUTRA_TDD128_print;
asn_constr_check_f SupportedBandUTRA_TDD128_constraint;
ber_type_decoder_f SupportedBandUTRA_TDD128_decode_ber;
der_type_encoder_f SupportedBandUTRA_TDD128_encode_der;
xer_type_decoder_f SupportedBandUTRA_TDD128_decode_xer;
xer_type_encoder_f SupportedBandUTRA_TDD128_encode_xer;
per_type_decoder_f SupportedBandUTRA_TDD128_decode_uper;
per_type_encoder_f SupportedBandUTRA_TDD128_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandUTRA_TDD128_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
