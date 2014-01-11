/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntraFrequencyMeasurement_H_
#define	_IntraFrequencyMeasurement_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqCellInfoList;
struct IntraFreqMeasQuantity;
struct IntraFreqReportingQuantity;
struct MeasurementValidity;
struct IntraFreqReportCriteria;

/* IntraFrequencyMeasurement */
typedef struct IntraFrequencyMeasurement {
	struct IntraFreqCellInfoList	*intraFreqCellInfoList	/* OPTIONAL */;
	struct IntraFreqMeasQuantity	*intraFreqMeasQuantity	/* OPTIONAL */;
	struct IntraFreqReportingQuantity	*intraFreqReportingQuantity	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	struct IntraFreqReportCriteria	*reportCriteria	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFrequencyMeasurement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFrequencyMeasurement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqCellInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity.h"
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingQuantity.h"
#include "rf_phreaker/umts_rrc_asn_library/MeasurementValidity.h"
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportCriteria.h"

#endif	/* _IntraFrequencyMeasurement_H_ */
