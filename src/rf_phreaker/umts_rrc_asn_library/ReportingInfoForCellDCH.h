/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ReportingInfoForCellDCH_H_
#define	_ReportingInfoForCellDCH_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingQuantity.h"
#include "rf_phreaker/umts_rrc_asn_library/MeasurementReportingMode.h"
#include "rf_phreaker/umts_rrc_asn_library/CellDCH-ReportCriteria.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReportingInfoForCellDCH */
typedef struct ReportingInfoForCellDCH {
	IntraFreqReportingQuantity_t	 intraFreqReportingQuantity;
	MeasurementReportingMode_t	 measurementReportingMode;
	CellDCH_ReportCriteria_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportingInfoForCellDCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingInfoForCellDCH;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingInfoForCellDCH_H_ */
