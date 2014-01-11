/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellDCH_ReportCriteria_LCR_r4_H_
#define	_CellDCH_ReportCriteria_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingCriteria-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/PeriodicalReportingCriteria.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellDCH_ReportCriteria_LCR_r4_PR {
	CellDCH_ReportCriteria_LCR_r4_PR_NOTHING,	/* No components present */
	CellDCH_ReportCriteria_LCR_r4_PR_intraFreqReportingCriteria,
	CellDCH_ReportCriteria_LCR_r4_PR_periodicalReportingCriteria
} CellDCH_ReportCriteria_LCR_r4_PR;

/* CellDCH-ReportCriteria-LCR-r4 */
typedef struct CellDCH_ReportCriteria_LCR_r4 {
	CellDCH_ReportCriteria_LCR_r4_PR present;
	union CellDCH_ReportCriteria_LCR_r4_u {
		IntraFreqReportingCriteria_LCR_r4_t	 intraFreqReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellDCH_ReportCriteria_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellDCH_ReportCriteria_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _CellDCH_ReportCriteria_LCR_r4_H_ */
