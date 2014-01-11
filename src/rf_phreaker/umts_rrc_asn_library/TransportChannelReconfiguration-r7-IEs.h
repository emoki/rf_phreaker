/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TransportChannelReconfiguration_r7_IEs_H_
#define	_TransportChannelReconfiguration_r7_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/DelayRestrictionFlag.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/DSCH-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-StateIndicator.h"
#include "rf_phreaker/umts_rrc_asn_library/High-MobilityDetected.h"
#include "rf_phreaker/umts_rrc_asn_library/URA-Identity.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-PL-ServiceRestrictInfo-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransportChannelReconfiguration_r7_IEs__responseToChangeOfUE_Capability {
	TransportChannelReconfiguration_r7_IEs__responseToChangeOfUE_Capability_true	= 0
} e_TransportChannelReconfiguration_r7_IEs__responseToChangeOfUE_Capability;

/* Forward declarations */
struct IntegrityProtectionModeInfo_r7;
struct CipheringModeInfo_r7;
struct U_RNTI;
struct UTRAN_DRX_CycleLengthCoefficient_r7;
struct CN_InformationInfo_r6;
struct DL_CounterSynchronisationInfo_r5;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r7;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r7;
struct FrequencyInfo;
struct Multi_frequencyInfo_LCR_r7;
struct DTX_DRX_TimingInfo_r7;
struct DTX_DRX_Info_r7;
struct HS_SCCH_LessInfo_r7;
struct MIMO_Parameters_r7;
struct UL_DPCH_Info_r7;
struct UL_EDCH_Information_r7;
struct DL_HSPDSCH_Information_r7;
struct DL_CommonInformation_r7;
struct DL_InformationPerRL_List_r7;

/* TransportChannelReconfiguration-r7-IEs */
typedef struct TransportChannelReconfiguration_r7_IEs {
	struct IntegrityProtectionModeInfo_r7	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo_r7	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	DelayRestrictionFlag_t	*delayRestrictionFlag	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	High_MobilityDetected_t	*ueMobilityStateIndicator	/* OPTIONAL */;
	struct UTRAN_DRX_CycleLengthCoefficient_r7	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	BOOLEAN_t	*supportForChangeOfUE_Capability	/* OPTIONAL */;
	long	*responseToChangeOfUE_Capability	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList_r7	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r7	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct Multi_frequencyInfo_LCR_r7	*multi_frequencyInfo	/* OPTIONAL */;
	struct DTX_DRX_TimingInfo_r7	*dtx_drx_TimingInfo	/* OPTIONAL */;
	struct DTX_DRX_Info_r7	*dtx_drx_Info	/* OPTIONAL */;
	struct HS_SCCH_LessInfo_r7	*hs_scch_LessInfo	/* OPTIONAL */;
	struct MIMO_Parameters_r7	*mimoParameters	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r7	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r7	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r7	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r7	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r7	*dl_InformationPerRL_List	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportChannelReconfiguration_r7_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_responseToChangeOfUE_Capability_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TransportChannelReconfiguration_r7_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtectionModeInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringModeInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-DRX-CycleLengthCoefficient-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-InformationInfo-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CounterSynchronisationInfo-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/Multi-frequencyInfo-LCR-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-TimingInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-LessInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/MIMO-Parameters-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-EDCH-Information-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List-r7.h"

#endif	/* _TransportChannelReconfiguration_r7_IEs_H_ */
