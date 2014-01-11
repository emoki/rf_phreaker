/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_RadioAccessCapabBandFDD2_H_
#define	_UE_RadioAccessCapabBandFDD2_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RadioFrequencyBandFDD2.h"
#include "rf_phreaker/umts_rrc_asn_library/MeasurementCapabilityExt2.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-PowerClassExt.h"
#include "rf_phreaker/umts_rrc_asn_library/TxRxFrequencySeparation.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioAccessCapabBandFDD2 */
typedef struct UE_RadioAccessCapabBandFDD2 {
	RadioFrequencyBandFDD2_t	 radioFrequencyBandFDD2;
	struct UE_RadioAccessCapabBandFDD2__fddRF_Capability {
		UE_PowerClassExt_t	 ue_PowerClass;
		TxRxFrequencySeparation_t	 txRxFrequencySeparation;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fddRF_Capability;
	MeasurementCapabilityExt2_t	 measurementCapability2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabBandFDD2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabBandFDD2;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabBandFDD2_H_ */
