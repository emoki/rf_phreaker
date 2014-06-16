/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CQI_ReportConfig_r10_H_
#define	_CQI_ReportConfig_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include "rf_phreaker/lte_rrc_asn_library/MeasSubframePattern-r10.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportConfig_r10__pmi_RI_Report_r9 {
	CQI_ReportConfig_r10__pmi_RI_Report_r9_setup	= 0
} e_CQI_ReportConfig_r10__pmi_RI_Report_r9;
typedef enum CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR {
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_NOTHING,	/* No components present */
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_release,
	CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR_setup
} CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR;

/* Forward declarations */
struct CQI_ReportAperiodic_r10;
struct CQI_ReportPeriodic_r10;

/* CQI-ReportConfig-r10 */
typedef struct CQI_ReportConfig_r10 {
	struct CQI_ReportAperiodic_r10	*cqi_ReportAperiodic_r10	/* OPTIONAL */;
	long	 nomPDSCH_RS_EPRE_Offset;
	struct CQI_ReportPeriodic_r10	*cqi_ReportPeriodic_r10	/* OPTIONAL */;
	long	*pmi_RI_Report_r9	/* OPTIONAL */;
	struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10 {
		CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_PR present;
		union CQI_ReportConfig_r10__csi_SubframePatternConfig_r10_u {
			NULL_t	 release;
			struct CQI_ReportConfig_r10__csi_SubframePatternConfig_r10__setup {
				MeasSubframePattern_r10_t	 csi_MeasSubframeSet1_r10;
				MeasSubframePattern_r10_t	 csi_MeasSubframeSet2_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_SubframePatternConfig_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_RI_Report_r9_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportAperiodic-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportPeriodic-r10.h"

#endif	/* _CQI_ReportConfig_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
