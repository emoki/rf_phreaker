/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CQI_ReportConfig_H_
#define	_CQI_ReportConfig_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportModeAperiodic.h"
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CQI_ReportPeriodic;

/* CQI-ReportConfig */
typedef struct CQI_ReportConfig {
	CQI_ReportModeAperiodic_t	*cqi_ReportModeAperiodic	/* OPTIONAL */;
	long	 nomPDSCH_RS_EPRE_Offset;
	struct CQI_ReportPeriodic	*cqi_ReportPeriodic	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportPeriodic.h"

#endif	/* _CQI_ReportConfig_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
