/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_DPCH_InfoCommon_H_
#define	_DL_DPCH_InfoCommon_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/Cfntargetsfnframeoffset.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/umts_rrc_asn_library/PowerOffsetPilot-pdpdch.h"
#include "rf_phreaker/umts_rrc_asn_library/SF512-AndPilot.h"
#include "rf_phreaker/umts_rrc_asn_library/PositionFixedOrFlexible.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DPCH_InfoCommon__cfnHandling_PR {
	DL_DPCH_InfoCommon__cfnHandling_PR_NOTHING,	/* No components present */
	DL_DPCH_InfoCommon__cfnHandling_PR_maintain,
	DL_DPCH_InfoCommon__cfnHandling_PR_initialise
} DL_DPCH_InfoCommon__cfnHandling_PR;
typedef enum DL_DPCH_InfoCommon__modeSpecificInfo_PR {
	DL_DPCH_InfoCommon__modeSpecificInfo_PR_NOTHING,	/* No components present */
	DL_DPCH_InfoCommon__modeSpecificInfo_PR_fdd,
	DL_DPCH_InfoCommon__modeSpecificInfo_PR_tdd
} DL_DPCH_InfoCommon__modeSpecificInfo_PR;

/* Forward declarations */
struct DL_DPCH_PowerControlInfo;
struct Dl_rate_matching_restriction;

/* DL-DPCH-InfoCommon */
typedef struct DL_DPCH_InfoCommon {
	struct DL_DPCH_InfoCommon__cfnHandling {
		DL_DPCH_InfoCommon__cfnHandling_PR present;
		union DL_DPCH_InfoCommon__cfnHandling_u {
			NULL_t	 maintain;
			struct DL_DPCH_InfoCommon__cfnHandling__initialise {
				Cfntargetsfnframeoffset_t	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} initialise;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cfnHandling;
	struct DL_DPCH_InfoCommon__modeSpecificInfo {
		DL_DPCH_InfoCommon__modeSpecificInfo_PR present;
		union DL_DPCH_InfoCommon__modeSpecificInfo_u {
			struct DL_DPCH_InfoCommon__modeSpecificInfo__fdd {
				struct DL_DPCH_PowerControlInfo	*dl_DPCH_PowerControlInfo	/* OPTIONAL */;
				PowerOffsetPilot_pdpdch_t	 powerOffsetPilot_pdpdch;
				struct Dl_rate_matching_restriction	*dl_rate_matching_restriction	/* OPTIONAL */;
				SF512_AndPilot_t	 spreadingFactorAndPilot;
				PositionFixedOrFlexible_t	 positionFixedOrFlexible;
				BOOLEAN_t	 tfci_Existence;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct DL_DPCH_InfoCommon__modeSpecificInfo__tdd {
				struct DL_DPCH_PowerControlInfo	*dl_DPCH_PowerControlInfo	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoCommon;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/DL-DPCH-PowerControlInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/Dl-rate-matching-restriction.h"

#endif	/* _DL_DPCH_InfoCommon_H_ */
