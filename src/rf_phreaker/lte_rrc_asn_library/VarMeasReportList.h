/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "EUTRA-UE-Variables.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_VarMeasReportList_H_
#define	_VarMeasReportList_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VarMeasReport;

/* VarMeasReportList */
typedef struct VarMeasReportList {
	A_SEQUENCE_OF(struct VarMeasReport) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasReportList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/VarMeasReport.h"

#endif	/* _VarMeasReportList_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
