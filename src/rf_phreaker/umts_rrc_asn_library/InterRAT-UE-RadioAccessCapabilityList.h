/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterRAT_UE_RadioAccessCapabilityList_H_
#define	_InterRAT_UE_RadioAccessCapabilityList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterRAT_UE_RadioAccessCapability;

/* InterRAT-UE-RadioAccessCapabilityList */
typedef struct InterRAT_UE_RadioAccessCapabilityList {
	A_SEQUENCE_OF(struct InterRAT_UE_RadioAccessCapability) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_UE_RadioAccessCapabilityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_UE_RadioAccessCapabilityList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/InterRAT-UE-RadioAccessCapability.h"

#endif	/* _InterRAT_UE_RadioAccessCapabilityList_H_ */
