/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterRATMeasurement_r6_H_
#define	_InterRATMeasurement_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/InterRATReportCriteria.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterRATCellInfoList_r6;
struct InterRATMeasQuantity;
struct InterRATReportingQuantity;

/* InterRATMeasurement-r6 */
typedef struct InterRATMeasurement_r6 {
	struct InterRATCellInfoList_r6	*interRATCellInfoList	/* OPTIONAL */;
	struct InterRATMeasQuantity	*interRATMeasQuantity	/* OPTIONAL */;
	struct InterRATReportingQuantity	*interRATReportingQuantity	/* OPTIONAL */;
	InterRATReportCriteria_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATMeasurement_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATMeasurement_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/InterRATCellInfoList-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRATMeasQuantity.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRATReportingQuantity.h"

#endif	/* _InterRATMeasurement_r6_H_ */
