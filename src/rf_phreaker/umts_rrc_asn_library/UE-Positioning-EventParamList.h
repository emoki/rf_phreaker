/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_EventParamList_H_
#define	_UE_Positioning_EventParamList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_EventParam;

/* UE-Positioning-EventParamList */
typedef struct UE_Positioning_EventParamList {
	A_SEQUENCE_OF(struct UE_Positioning_EventParam) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_EventParamList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_EventParamList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-EventParam.h"

#endif	/* _UE_Positioning_EventParamList_H_ */
