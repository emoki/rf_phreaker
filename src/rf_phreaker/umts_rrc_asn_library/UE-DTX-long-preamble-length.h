/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_DTX_long_preamble_length_H_
#define	_UE_DTX_long_preamble_length_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_DTX_long_preamble_length {
	UE_DTX_long_preamble_length_slots_4	= 0,
	UE_DTX_long_preamble_length_slots_15	= 1
} e_UE_DTX_long_preamble_length;

/* UE-DTX-long-preamble-length */
typedef long	 UE_DTX_long_preamble_length_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_DTX_long_preamble_length;
asn_struct_free_f UE_DTX_long_preamble_length_free;
asn_struct_print_f UE_DTX_long_preamble_length_print;
asn_constr_check_f UE_DTX_long_preamble_length_constraint;
ber_type_decoder_f UE_DTX_long_preamble_length_decode_ber;
der_type_encoder_f UE_DTX_long_preamble_length_encode_der;
xer_type_decoder_f UE_DTX_long_preamble_length_decode_xer;
xer_type_encoder_f UE_DTX_long_preamble_length_encode_xer;
per_type_decoder_f UE_DTX_long_preamble_length_decode_uper;
per_type_encoder_f UE_DTX_long_preamble_length_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_DTX_long_preamble_length_H_ */
