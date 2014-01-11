/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterFreqReportCriteria_r9_H_
#define	_InterFreqReportCriteria_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingCriteria-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/InterFreqReportingCriteria-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/PeriodicalWithReportingCellStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportingCellStatusOpt.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqReportCriteria_r9_PR {
	InterFreqReportCriteria_r9_PR_NOTHING,	/* No components present */
	InterFreqReportCriteria_r9_PR_intraFreqReportingCriteria,
	InterFreqReportCriteria_r9_PR_interFreqReportingCriteria,
	InterFreqReportCriteria_r9_PR_periodicalReportingCriteria,
	InterFreqReportCriteria_r9_PR_noReporting
} InterFreqReportCriteria_r9_PR;

/* InterFreqReportCriteria-r9 */
typedef struct InterFreqReportCriteria_r9 {
	InterFreqReportCriteria_r9_PR present;
	union InterFreqReportCriteria_r9_u {
		IntraFreqReportingCriteria_r9_t	 intraFreqReportingCriteria;
		InterFreqReportingCriteria_r6_t	 interFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportCriteria_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportCriteria_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqReportCriteria_r9_H_ */
