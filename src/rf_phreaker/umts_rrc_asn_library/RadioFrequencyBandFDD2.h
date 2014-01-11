/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RadioFrequencyBandFDD2_H_
#define	_RadioFrequencyBandFDD2_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioFrequencyBandFDD2 {
	RadioFrequencyBandFDD2_bandVIII	= 0,
	RadioFrequencyBandFDD2_bandIX	= 1,
	RadioFrequencyBandFDD2_bandX	= 2,
	RadioFrequencyBandFDD2_bandXI	= 3,
	RadioFrequencyBandFDD2_bandXII	= 4,
	RadioFrequencyBandFDD2_bandXIII	= 5,
	RadioFrequencyBandFDD2_bandXIV	= 6,
	RadioFrequencyBandFDD2_bandXV	= 7,
	RadioFrequencyBandFDD2_bandXVI	= 8,
	RadioFrequencyBandFDD2_bandXVII	= 9,
	RadioFrequencyBandFDD2_bandXVIII	= 10,
	RadioFrequencyBandFDD2_bandXIX	= 11,
	RadioFrequencyBandFDD2_bandXX	= 12,
	RadioFrequencyBandFDD2_bandXXI	= 13,
	RadioFrequencyBandFDD2_bandXXII	= 14,
	RadioFrequencyBandFDD2_extension_indicator	= 15
} e_RadioFrequencyBandFDD2;

/* RadioFrequencyBandFDD2 */
typedef long	 RadioFrequencyBandFDD2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioFrequencyBandFDD2;
asn_struct_free_f RadioFrequencyBandFDD2_free;
asn_struct_print_f RadioFrequencyBandFDD2_print;
asn_constr_check_f RadioFrequencyBandFDD2_constraint;
ber_type_decoder_f RadioFrequencyBandFDD2_decode_ber;
der_type_encoder_f RadioFrequencyBandFDD2_encode_der;
xer_type_decoder_f RadioFrequencyBandFDD2_decode_xer;
xer_type_encoder_f RadioFrequencyBandFDD2_encode_xer;
per_type_decoder_f RadioFrequencyBandFDD2_decode_uper;
per_type_encoder_f RadioFrequencyBandFDD2_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioFrequencyBandFDD2_H_ */
