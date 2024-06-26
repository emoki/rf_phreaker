/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_GANSS_SAT_Info_Almanac_MIDIkp_H_
#define	_GANSS_SAT_Info_Almanac_MIDIkp_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSS-SAT-Info-Almanac-MIDIkp */
typedef struct GANSS_SAT_Info_Almanac_MIDIkp {
	long	 svID;
	BIT_STRING_t	 midiAlmE;
	BIT_STRING_t	 midiAlmDeltaI;
	BIT_STRING_t	 midiAlmOmegaDot;
	BIT_STRING_t	 midiAlmSqrtA;
	BIT_STRING_t	 midiAlmOmega0;
	BIT_STRING_t	 midiAlmOmega;
	BIT_STRING_t	 midiAlmMo;
	BIT_STRING_t	 midiAlmaf0;
	BIT_STRING_t	 midiAlmaf1;
	BIT_STRING_t	 midiAlmL1Health;
	BIT_STRING_t	 midiAlmL2Health;
	BIT_STRING_t	 midiAlmL5Health;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_SAT_Info_Almanac_MIDIkp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_MIDIkp;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSS_SAT_Info_Almanac_MIDIkp_H_ */
