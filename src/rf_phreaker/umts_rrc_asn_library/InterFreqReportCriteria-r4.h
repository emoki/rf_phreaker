/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterFreqReportCriteria_r4_H_
#define	_InterFreqReportCriteria_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingCriteria-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/InterFreqReportingCriteria.h"
#include "rf_phreaker/umts_rrc_asn_library/PeriodicalWithReportingCellStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/ReportingCellStatusOpt.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqReportCriteria_r4_PR {
	InterFreqReportCriteria_r4_PR_NOTHING,	/* No components present */
	InterFreqReportCriteria_r4_PR_intraFreqReportingCriteria,
	InterFreqReportCriteria_r4_PR_interFreqReportingCriteria,
	InterFreqReportCriteria_r4_PR_periodicalReportingCriteria,
	InterFreqReportCriteria_r4_PR_noReporting
} InterFreqReportCriteria_r4_PR;

/* InterFreqReportCriteria-r4 */
typedef struct InterFreqReportCriteria_r4 {
	InterFreqReportCriteria_r4_PR present;
	union InterFreqReportCriteria_r4_u {
		IntraFreqReportingCriteria_r4_t	 intraFreqReportingCriteria;
		InterFreqReportingCriteria_t	 interFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqReportCriteria_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqReportCriteria_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqReportCriteria_r4_H_ */
