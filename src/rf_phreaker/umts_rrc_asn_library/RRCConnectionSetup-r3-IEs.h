/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RRCConnectionSetup_r3_IEs_H_
#define	_RRCConnectionSetup_r3_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/InitialUE-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-StateIndicator.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-DRX-CycleLengthCoefficient.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList2.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CapabilityUpdateRequirement;
struct UL_CommonTransChInfo;
struct DL_CommonTransChInfo;
struct FrequencyInfo;
struct UL_ChannelRequirement;
struct DL_CommonInformation;
struct DL_InformationPerRL_List;

/* RRCConnectionSetup-r3-IEs */
typedef struct RRCConnectionSetup_r3_IEs {
	InitialUE_Identity_t	 initialUE_Identity;
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	U_RNTI_t	 new_U_RNTI;
	C_RNTI_t	*new_c_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	 utran_DRX_CycleLengthCoeff;
	struct CapabilityUpdateRequirement	*capabilityUpdateRequirement	/* OPTIONAL */;
	SRB_InformationSetupList2_t	 srb_InformationSetupList;
	struct UL_CommonTransChInfo	*ul_CommonTransChInfo	/* OPTIONAL */;
	UL_AddReconfTransChInfoList_t	 ul_AddReconfTransChInfoList;
	struct DL_CommonTransChInfo	*dl_CommonTransChInfo	/* OPTIONAL */;
	DL_AddReconfTransChInfoList_t	 dl_AddReconfTransChInfoList;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement	*ul_ChannelRequirement	/* OPTIONAL */;
	struct DL_CommonInformation	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CapabilityUpdateRequirement.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-ChannelRequirement.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List.h"

#endif	/* _RRCConnectionSetup_r3_IEs_H_ */
