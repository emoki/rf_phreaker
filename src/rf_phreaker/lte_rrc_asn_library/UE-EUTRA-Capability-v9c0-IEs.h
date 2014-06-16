/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v9c0_IEs_H_
#define	_UE_EUTRA_Capability_v9c0_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IRAT_ParametersUTRA_v9c0;
struct UE_EUTRA_Capability_v9d0_IEs;

/* UE-EUTRA-Capability-v9c0-IEs */
typedef struct UE_EUTRA_Capability_v9c0_IEs {
	struct IRAT_ParametersUTRA_v9c0	*interRAT_ParametersUTRA_v9c0	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v9d0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v9c0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v9c0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/IRAT-ParametersUTRA-v9c0.h"
#include "rf_phreaker/lte_rrc_asn_library/UE-EUTRA-Capability-v9d0-IEs.h"

#endif	/* _UE_EUTRA_Capability_v9c0_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
