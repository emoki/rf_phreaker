/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_PhysChCapabilityFDD_r4_H_
#define	_DL_PhysChCapabilityFDD_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/MaxNoPhysChBitsReceived.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/SimultaneousSCCPCH-DPCH-Reception.h"
#include "rf_phreaker/umts_rrc_asn_library/SupportOfDedicatedPilotsForChEstimation.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-PhysChCapabilityFDD-r4 */
typedef struct DL_PhysChCapabilityFDD_r4 {
	long	 maxNoDPCH_PDSCH_Codes;
	MaxNoPhysChBitsReceived_t	 maxNoPhysChBitsReceived;
	BOOLEAN_t	 supportForSF_512;
	BOOLEAN_t	 dummy;
	SimultaneousSCCPCH_DPCH_Reception_t	 dummy2;
	SupportOfDedicatedPilotsForChEstimation_t	*dummy3	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PhysChCapabilityFDD_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityFDD_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PhysChCapabilityFDD_r4_H_ */
