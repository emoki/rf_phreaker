/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellUpdateConfirm_r5_IEs_H_
#define	_CellUpdateConfirm_r5_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/DSCH-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-StateIndicator.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-DRX-CycleLengthCoefficient.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/URA-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/CPCH-SetID.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR {
	CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR_NOTHING,	/* No components present */
	CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR_fdd,
	CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR_tdd
} CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR;
typedef enum CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR {
	CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR_NOTHING,	/* No components present */
	CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR_fdd,
	CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR_tdd
} CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo;
struct RB_InformationReleaseList;
struct RB_InformationReconfigList_r5;
struct RB_InformationAffectedList_r5;
struct DL_CounterSynchronisationInfo_r5;
struct UL_CommonTransChInfo_r4;
struct UL_DeletedTransChInfoList;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo_r4;
struct DL_DeletedTransChInfoList_r5;
struct DL_AddReconfTransChInfoList_r5;
struct FrequencyInfo;
struct UL_ChannelRequirement_r5;
struct DL_HSPDSCH_Information;
struct DL_CommonInformation_r5;
struct DL_InformationPerRL_List_r5;
struct DRAC_StaticInformationList;
struct DL_PDSCH_Information;

/* CellUpdateConfirm-r5-IEs */
typedef struct CellUpdateConfirm_r5_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	BOOLEAN_t	 rlc_Re_establishIndicatorRb2_3or4;
	BOOLEAN_t	 rlc_Re_establishIndicatorRb5orAbove;
	struct CN_InformationInfo	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct RB_InformationReleaseList	*rb_InformationReleaseList	/* OPTIONAL */;
	struct RB_InformationReconfigList_r5	*rb_InformationReconfigList	/* OPTIONAL */;
	struct RB_InformationAffectedList_r5	*rb_InformationAffectedList	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_DeletedTransChInfoList	*ul_deletedTransChInfoList	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo {
		CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_PR present;
		union CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo_u {
			struct CellUpdateConfirm_r5_IEs__modeSpecificTransChInfo__fdd {
				CPCH_SetID_t	*dummy	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificTransChInfo;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_DeletedTransChInfoList_r5	*dl_DeletedTransChInfoList	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement_r5	*ul_ChannelRequirement	/* OPTIONAL */;
	struct CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo {
		CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_PR present;
		union CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo_u {
			struct CellUpdateConfirm_r5_IEs__modeSpecificPhysChInfo__fdd {
				struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificPhysChInfo;
	struct DL_HSPDSCH_Information	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r5	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r5	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdateConfirm_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdateConfirm_r5_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtectionModeInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringModeInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-InformationInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-InformationReleaseList.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-InformationReconfigList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-InformationAffectedList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CounterSynchronisationInfo-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DeletedTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-DeletedTransChInfoList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-ChannelRequirement-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DRAC-StaticInformationList.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-PDSCH-Information.h"

#endif	/* _CellUpdateConfirm_r5_IEs_H_ */
