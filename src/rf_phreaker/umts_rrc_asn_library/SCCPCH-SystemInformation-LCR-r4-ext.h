/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SCCPCH_SystemInformation_LCR_r4_ext_H_
#define	_SCCPCH_SystemInformation_LCR_r4_ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryCCPCH-Info-LCR-r4-ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PICH_Info_LCR_r4;

/* SCCPCH-SystemInformation-LCR-r4-ext */
typedef struct SCCPCH_SystemInformation_LCR_r4_ext {
	SecondaryCCPCH_Info_LCR_r4_ext_t	 secondaryCCPCH_LCR_Extensions;
	struct PICH_Info_LCR_r4	*pich_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCPCH_SystemInformation_LCR_r4_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PICH-Info-LCR-r4.h"

#endif	/* _SCCPCH_SystemInformation_LCR_r4_ext_H_ */
