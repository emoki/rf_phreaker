/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SRNC_RelocationInfo_r6_IEs_H_
#define	_SRNC_RelocationInfo_r6_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RB-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/StateOfRRC.h"
#include "rf_phreaker/umts_rrc_asn_library/StateOfRRC-Procedure.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringStatusList-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtectionStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/ImplementationSpecificParams.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapability-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/UESpecificBehaviourInformation1idle.h"
#include "rf_phreaker/umts_rrc_asn_library/UESpecificBehaviourInformation1interRAT.h"
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include "rf_phreaker/umts_rrc_asn_library/URA-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/NAS-SystemInformationGSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRATCellInfoIndication.h"
#include "rf_phreaker/umts_rrc_asn_library/PredefinedConfigStatusList.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CalculationTimeForCiphering;
struct COUNT_C_List;
struct CipheringInfoPerRB_List_r4;
struct SRB_SpecificIntegrityProtInfoList;
struct UE_RadioAccessCapabBandFDDList;
struct UE_Positioning_LastKnownPos;
struct InterRAT_UE_RadioAccessCapabilityList_r5;
struct CN_DomainInformationListFull;
struct OngoingMeasRepList_r6;
struct RAB_InformationSetupList_r6;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r6;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r5;
struct TPC_CombinationInfoList;
struct StoredCompressedModeInfo;
struct FailureCauseWithProtErr;
struct MBMS_JoinedInformation_r6;

/* SRNC-RelocationInfo-r6-IEs */
typedef struct SRNC_RelocationInfo_r6_IEs {
	RB_Identity_t	*rb_IdentityForHOMessage	/* OPTIONAL */;
	StateOfRRC_t	 stateOfRRC;
	StateOfRRC_Procedure_t	 stateOfRRC_Procedure;
	CipheringStatusList_r4_t	 cipheringStatusList;
	CN_DomainIdentity_t	 latestConfiguredCN_Domain;
	struct CalculationTimeForCiphering	*calculationTimeForCiphering	/* OPTIONAL */;
	struct COUNT_C_List	*count_C_List	/* OPTIONAL */;
	struct CipheringInfoPerRB_List_r4	*cipheringInfoPerRB_List	/* OPTIONAL */;
	IntegrityProtectionStatus_t	 integrityProtectionStatus;
	struct SRB_SpecificIntegrityProtInfoList	*srb_SpecificIntegrityProtInfo	/* OPTIONAL */;
	ImplementationSpecificParams_t	*implementationSpecificParams	/* OPTIONAL */;
	U_RNTI_t	 u_RNTI;
	C_RNTI_t	*c_RNTI	/* OPTIONAL */;
	UE_RadioAccessCapability_r6_t	 ue_RadioAccessCapability;
	struct UE_RadioAccessCapabBandFDDList	*ue_RadioAccessCapability_ext	/* OPTIONAL */;
	struct UE_Positioning_LastKnownPos	*ue_Positioning_LastKnownPos	/* OPTIONAL */;
	UESpecificBehaviourInformation1idle_t	*uESpecificBehaviourInformation1idle	/* OPTIONAL */;
	UESpecificBehaviourInformation1interRAT_t	*uESpecificBehaviourInformation1interRAT	/* OPTIONAL */;
	BIT_STRING_t	*ueCapabilityContainer	/* OPTIONAL */;
	BIT_STRING_t	*ueCapabilityContainer_RSC	/* OPTIONAL */;
	BIT_STRING_t	*ueCapabilityContainer_UCI	/* OPTIONAL */;
	struct InterRAT_UE_RadioAccessCapabilityList_r5	*ue_RATSpecificCapability	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	 cn_CommonGSM_MAP_NAS_SysInfo;
	struct CN_DomainInformationListFull	*cn_DomainInformationList	/* OPTIONAL */;
	struct OngoingMeasRepList_r6	*ongoingMeasRepList	/* OPTIONAL */;
	InterRATCellInfoIndication_t	*interRATCellInfoIndication	/* OPTIONAL */;
	PredefinedConfigStatusList_t	 predefinedConfigStatusList;
	SRB_InformationSetupList_r6_t	 srb_InformationList;
	struct RAB_InformationSetupList_r6	*rab_InformationList	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList_r6	*ul_TransChInfoList	/* OPTIONAL */;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r5	*dl_TransChInfoList	/* OPTIONAL */;
	struct TPC_CombinationInfoList	*tpc_CombinationInfoList	/* OPTIONAL */;
	struct StoredCompressedModeInfo	*storedCompressedModeInfo	/* OPTIONAL */;
	BIT_STRING_t	*measurementReport	/* OPTIONAL */;
	struct FailureCauseWithProtErr	*failureCause	/* OPTIONAL */;
	struct MBMS_JoinedInformation_r6	*mbms_JoinedInformation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CalculationTimeForCiphering.h"
#include "rf_phreaker/umts_rrc_asn_library/COUNT-C-List.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringInfoPerRB-List-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-SpecificIntegrityProtInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabBandFDDList.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-LastKnownPos.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRAT-UE-RadioAccessCapabilityList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainInformationListFull.h"
#include "rf_phreaker/umts_rrc_asn_library/OngoingMeasRepList-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationSetupList-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/TPC-CombinationInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/StoredCompressedModeInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/FailureCauseWithProtErr.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-JoinedInformation-r6.h"

#endif	/* _SRNC_RelocationInfo_r6_IEs_H_ */
