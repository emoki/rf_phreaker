/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SRNC_RelocationInfo_r9_IEs_H_
#define	_SRNC_RelocationInfo_r9_IEs_H_


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
#include "rf_phreaker/umts_rrc_asn_library/T-305.h"
#include "rf_phreaker/umts_rrc_asn_library/NAS-SystemInformationGSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRATCellInfoIndication.h"
#include "rf_phreaker/umts_rrc_asn_library/PredefinedConfigStatusList.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList-r8.h"
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
struct OngoingMeasRepList_r9;
struct RAB_InformationSetupList_r8;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r8;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r9;
struct TPC_CombinationInfoList;
struct E_RGCH_CombinationInfoList;
struct StoredCompressedModeInfo_r8;
struct TPC_CombinationInfoList_r9;
struct E_RGCH_CombinationInfoList_r9;
struct FailureCauseWithProtErr;
struct UE_HistoryInformation;
struct MBMS_JoinedInformation_r6;
struct MBMS_SelectedServiceInfo;

/* SRNC-RelocationInfo-r9-IEs */
typedef struct SRNC_RelocationInfo_r9_IEs {
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
	T_305_t	*srns_t_305	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	 cn_CommonGSM_MAP_NAS_SysInfo;
	struct CN_DomainInformationListFull	*cn_DomainInformationList	/* OPTIONAL */;
	struct OngoingMeasRepList_r9	*ongoingMeasRepList	/* OPTIONAL */;
	InterRATCellInfoIndication_t	*interRATCellInfoIndication	/* OPTIONAL */;
	PredefinedConfigStatusList_t	 predefinedConfigStatusList;
	SRB_InformationSetupList_r8_t	 srb_InformationList;
	struct RAB_InformationSetupList_r8	*rab_InformationList	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList_r8	*ul_TransChInfoList	/* OPTIONAL */;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r9	*dl_TransChInfoList	/* OPTIONAL */;
	struct TPC_CombinationInfoList	*tpc_CombinationInfoList	/* OPTIONAL */;
	struct E_RGCH_CombinationInfoList	*e_RGCH_CombinationInfoList	/* OPTIONAL */;
	struct StoredCompressedModeInfo_r8	*storedCompressedModeInfo	/* OPTIONAL */;
	struct TPC_CombinationInfoList_r9	*secondary_tpc_CombinationInfoList	/* OPTIONAL */;
	struct E_RGCH_CombinationInfoList_r9	*secondary_e_RGCH_CombinationInfoList	/* OPTIONAL */;
	BIT_STRING_t	*measurementReport	/* OPTIONAL */;
	struct FailureCauseWithProtErr	*failureCause	/* OPTIONAL */;
	struct UE_HistoryInformation	*ue_HistoryInformation	/* OPTIONAL */;
	struct MBMS_JoinedInformation_r6	*mbms_JoinedInformation	/* OPTIONAL */;
	struct MBMS_SelectedServiceInfo	*mbmsSelectedServiceInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r9_IEs;

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
#include "rf_phreaker/umts_rrc_asn_library/OngoingMeasRepList-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationSetupList-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/TPC-CombinationInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RGCH-CombinationInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/StoredCompressedModeInfo-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/TPC-CombinationInfoList-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RGCH-CombinationInfoList-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/FailureCauseWithProtErr.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-HistoryInformation.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-JoinedInformation-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-SelectedServiceInfo.h"

#endif	/* _SRNC_RelocationInfo_r9_IEs_H_ */
