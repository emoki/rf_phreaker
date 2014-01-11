/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_GSM_PriorityInfoList_H_
#define	_GSM_PriorityInfoList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GSM_PriorityInfo;

/* GSM-PriorityInfoList */
typedef struct GSM_PriorityInfoList {
	A_SEQUENCE_OF(struct GSM_PriorityInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_PriorityInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_PriorityInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/GSM-PriorityInfo.h"

#endif	/* _GSM_PriorityInfoList_H_ */
