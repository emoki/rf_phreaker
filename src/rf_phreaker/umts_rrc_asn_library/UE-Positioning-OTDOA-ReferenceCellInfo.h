/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_OTDOA_ReferenceCellInfo_H_
#define	_UE_Positioning_OTDOA_ReferenceCellInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/CellAndChannelIdentity.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR {
	UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR_fdd,
	UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR_tdd
} UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR;
typedef enum UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR {
	UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR_NOTHING,	/* No components present */
	UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR_ueBased,
	UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR_ueAssisted
} UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR;

/* Forward declarations */
struct FrequencyInfo;
struct UE_Positioning_IPDL_Parameters;

/* UE-Positioning-OTDOA-ReferenceCellInfo */
typedef struct UE_Positioning_OTDOA_ReferenceCellInfo {
	long	*sfn	/* OPTIONAL */;
	struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo {
		UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_PR present;
		union UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo_u {
			struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UE_Positioning_OTDOA_ReferenceCellInfo__modeSpecificInfo__tdd {
				CellAndChannelIdentity_t	 cellAndChannelIdentity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode {
		UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_PR present;
		union UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode_u {
			struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueBased {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueBased;
			struct UE_Positioning_OTDOA_ReferenceCellInfo__positioningMode__ueAssisted {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueAssisted;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} positioningMode;
	struct UE_Positioning_IPDL_Parameters	*ue_positioning_IPDL_Paremeters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_OTDOA_ReferenceCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-IPDL-Parameters.h"

#endif	/* _UE_Positioning_OTDOA_ReferenceCellInfo_H_ */
