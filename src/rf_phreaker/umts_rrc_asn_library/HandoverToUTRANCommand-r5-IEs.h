/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HandoverToUTRANCommand_r5_IEs_H_
#define	_HandoverToUTRANCommand_r5_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI-Short.h"
#include "rf_phreaker/umts_rrc_asn_library/CipheringAlgorithm.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-InformationSetupList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-AddReconfTransChInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonTransChInfo-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInfoList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-Info-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformation-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-List-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/umts_rrc_asn_library/PredefinedConfigIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/DefaultConfigMode.h"
#include "rf_phreaker/umts_rrc_asn_library/DefaultConfigIdentity-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-InfoPostFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-CommonInformationPost.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-ListPostFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfoFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-InfoPostTDD.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-PostTDD.h"
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfoTDD.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-DPCH-InfoPostTDD-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerRL-PostTDD-LCR-r4.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverToUTRANCommand_r5_IEs__specificationMode_PR {
	HandoverToUTRANCommand_r5_IEs__specificationMode_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_r5_IEs__specificationMode_PR_complete,
	HandoverToUTRANCommand_r5_IEs__specificationMode_PR_preconfiguration
} HandoverToUTRANCommand_r5_IEs__specificationMode_PR;
typedef enum HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR {
	HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR_fdd,
	HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR_tdd
} HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR;
typedef enum HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR {
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_predefinedConfigIdentity,
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_defaultConfig
} HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR;
typedef enum HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR {
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR_fdd,
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR_tdd
} HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR;
typedef enum HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR {
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR_NOTHING,	/* No components present */
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR_tdd384,
	HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR_tdd128
} HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR;

/* Forward declarations */
struct RAB_InformationSetupList_r5;
struct DL_PDSCH_Information;
struct CPCH_SetInfo;
struct RAB_Info_Post;

/* HandoverToUTRANCommand-r5-IEs */
typedef struct HandoverToUTRANCommand_r5_IEs {
	U_RNTI_Short_t	 new_U_RNTI;
	CipheringAlgorithm_t	*cipheringAlgorithm	/* OPTIONAL */;
	struct HandoverToUTRANCommand_r5_IEs__specificationMode {
		HandoverToUTRANCommand_r5_IEs__specificationMode_PR present;
		union HandoverToUTRANCommand_r5_IEs__specificationMode_u {
			struct HandoverToUTRANCommand_r5_IEs__specificationMode__complete {
				SRB_InformationSetupList_r5_t	 srb_InformationSetupList;
				struct RAB_InformationSetupList_r5	*rab_InformationSetupList	/* OPTIONAL */;
				UL_CommonTransChInfo_r4_t	 ul_CommonTransChInfo;
				UL_AddReconfTransChInfoList_t	 ul_AddReconfTransChInfoList;
				DL_CommonTransChInfo_r4_t	 dl_CommonTransChInfo;
				DL_AddReconfTransChInfoList_r5_t	 dl_AddReconfTransChInfoList;
				UL_DPCH_Info_r5_t	 ul_DPCH_Info;
				struct HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo {
					HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_PR present;
					union HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo_u {
						struct HandoverToUTRANCommand_r5_IEs__specificationMode__complete__modeSpecificInfo__fdd {
							struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
							struct CPCH_SetInfo	*dummy2	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						NULL_t	 tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} modeSpecificInfo;
				DL_CommonInformation_r4_t	 dl_CommonInformation;
				DL_InformationPerRL_List_r5_t	 dl_InformationPerRL_List;
				FrequencyInfo_t	 frequencyInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} complete;
			struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration {
				struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode {
					HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR present;
					union HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode_u {
						PredefinedConfigIdentity_t	 predefinedConfigIdentity;
						struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig {
							DefaultConfigMode_t	 defaultConfigMode;
							DefaultConfigIdentity_r5_t	 defaultConfigIdentity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} defaultConfig;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} preConfigMode;
				struct RAB_Info_Post	*rab_Info	/* OPTIONAL */;
				struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo {
					HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_PR present;
					union HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo_u {
						struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd {
							UL_DPCH_InfoPostFDD_t	 ul_DPCH_Info;
							DL_CommonInformationPost_t	 dl_CommonInformationPost;
							DL_InformationPerRL_ListPostFDD_t	 dl_InformationPerRL_List;
							FrequencyInfoFDD_t	 frequencyInfo;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd {
							HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_PR present;
							union HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd_u {
								struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384 {
									UL_DPCH_InfoPostTDD_t	 ul_DPCH_Info;
									DL_InformationPerRL_PostTDD_t	 dl_InformationPerRL;
									FrequencyInfoTDD_t	 frequencyInfo;
									PrimaryCCPCH_TX_Power_t	 primaryCCPCH_TX_Power;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd384;
								struct HandoverToUTRANCommand_r5_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128 {
									UL_DPCH_InfoPostTDD_LCR_r4_t	 ul_DPCH_Info;
									DL_InformationPerRL_PostTDD_LCR_r4_t	 dl_InformationPerRL;
									FrequencyInfoTDD_t	 frequencyInfo;
									PrimaryCCPCH_TX_Power_t	 primaryCCPCH_TX_Power;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd128;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} modeSpecificInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} preconfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} specificationMode;
	MaxAllowedUL_TX_Power_t	 maxAllowedUL_TX_Power;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverToUTRANCommand_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand_r5_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationSetupList-r5.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-PDSCH-Information.h"
#include "rf_phreaker/umts_rrc_asn_library/CPCH-SetInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-Info-Post.h"

#endif	/* _HandoverToUTRANCommand_r5_IEs_H_ */
