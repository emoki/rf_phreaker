/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CQI_ReportConfig_v1130_H_
#define	_CQI_ReportConfig_v1130_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportPeriodic-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportBoth-r11.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportConfig-v1130 */
typedef struct CQI_ReportConfig_v1130 {
	CQI_ReportPeriodic_v1130_t	 cqi_ReportPeriodic_v1130;
	CQI_ReportBoth_r11_t	 cqi_ReportBoth_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_v1130_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
