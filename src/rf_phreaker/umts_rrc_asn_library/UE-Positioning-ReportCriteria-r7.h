/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_ReportCriteria_r7_H_
#define	_UE_Positioning_ReportCriteria_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-EventParamList-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/PeriodicalReportingCriteria.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_ReportCriteria_r7_PR {
	UE_Positioning_ReportCriteria_r7_PR_NOTHING,	/* No components present */
	UE_Positioning_ReportCriteria_r7_PR_ue_positioning_ReportingCriteria,
	UE_Positioning_ReportCriteria_r7_PR_periodicalReportingCriteria,
	UE_Positioning_ReportCriteria_r7_PR_noReporting
} UE_Positioning_ReportCriteria_r7_PR;

/* UE-Positioning-ReportCriteria-r7 */
typedef struct UE_Positioning_ReportCriteria_r7 {
	UE_Positioning_ReportCriteria_r7_PR present;
	union UE_Positioning_ReportCriteria_r7_u {
		UE_Positioning_EventParamList_r7_t	 ue_positioning_ReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
		NULL_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_ReportCriteria_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_ReportCriteria_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_ReportCriteria_r7_H_ */
