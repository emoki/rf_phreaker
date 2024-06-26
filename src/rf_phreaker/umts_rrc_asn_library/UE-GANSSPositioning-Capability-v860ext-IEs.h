/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_GANSSPositioning_Capability_v860ext_IEs_H_
#define	_UE_GANSSPositioning_Capability_v860ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NetworkAssistedGANSS_Supported_List_v860ext;

/* UE-GANSSPositioning-Capability-v860ext-IEs */
typedef struct UE_GANSSPositioning_Capability_v860ext_IEs {
	struct NetworkAssistedGANSS_Supported_List_v860ext	*networkAssistedGANSS_supportedList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_GANSSPositioning_Capability_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_GANSSPositioning_Capability_v860ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/NetworkAssistedGANSS-Supported-List-v860ext.h"

#endif	/* _UE_GANSSPositioning_Capability_v860ext_IEs_H_ */
