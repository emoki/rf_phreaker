/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RRCConnectionSetup_r8_IEs_H_
#define	_RRCConnectionSetup_r8_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-StateIndicator.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-DRX-CycleLengthCoefficient-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList2-r8.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PredefinedConfigIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/DefaultConfigMode.h"
#include "rf_phreaker/umts_rrc_asn_library/DefaultConfigIdentity-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetup_r8_IEs__specificationMode_PR {
	RRCConnectionSetup_r8_IEs__specificationMode_PR_NOTHING,	/* No components present */
	RRCConnectionSetup_r8_IEs__specificationMode_PR_complete,
	RRCConnectionSetup_r8_IEs__specificationMode_PR_preconfiguration
} RRCConnectionSetup_r8_IEs__specificationMode_PR;
typedef enum RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR {
	RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR_NOTHING,	/* No components present */
	RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR_predefinedConfigIdentity,
	RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR_defaultConfig
} RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR;

/* Forward declarations */
struct CapabilityUpdateRequirement_r8;
struct DefaultConfigForCellFACH;
struct FrequencyInfo;
struct Multi_frequencyInfo_LCR_r7;
struct DTX_DRX_TimingInfo_r7;
struct DTX_DRX_Info_r7;
struct HS_SCCH_LessInfo_r7;
struct UL_DPCH_Info_r7;
struct UL_EDCH_Information_r8;
struct DL_HSPDSCH_Information_r8;
struct DL_CommonInformation_r8;
struct DL_InformationPerRL_List_r8;
struct DL_SecondaryCellInfoFDD;
struct SPS_Information_TDD128_r8;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList_r8;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r7;

/* RRCConnectionSetup-r8-IEs */
typedef struct RRCConnectionSetup_r8_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	U_RNTI_t	 new_U_RNTI;
	C_RNTI_t	*new_c_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_r7_t	 utran_DRX_CycleLengthCoeff;
	struct CapabilityUpdateRequirement_r8	*capabilityUpdateRequirement	/* OPTIONAL */;
	BOOLEAN_t	 supportForChangeOfUE_Capability;
	struct DefaultConfigForCellFACH	*defaultConfigForCellFACH	/* OPTIONAL */;
	struct RRCConnectionSetup_r8_IEs__specificationMode {
		RRCConnectionSetup_r8_IEs__specificationMode_PR present;
		union RRCConnectionSetup_r8_IEs__specificationMode_u {
			struct RRCConnectionSetup_r8_IEs__specificationMode__complete {
				SRB_InformationSetupList2_r8_t	 srb_InformationSetupList;
				struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
				struct UL_AddReconfTransChInfoList_r8	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
				struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
				struct DL_AddReconfTransChInfoList_r7	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} complete;
			struct RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration {
				struct RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode {
					RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_PR present;
					union RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode_u {
						PredefinedConfigIdentity_t	 predefinedConfigIdentity;
						struct RRCConnectionSetup_r8_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig {
							DefaultConfigMode_t	 defaultConfigMode;
							DefaultConfigIdentity_r6_t	 defaultConfigIdentity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} defaultConfig;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} preConfigMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} preconfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} specificationMode;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	struct Multi_frequencyInfo_LCR_r7	*multi_frequencyInfo	/* OPTIONAL */;
	struct DTX_DRX_TimingInfo_r7	*dtx_drx_TimingInfo	/* OPTIONAL */;
	struct DTX_DRX_Info_r7	*dtx_drx_Info	/* OPTIONAL */;
	struct HS_SCCH_LessInfo_r7	*hs_scch_LessInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_DPCH_Info_r7	*ul_DPCH_Info	/* OPTIONAL */;
	struct UL_EDCH_Information_r8	*ul_EDCH_Information	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r8	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r8	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r8	*dl_InformationPerRL_List	/* OPTIONAL */;
	struct DL_SecondaryCellInfoFDD	*dl_SecondaryCellInfoFDD	/* OPTIONAL */;
	struct SPS_Information_TDD128_r8	*sps_Information_TDD128	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CapabilityUpdateRequirement-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DefaultConfigForCellFACH.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/Multi-frequencyInfo-LCR-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-TimingInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-LessInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-EDCH-Information-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-SecondaryCellInfoFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/SPS-Information-TDD128-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r7.h"

#endif	/* _RRCConnectionSetup_r8_IEs_H_ */
