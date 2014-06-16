/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UECapabilityEnquiry_r8_IEs_H_
#define	_UECapabilityEnquiry_r8_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/UE-CapabilityRequest.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UECapabilityEnquiry_v8a0_IEs;

/* UECapabilityEnquiry-r8-IEs */
typedef struct UECapabilityEnquiry_r8_IEs {
	UE_CapabilityRequest_t	 ue_CapabilityRequest;
	struct UECapabilityEnquiry_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/UECapabilityEnquiry-v8a0-IEs.h"

#endif	/* _UECapabilityEnquiry_r8_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
