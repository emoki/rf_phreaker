/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MaxNoBits_H_
#define	_MaxNoBits_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MaxNoBits {
	MaxNoBits_b640	= 0,
	MaxNoBits_b1280	= 1,
	MaxNoBits_b2560	= 2,
	MaxNoBits_b3840	= 3,
	MaxNoBits_b5120	= 4,
	MaxNoBits_b6400	= 5,
	MaxNoBits_b7680	= 6,
	MaxNoBits_b8960	= 7,
	MaxNoBits_b10240	= 8,
	MaxNoBits_b20480	= 9,
	MaxNoBits_b40960	= 10,
	MaxNoBits_b81920	= 11,
	MaxNoBits_b163840	= 12
} e_MaxNoBits;

/* MaxNoBits */
typedef long	 MaxNoBits_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MaxNoBits;
asn_struct_free_f MaxNoBits_free;
asn_struct_print_f MaxNoBits_print;
asn_constr_check_f MaxNoBits_constraint;
ber_type_decoder_f MaxNoBits_decode_ber;
der_type_encoder_f MaxNoBits_encode_der;
xer_type_decoder_f MaxNoBits_decode_xer;
xer_type_encoder_f MaxNoBits_encode_xer;
per_type_decoder_f MaxNoBits_decode_uper;
per_type_encoder_f MaxNoBits_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaxNoBits_H_ */
