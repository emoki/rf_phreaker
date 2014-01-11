/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TimingMaintainedSynchInd_H_
#define	_TimingMaintainedSynchInd_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimingMaintainedSynchInd {
	TimingMaintainedSynchInd_false	= 0
} e_TimingMaintainedSynchInd;

/* TimingMaintainedSynchInd */
typedef long	 TimingMaintainedSynchInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimingMaintainedSynchInd;
asn_struct_free_f TimingMaintainedSynchInd_free;
asn_struct_print_f TimingMaintainedSynchInd_print;
asn_constr_check_f TimingMaintainedSynchInd_constraint;
ber_type_decoder_f TimingMaintainedSynchInd_decode_ber;
der_type_encoder_f TimingMaintainedSynchInd_encode_der;
xer_type_decoder_f TimingMaintainedSynchInd_decode_xer;
xer_type_encoder_f TimingMaintainedSynchInd_encode_xer;
per_type_decoder_f TimingMaintainedSynchInd_decode_uper;
per_type_encoder_f TimingMaintainedSynchInd_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimingMaintainedSynchInd_H_ */
