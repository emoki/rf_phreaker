/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RRCConnectionSetupComplete_v380ext_IEs_H_
#define	_RRCConnectionSetupComplete_v380ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityFDD-v380ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability_v380ext;

/* RRCConnectionSetupComplete-v380ext-IEs */
typedef struct RRCConnectionSetupComplete_v380ext_IEs {
	struct UE_RadioAccessCapability_v380ext	*ue_RadioAccessCapability_v380ext	/* OPTIONAL */;
	DL_PhysChCapabilityFDD_v380ext_t	 dl_PhysChCapabilityFDD_v380ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetupComplete_v380ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_v380ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapability-v380ext.h"

#endif	/* _RRCConnectionSetupComplete_v380ext_IEs_H_ */
