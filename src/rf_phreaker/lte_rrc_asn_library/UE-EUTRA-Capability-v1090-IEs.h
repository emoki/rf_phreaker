/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_Capability_v1090_IEs_H_
#define	_UE_EUTRA_Capability_v1090_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RF_Parameters_v1090;
struct UE_EUTRA_Capability_v1130_IEs;

/* UE-EUTRA-Capability-v1090-IEs */
typedef struct UE_EUTRA_Capability_v1090_IEs {
	struct RF_Parameters_v1090	*rf_Parameters_v1090	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1090_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1090_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/RF-Parameters-v1090.h"
#include "rf_phreaker/lte_rrc_asn_library/UE-EUTRA-Capability-v1130-IEs.h"

#endif	/* _UE_EUTRA_Capability_v1090_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
