/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterRATHandoverInfo_v770ext_IEs_H_
#define	_InterRATHandoverInfo_v770ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapabilityInfo_v770ext;
struct UE_RadioAccessCapabilityComp_v770ext;
struct UE_RadioAccessCapabilityComp2_v770ext;

/* InterRATHandoverInfo-v770ext-IEs */
typedef struct InterRATHandoverInfo_v770ext_IEs {
	struct UE_RadioAccessCapabilityInfo_v770ext	*ue_RadioAccessCapabilityInfo	/* OPTIONAL */;
	struct UE_RadioAccessCapabilityComp_v770ext	*ue_RadioAccessCapabilityComp	/* OPTIONAL */;
	struct UE_RadioAccessCapabilityComp2_v770ext	*ue_RadioAccessCapabilityComp2	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATHandoverInfo_v770ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATHandoverInfo_v770ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabilityInfo-v770ext.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabilityComp-v770ext.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabilityComp2-v770ext.h"

#endif	/* _InterRATHandoverInfo_v770ext_IEs_H_ */
