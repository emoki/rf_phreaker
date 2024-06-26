/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EventResults_v770ext_H_
#define	_EventResults_v770ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-MeasurementEventResults-v770ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventResults_v770ext_PR {
	EventResults_v770ext_PR_NOTHING,	/* No components present */
	EventResults_v770ext_PR_ue_positioning_MeasurementEventResults
} EventResults_v770ext_PR;

/* EventResults-v770ext */
typedef struct EventResults_v770ext {
	EventResults_v770ext_PR present;
	union EventResults_v770ext_u {
		UE_Positioning_MeasurementEventResults_v770ext_t	 ue_positioning_MeasurementEventResults;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventResults_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventResults_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _EventResults_v770ext_H_ */
