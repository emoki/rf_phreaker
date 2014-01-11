/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GANSS_Data_H_
#define	_UE_Positioning_GANSS_Data_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_CipherParameters;
struct GANSSDecipheringKeys;
struct UE_Positioning_GANSS_ReferenceTime;
struct ReferenceLocationGANSS;
struct UE_Positioning_GANSS_IonosphericModel;
struct GANSSGenericDataList;

/* UE-Positioning-GANSS-Data */
typedef struct UE_Positioning_GANSS_Data {
	struct UE_Positioning_CipherParameters	*ganssDataCipheringInfo	/* OPTIONAL */;
	struct GANSSDecipheringKeys	*ganssDecipheringKeys	/* OPTIONAL */;
	struct UE_Positioning_GANSS_ReferenceTime	*uePositioningGanssReferenceTime	/* OPTIONAL */;
	struct ReferenceLocationGANSS	*uePositioningGanssReferencePosition	/* OPTIONAL */;
	struct UE_Positioning_GANSS_IonosphericModel	*uePositioningGanssIonosphericModel	/* OPTIONAL */;
	struct GANSSGenericDataList	*ganssGenericDataList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_Data_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_Data;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-CipherParameters.h"
#include "rf_phreaker/umts_rrc_asn_library/GANSSDecipheringKeys.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-ReferenceTime.h"
#include "rf_phreaker/umts_rrc_asn_library/ReferenceLocationGANSS.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-IonosphericModel.h"
#include "rf_phreaker/umts_rrc_asn_library/GANSSGenericDataList.h"

#endif	/* _UE_Positioning_GANSS_Data_H_ */
