/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_DPCH_PowerControlInfo_r4_H_
#define	_UL_DPCH_PowerControlInfo_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DPCCH-PowerOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/PC-Preamble.h"
#include "rf_phreaker/umts_rrc_asn_library/SRB-delay.h"
#include "rf_phreaker/umts_rrc_asn_library/PowerControlAlgorithm.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/UL-TargetSIR.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/IndividualTS-InterferenceList.h"
#include "rf_phreaker/umts_rrc_asn_library/ConstantValue.h"
#include "rf_phreaker/umts_rrc_asn_library/TPC-StepSizeTDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DPCH_PowerControlInfo_r4_PR {
	UL_DPCH_PowerControlInfo_r4_PR_NOTHING,	/* No components present */
	UL_DPCH_PowerControlInfo_r4_PR_fdd,
	UL_DPCH_PowerControlInfo_r4_PR_tdd
} UL_DPCH_PowerControlInfo_r4_PR;
typedef enum UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR {
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR_NOTHING,	/* No components present */
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR_broadcast_UL_OL_PC_info,
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR_individuallySignalled
} UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR;
typedef enum UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR {
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR_NOTHING,	/* No components present */
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR_tdd384,
	UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR_tdd128
} UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR;

/* UL-DPCH-PowerControlInfo-r4 */
typedef struct UL_DPCH_PowerControlInfo_r4 {
	UL_DPCH_PowerControlInfo_r4_PR present;
	union UL_DPCH_PowerControlInfo_r4_u {
		struct UL_DPCH_PowerControlInfo_r4__fdd {
			DPCCH_PowerOffset_t	 dpcch_PowerOffset;
			PC_Preamble_t	 pc_Preamble;
			SRB_delay_t	 sRB_delay;
			PowerControlAlgorithm_t	 powerControlAlgorithm;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct UL_DPCH_PowerControlInfo_r4__tdd {
			UL_TargetSIR_t	*ul_TargetSIR	/* OPTIONAL */;
			struct UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling {
				UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_PR present;
				union UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling_u {
					NULL_t	 broadcast_UL_OL_PC_info;
					struct UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled {
						struct UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption {
							UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_PR present;
							union UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption_u {
								struct UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd384 {
									IndividualTS_InterferenceList_t	 individualTS_InterferenceList;
									ConstantValue_t	 dpch_ConstantValue;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd384;
								struct UL_DPCH_PowerControlInfo_r4__tdd__ul_OL_PC_Signalling__individuallySignalled__tddOption__tdd128 {
									TPC_StepSizeTDD_t	 tpc_StepSize;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} tdd128;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tddOption;
						PrimaryCCPCH_TX_Power_t	 primaryCCPCH_TX_Power;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} individuallySignalled;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ul_OL_PC_Signalling;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_PowerControlInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfo_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_DPCH_PowerControlInfo_r4_H_ */
