/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HandoverPreparationInformation_r8_IEs_H_
#define	_HandoverPreparationInformation_r8_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/UE-CapabilityRAT-ContainerList.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AS_Config;
struct RRM_Config;
struct AS_Context;
struct HandoverPreparationInformation_v920_IEs;

/* HandoverPreparationInformation-r8-IEs */
typedef struct HandoverPreparationInformation_r8_IEs {
	UE_CapabilityRAT_ContainerList_t	 ue_RadioAccessCapabilityInfo;
	struct AS_Config	*as_Config	/* OPTIONAL */;
	struct RRM_Config	*rrm_Config	/* OPTIONAL */;
	struct AS_Context	*as_Context	/* OPTIONAL */;
	struct HandoverPreparationInformation_v920_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/AS-Config.h"
#include "rf_phreaker/lte_rrc_asn_library/RRM-Config.h"
#include "rf_phreaker/lte_rrc_asn_library/AS-Context.h"
#include "rf_phreaker/lte_rrc_asn_library/HandoverPreparationInformation-v920-IEs.h"

#endif	/* _HandoverPreparationInformation_r8_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
