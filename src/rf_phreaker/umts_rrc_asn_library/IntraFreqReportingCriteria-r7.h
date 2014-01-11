/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntraFreqReportingCriteria_r7_H_
#define	_IntraFreqReportingCriteria_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteriaList_r7;

/* IntraFreqReportingCriteria-r7 */
typedef struct IntraFreqReportingCriteria_r7 {
	struct IntraFreqEventCriteriaList_r7	*eventCriteriaList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqEventCriteriaList-r7.h"

#endif	/* _IntraFreqReportingCriteria_r7_H_ */
