/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellMeasuredResults_r9_H_
#define	_CellMeasuredResults_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/CPICH-Ec-N0.h"
#include "rf_phreaker/umts_rrc_asn_library/CPICH-RSCP.h"
#include "rf_phreaker/umts_rrc_asn_library/Pathloss.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/CellParametersID.h"
#include "rf_phreaker/umts_rrc_asn_library/TGSN.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-RSCP.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellMeasuredResults_r9__modeSpecificInfo_PR {
	CellMeasuredResults_r9__modeSpecificInfo_PR_NOTHING,	/* No components present */
	CellMeasuredResults_r9__modeSpecificInfo_PR_fdd,
	CellMeasuredResults_r9__modeSpecificInfo_PR_tdd
} CellMeasuredResults_r9__modeSpecificInfo_PR;

/* Forward declarations */
struct CellSynchronisationInfo;
struct DeltaRSCPPerCell;
struct TimeslotISCP_List;

/* CellMeasuredResults-r9 */
typedef struct CellMeasuredResults_r9 {
	CellIdentity_t	*cellIdentity	/* OPTIONAL */;
	struct CellSynchronisationInfo	*cellSynchronisationInfo	/* OPTIONAL */;
	struct CellMeasuredResults_r9__modeSpecificInfo {
		CellMeasuredResults_r9__modeSpecificInfo_PR present;
		union CellMeasuredResults_r9__modeSpecificInfo_u {
			struct CellMeasuredResults_r9__modeSpecificInfo__fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				CPICH_Ec_N0_t	*cpich_Ec_N0	/* OPTIONAL */;
				CPICH_RSCP_t	*cpich_RSCP	/* OPTIONAL */;
				struct DeltaRSCPPerCell	*deltaRSCPPerCell	/* OPTIONAL */;
				Pathloss_t	*pathloss	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct CellMeasuredResults_r9__modeSpecificInfo__tdd {
				CellParametersID_t	 cellParametersID;
				TGSN_t	*proposedTGSN	/* OPTIONAL */;
				PrimaryCCPCH_RSCP_t	*primaryCCPCH_RSCP	/* OPTIONAL */;
				Pathloss_t	*pathloss	/* OPTIONAL */;
				struct TimeslotISCP_List	*timeslotISCP_List	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellMeasuredResults_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellMeasuredResults_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CellSynchronisationInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/DeltaRSCPPerCell.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeslotISCP-List.h"

#endif	/* _CellMeasuredResults_r9_H_ */
