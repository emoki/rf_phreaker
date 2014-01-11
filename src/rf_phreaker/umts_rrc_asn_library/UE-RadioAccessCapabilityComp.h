/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_RadioAccessCapabilityComp_H_
#define	_UE_RadioAccessCapabilityComp_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/RF-CapabilityComp.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioAccessCapabilityComp */
typedef struct UE_RadioAccessCapabilityComp {
	BOOLEAN_t	 totalAM_RLCMemoryExceeds10kB;
	RF_CapabilityComp_t	 rf_CapabilityComp;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabilityComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabilityComp_H_ */
