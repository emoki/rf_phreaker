/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UDREValidityTime_H_
#define	_UDREValidityTime_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UDREValidityTime {
	UDREValidityTime_val_20sec	= 0,
	UDREValidityTime_val_40sec	= 1,
	UDREValidityTime_val_80sec	= 2,
	UDREValidityTime_val_160sec	= 3,
	UDREValidityTime_val_320sec	= 4,
	UDREValidityTime_val_640sec	= 5,
	UDREValidityTime_val_1280sec	= 6,
	UDREValidityTime_val_2560sec	= 7
} e_UDREValidityTime;

/* UDREValidityTime */
typedef long	 UDREValidityTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UDREValidityTime;
asn_struct_free_f UDREValidityTime_free;
asn_struct_print_f UDREValidityTime_print;
asn_constr_check_f UDREValidityTime_constraint;
ber_type_decoder_f UDREValidityTime_decode_ber;
der_type_encoder_f UDREValidityTime_encode_der;
xer_type_decoder_f UDREValidityTime_decode_xer;
xer_type_encoder_f UDREValidityTime_encode_xer;
per_type_decoder_f UDREValidityTime_decode_uper;
per_type_encoder_f UDREValidityTime_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UDREValidityTime_H_ */
