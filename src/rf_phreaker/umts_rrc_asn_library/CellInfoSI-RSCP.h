/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellInfoSI_RSCP_H_
#define	_CellInfoSI_RSCP_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellIndividualOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellInfoSI_RSCP__modeSpecificInfo_PR {
	CellInfoSI_RSCP__modeSpecificInfo_PR_NOTHING,	/* No components present */
	CellInfoSI_RSCP__modeSpecificInfo_PR_fdd,
	CellInfoSI_RSCP__modeSpecificInfo_PR_tdd
} CellInfoSI_RSCP__modeSpecificInfo_PR;

/* Forward declarations */
struct ReferenceTimeDifferenceToCell;
struct CellSelectReselectInfoSIB_11_12_RSCP;
struct PrimaryCPICH_Info;
struct TimeslotInfoList;

/* CellInfoSI-RSCP */
typedef struct CellInfoSI_RSCP {
	CellIndividualOffset_t	 cellIndividualOffset	/* DEFAULT 0 */;
	struct ReferenceTimeDifferenceToCell	*referenceTimeDifferenceToCell	/* OPTIONAL */;
	struct CellInfoSI_RSCP__modeSpecificInfo {
		CellInfoSI_RSCP__modeSpecificInfo_PR present;
		union CellInfoSI_RSCP__modeSpecificInfo_u {
			struct CellInfoSI_RSCP__modeSpecificInfo__fdd {
				struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
				PrimaryCPICH_TX_Power_t	*primaryCPICH_TX_Power	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				BOOLEAN_t	 tx_DiversityIndicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct CellInfoSI_RSCP__modeSpecificInfo__tdd {
				PrimaryCCPCH_Info_t	 primaryCCPCH_Info;
				PrimaryCCPCH_TX_Power_t	*primaryCCPCH_TX_Power	/* OPTIONAL */;
				struct TimeslotInfoList	*timeslotInfoList	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct CellSelectReselectInfoSIB_11_12_RSCP	*cellSelectionReselectionInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfoSI_RSCP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfoSI_RSCP;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ReferenceTimeDifferenceToCell.h"
#include "rf_phreaker/umts_rrc_asn_library/CellSelectReselectInfoSIB-11-12-RSCP.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeslotInfoList.h"

#endif	/* _CellInfoSI_RSCP_H_ */
