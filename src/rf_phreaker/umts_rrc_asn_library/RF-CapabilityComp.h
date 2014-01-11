/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RF_CapabilityComp_H_
#define	_RF_CapabilityComp_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/RF-CapabBandListFDDComp.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/umts_rrc_asn_library/RadioFrequencyBandTDDList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_CapabilityComp__fdd_PR {
	RF_CapabilityComp__fdd_PR_NOTHING,	/* No components present */
	RF_CapabilityComp__fdd_PR_notSupported,
	RF_CapabilityComp__fdd_PR_supported
} RF_CapabilityComp__fdd_PR;
typedef enum RF_CapabilityComp__tdd384_RF_Capability_PR {
	RF_CapabilityComp__tdd384_RF_Capability_PR_NOTHING,	/* No components present */
	RF_CapabilityComp__tdd384_RF_Capability_PR_notSupported,
	RF_CapabilityComp__tdd384_RF_Capability_PR_supported
} RF_CapabilityComp__tdd384_RF_Capability_PR;
typedef enum RF_CapabilityComp__tdd128_RF_Capability_PR {
	RF_CapabilityComp__tdd128_RF_Capability_PR_NOTHING,	/* No components present */
	RF_CapabilityComp__tdd128_RF_Capability_PR_notSupported,
	RF_CapabilityComp__tdd128_RF_Capability_PR_supported
} RF_CapabilityComp__tdd128_RF_Capability_PR;

/* RF-CapabilityComp */
typedef struct RF_CapabilityComp {
	struct RF_CapabilityComp__fdd {
		RF_CapabilityComp__fdd_PR present;
		union RF_CapabilityComp__fdd_u {
			NULL_t	 notSupported;
			RF_CapabBandListFDDComp_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fdd;
	struct RF_CapabilityComp__tdd384_RF_Capability {
		RF_CapabilityComp__tdd384_RF_Capability_PR present;
		union RF_CapabilityComp__tdd384_RF_Capability_u {
			NULL_t	 notSupported;
			RadioFrequencyBandTDDList_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd384_RF_Capability;
	struct RF_CapabilityComp__tdd128_RF_Capability {
		RF_CapabilityComp__tdd128_RF_Capability_PR present;
		union RF_CapabilityComp__tdd128_RF_Capability_u {
			NULL_t	 notSupported;
			RadioFrequencyBandTDDList_t	 supported;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tdd128_RF_Capability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_CapabilityComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_CapabilityComp;

#ifdef __cplusplus
}
#endif

#endif	/* _RF_CapabilityComp_H_ */
