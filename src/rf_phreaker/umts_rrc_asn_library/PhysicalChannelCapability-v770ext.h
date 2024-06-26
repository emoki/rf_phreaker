/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PhysicalChannelCapability_v770ext_H_
#define	_PhysicalChannelCapability_v770ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityFDD-v770ext.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityFDD-v770ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityTDD-384-v770ext.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityTDD-768.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityTDD-768.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityTDD-128-v770ext.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityTDD-128-v770ext.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapability-v770ext */
typedef struct PhysicalChannelCapability_v770ext {
	struct PhysicalChannelCapability_v770ext__fddPhysChCapability {
		DL_PhysChCapabilityFDD_v770ext_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityFDD_v770ext_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fddPhysChCapability;
	struct PhysicalChannelCapability_v770ext__tddPhysChCapability_384 {
		UL_PhysChCapabilityTDD_384_v770ext_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability_384;
	struct PhysicalChannelCapability_v770ext__tddPhysChCapability_768 {
		DL_PhysChCapabilityTDD_768_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_768_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability_768;
	struct PhysicalChannelCapability_v770ext__tddPhysChCapability_128 {
		DL_PhysChCapabilityTDD_128_v770ext_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_128_v770ext_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability_128;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_v770ext_H_ */
