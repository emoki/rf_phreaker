/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ALM_MidiAlmanacSet_H_
#define	_ALM_MidiAlmanacSet_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/GANSS-SAT-Info-Almanac-MIDIkpList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ALM-MidiAlmanacSet */
typedef struct ALM_MidiAlmanacSet {
	long	 t_oa;
	GANSS_SAT_Info_Almanac_MIDIkpList_t	 sat_info_MIDIkpList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ALM_MidiAlmanacSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ALM_MidiAlmanacSet;

#ifdef __cplusplus
}
#endif

#endif	/* _ALM_MidiAlmanacSet_H_ */
