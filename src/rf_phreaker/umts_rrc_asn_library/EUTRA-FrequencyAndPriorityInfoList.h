/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EUTRA_FrequencyAndPriorityInfoList_H_
#define	_EUTRA_FrequencyAndPriorityInfoList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_FrequencyAndPriorityInfo;

/* EUTRA-FrequencyAndPriorityInfoList */
typedef struct EUTRA_FrequencyAndPriorityInfoList {
	A_SEQUENCE_OF(struct EUTRA_FrequencyAndPriorityInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FrequencyAndPriorityInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FrequencyAndPriorityInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/EUTRA-FrequencyAndPriorityInfo.h"

#endif	/* _EUTRA_FrequencyAndPriorityInfoList_H_ */
