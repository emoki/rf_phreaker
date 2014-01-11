/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CQI_ReportBothProc_r11_H_
#define	_CQI_ReportBothProc_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/CSI-ProcessId-r11.h"
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportBothProc_r11__pmi_RI_Report_r11 {
	CQI_ReportBothProc_r11__pmi_RI_Report_r11_setup	= 0
} e_CQI_ReportBothProc_r11__pmi_RI_Report_r11;

/* CQI-ReportBothProc-r11 */
typedef struct CQI_ReportBothProc_r11 {
	CSI_ProcessId_r11_t	*ri_Ref_CSI_ProcessId_r11	/* OPTIONAL */;
	long	*pmi_RI_Report_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportBothProc_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportBothProc_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportBothProc_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
