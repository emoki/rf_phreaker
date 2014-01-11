/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SRNC_RelocationInfo_r3_IEs_H_
#define	_SRNC_RelocationInfo_r3_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/StateOfRRC.h"
#include "rf_phreaker/umts_rrc_asn_library/StateOfRRC-Procedure.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtectionStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-SpecificIntegrityProtInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/ImplementationSpecificParams.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapability.h"
#include "rf_phreaker/umts_rrc_asn_library/URA-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/NAS-SystemInformationGSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/PredefinedConfigStatusList.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/CPCH-SetID.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR {
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_NOTHING,	/* No components present */
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_fdd,
	SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR_tdd
} SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR;

/* Forward declarations */
struct CalculationTimeForCiphering;
struct CipheringInfoPerRB_List;
struct COUNT_C_List;
struct UE_Positioning_LastKnownPos;
struct InterRAT_UE_RadioAccessCapabilityList;
struct CN_DomainInformationList;
struct OngoingMeasRepList;
struct RAB_InformationSetupList;
struct UL_CommonTransChInfo;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo;
struct DL_AddReconfTransChInfoList;
struct MeasurementReport;
struct DRAC_StaticInformationList;

/* SRNC-RelocationInfo-r3-IEs */
typedef struct SRNC_RelocationInfo_r3_IEs {
	StateOfRRC_t	 stateOfRRC;
	StateOfRRC_Procedure_t	 stateOfRRC_Procedure;
	CipheringStatus_t	 cipheringStatus;
	struct CalculationTimeForCiphering	*calculationTimeForCiphering	/* OPTIONAL */;
	struct CipheringInfoPerRB_List	*cipheringInfoPerRB_List	/* OPTIONAL */;
	struct COUNT_C_List	*count_C_List	/* OPTIONAL */;
	IntegrityProtectionStatus_t	 integrityProtectionStatus;
	SRB_SpecificIntegrityProtInfoList_t	 srb_SpecificIntegrityProtInfo;
	ImplementationSpecificParams_t	*implementationSpecificParams	/* OPTIONAL */;
	U_RNTI_t	 u_RNTI;
	C_RNTI_t	*c_RNTI	/* OPTIONAL */;
	UE_RadioAccessCapability_t	 ue_RadioAccessCapability;
	struct UE_Positioning_LastKnownPos	*ue_Positioning_LastKnownPos	/* OPTIONAL */;
	struct InterRAT_UE_RadioAccessCapabilityList	*ue_RATSpecificCapability	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	NAS_SystemInformationGSM_MAP_t	 cn_CommonGSM_MAP_NAS_SysInfo;
	struct CN_DomainInformationList	*cn_DomainInformationList	/* OPTIONAL */;
	struct OngoingMeasRepList	*ongoingMeasRepList	/* OPTIONAL */;
	PredefinedConfigStatusList_t	 predefinedConfigStatusList;
	SRB_InformationSetupList_t	 srb_InformationList;
	struct RAB_InformationSetupList	*rab_InformationList	/* OPTIONAL */;
	struct UL_CommonTransChInfo	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_TransChInfoList	/* OPTIONAL */;
	struct SRNC_RelocationInfo_r3_IEs__modeSpecificInfo {
		SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_PR present;
		union SRNC_RelocationInfo_r3_IEs__modeSpecificInfo_u {
			struct SRNC_RelocationInfo_r3_IEs__modeSpecificInfo__fdd {
				CPCH_SetID_t	*dummy	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct DL_CommonTransChInfo	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList	*dl_TransChInfoList	/* OPTIONAL */;
	struct MeasurementReport	*measurementReport	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CalculationTimeForCiphering.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringInfoPerRB-List.h"
#include "rf_phreaker/umts_rrc_asn_library/COUNT-C-List.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-LastKnownPos.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRAT-UE-RadioAccessCapabilityList.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainInformationList.h"
#include "rf_phreaker/umts_rrc_asn_library/OngoingMeasRepList.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationSetupList.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/MeasurementReport.h"
#include "rf_phreaker/umts_rrc_asn_library/DRAC-StaticInformationList.h"

#endif	/* _SRNC_RelocationInfo_r3_IEs_H_ */
