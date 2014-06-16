/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CQI_ReportConfig_v920_H_
#define	_CQI_ReportConfig_v920_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfig_v920__cqi_Mask_r9 {
	CQI_ReportConfig_v920__cqi_Mask_r9_setup	= 0
} e_CQI_ReportConfig_v920__cqi_Mask_r9;
typedef enum CQI_ReportConfig_v920__pmi_RI_Report_r9 {
	CQI_ReportConfig_v920__pmi_RI_Report_r9_setup	= 0
} e_CQI_ReportConfig_v920__pmi_RI_Report_r9;

/* CQI-ReportConfig-v920 */
typedef struct CQI_ReportConfig_v920 {
	long	*cqi_Mask_r9	/* OPTIONAL */;
	long	*pmi_RI_Report_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_Mask_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v920;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_v920_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
