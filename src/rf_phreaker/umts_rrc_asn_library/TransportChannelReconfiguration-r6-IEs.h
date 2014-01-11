/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TransportChannelReconfiguration_r6_IEs_H_
#define	_TransportChannelReconfiguration_r6_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/DelayRestrictionFlag.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/DSCH-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-StateIndicator.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-DRX-CycleLengthCoefficient.h"
#include "rf_phreaker/umts_rrc_asn_library/URA-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-PL-ServiceRestrictInfo-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo_r6;
struct DL_CounterSynchronisationInfo_r5;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r6;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r5;
struct FrequencyInfo;
struct UL_DPCH_Info_r6;
struct UL_EDCH_Information_r6;
struct DL_HSPDSCH_Information_r6;
struct DL_CommonInformation_r6;
struct DL_InformationPerRL_List_r6;

/* TransportChannelReconfiguration-r6-IEs */
typedef struct TransportChannelReconfiguration_r6_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	DelayRestrictionFlag_t	*delayRestrictionFlag	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList_r6	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r6	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r6	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r6	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r6	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r6	*dl_InformationPerRL_List	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportChannelReconfiguration_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportChannelReconfiguration_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtectionModeInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringModeInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-InformationInfo-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CounterSynchronisationInfo-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-Info-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-EDCH-Information-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List-r6.h"

#endif	/* _TransportChannelReconfiguration_r6_IEs_H_ */
