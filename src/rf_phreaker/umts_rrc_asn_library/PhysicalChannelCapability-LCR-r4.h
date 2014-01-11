/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PhysicalChannelCapability_LCR_r4_H_
#define	_PhysicalChannelCapability_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityTDD-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityTDD-LCR-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapability-LCR-r4 */
typedef struct PhysicalChannelCapability_LCR_r4 {
	struct PhysicalChannelCapability_LCR_r4__tdd128_PhysChCapability {
		DL_PhysChCapabilityTDD_LCR_r4_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_LCR_r4_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tdd128_PhysChCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_LCR_r4_H_ */
