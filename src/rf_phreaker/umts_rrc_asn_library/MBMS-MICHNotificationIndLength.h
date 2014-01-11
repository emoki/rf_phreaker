/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_MICHNotificationIndLength_H_
#define	_MBMS_MICHNotificationIndLength_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_MICHNotificationIndLength {
	MBMS_MICHNotificationIndLength_mn4	= 0,
	MBMS_MICHNotificationIndLength_mn8	= 1,
	MBMS_MICHNotificationIndLength_mn16	= 2
} e_MBMS_MICHNotificationIndLength;

/* MBMS-MICHNotificationIndLength */
typedef long	 MBMS_MICHNotificationIndLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_MICHNotificationIndLength;
asn_struct_free_f MBMS_MICHNotificationIndLength_free;
asn_struct_print_f MBMS_MICHNotificationIndLength_print;
asn_constr_check_f MBMS_MICHNotificationIndLength_constraint;
ber_type_decoder_f MBMS_MICHNotificationIndLength_decode_ber;
der_type_encoder_f MBMS_MICHNotificationIndLength_encode_der;
xer_type_decoder_f MBMS_MICHNotificationIndLength_decode_xer;
xer_type_encoder_f MBMS_MICHNotificationIndLength_encode_xer;
per_type_decoder_f MBMS_MICHNotificationIndLength_decode_uper;
per_type_encoder_f MBMS_MICHNotificationIndLength_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_MICHNotificationIndLength_H_ */
