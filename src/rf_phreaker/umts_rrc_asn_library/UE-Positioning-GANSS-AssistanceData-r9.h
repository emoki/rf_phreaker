/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GANSS_AssistanceData_r9_H_
#define	_UE_Positioning_GANSS_AssistanceData_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_ReferenceTime;
struct ReferenceLocationGANSS;
struct UE_Positioning_GANSS_IonosphericModel;
struct UE_Positioning_GANSS_AddIonoModel;
struct UE_Positioning_GANSS_EarthOrientPara;
struct GANSSGenericDataList_r9;

/* UE-Positioning-GANSS-AssistanceData-r9 */
typedef struct UE_Positioning_GANSS_AssistanceData_r9 {
	struct UE_Positioning_GANSS_ReferenceTime	*ue_positioning_GANSS_ReferenceTime	/* OPTIONAL */;
	struct ReferenceLocationGANSS	*uePositioningGanssReferencePosition	/* OPTIONAL */;
	struct UE_Positioning_GANSS_IonosphericModel	*uePositioningGanssIonosphericModel	/* OPTIONAL */;
	struct UE_Positioning_GANSS_AddIonoModel	*uePositioningGanssAddIonoModel	/* OPTIONAL */;
	struct UE_Positioning_GANSS_EarthOrientPara	*uePositioningGanssEarthOrientationPara	/* OPTIONAL */;
	struct GANSSGenericDataList_r9	*ganssGenericDataList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AssistanceData_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AssistanceData_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-ReferenceTime.h"
#include "rf_phreaker/umts_rrc_asn_library/ReferenceLocationGANSS.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-IonosphericModel.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-AddIonoModel.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-EarthOrientPara.h"
#include "rf_phreaker/umts_rrc_asn_library/GANSSGenericDataList-r9.h"

#endif	/* _UE_Positioning_GANSS_AssistanceData_r9_H_ */
