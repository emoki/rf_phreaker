/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PhysicalChannelCapabilityInfo_v770ext_H_
#define	_PhysicalChannelCapabilityInfo_v770ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityInfoTDD-768.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityTDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/UL-PhysChCapabilityInfoTDD-128-v770ext.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapabilityInfo-v770ext */
typedef struct PhysicalChannelCapabilityInfo_v770ext {
	struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_768 {
		DL_PhysChCapabilityInfoTDD_768_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability_768;
	struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_128 {
		UL_PhysChCapabilityInfoTDD_128_v770ext_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability_128;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapabilityInfo_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapabilityInfo_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapabilityInfo_v770ext_H_ */
