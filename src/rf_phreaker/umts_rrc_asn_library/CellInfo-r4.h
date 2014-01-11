/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellInfo_r4_H_
#define	_CellInfo_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellIndividualOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-Info-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-TX-Power.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellInfo_r4__modeSpecificInfo_PR {
	CellInfo_r4__modeSpecificInfo_PR_NOTHING,	/* No components present */
	CellInfo_r4__modeSpecificInfo_PR_fdd,
	CellInfo_r4__modeSpecificInfo_PR_tdd
} CellInfo_r4__modeSpecificInfo_PR;

/* Forward declarations */
struct ReferenceTimeDifferenceToCell;
struct PrimaryCPICH_Info;
struct TimeslotInfoList_r4;

/* CellInfo-r4 */
typedef struct CellInfo_r4 {
	CellIndividualOffset_t	 cellIndividualOffset	/* DEFAULT 0 */;
	struct ReferenceTimeDifferenceToCell	*referenceTimeDifferenceToCell	/* OPTIONAL */;
	struct CellInfo_r4__modeSpecificInfo {
		CellInfo_r4__modeSpecificInfo_PR present;
		union CellInfo_r4__modeSpecificInfo_u {
			struct CellInfo_r4__modeSpecificInfo__fdd {
				struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
				PrimaryCPICH_TX_Power_t	*primaryCPICH_TX_Power	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				BOOLEAN_t	 tx_DiversityIndicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct CellInfo_r4__modeSpecificInfo__tdd {
				PrimaryCCPCH_Info_r4_t	 primaryCCPCH_Info;
				PrimaryCCPCH_TX_Power_t	*primaryCCPCH_TX_Power	/* OPTIONAL */;
				struct TimeslotInfoList_r4	*timeslotInfoList	/* OPTIONAL */;
				BOOLEAN_t	 readSFN_Indicator;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellInfo_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ReferenceTimeDifferenceToCell.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeslotInfoList-r4.h"

#endif	/* _CellInfo_r4_H_ */
