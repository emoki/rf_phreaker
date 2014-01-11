/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Event1a_LCR_r4_H_
#define	_Event1a_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TriggeringCondition2.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportingRange.h"
#include "rf_phreaker/umts_rrc_asn_library/W.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportDeactivationThreshold.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportingAmount.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportingInterval.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenAffectCellList_LCR_r4;

/* Event1a-LCR-r4 */
typedef struct Event1a_LCR_r4 {
	TriggeringCondition2_t	 triggeringCondition;
	ReportingRange_t	 reportingRange;
	struct ForbiddenAffectCellList_LCR_r4	*forbiddenAffectCellList	/* OPTIONAL */;
	W_t	 w;
	ReportDeactivationThreshold_t	 reportDeactivationThreshold;
	ReportingAmount_t	 reportingAmount;
	ReportingInterval_t	 reportingInterval;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event1a_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event1a_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ForbiddenAffectCellList-LCR-r4.h"

#endif	/* _Event1a_LCR_r4_H_ */
