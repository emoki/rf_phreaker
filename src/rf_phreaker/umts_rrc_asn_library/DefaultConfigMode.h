/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DefaultConfigMode_H_
#define	_DefaultConfigMode_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DefaultConfigMode {
	DefaultConfigMode_fdd	= 0,
	DefaultConfigMode_tdd	= 1
} e_DefaultConfigMode;

/* DefaultConfigMode */
typedef long	 DefaultConfigMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DefaultConfigMode;
asn_struct_free_f DefaultConfigMode_free;
asn_struct_print_f DefaultConfigMode_print;
asn_constr_check_f DefaultConfigMode_constraint;
ber_type_decoder_f DefaultConfigMode_decode_ber;
der_type_encoder_f DefaultConfigMode_encode_der;
xer_type_decoder_f DefaultConfigMode_decode_xer;
xer_type_encoder_f DefaultConfigMode_encode_xer;
per_type_decoder_f DefaultConfigMode_decode_uper;
per_type_encoder_f DefaultConfigMode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DefaultConfigMode_H_ */
