/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_DPCH_PowerControlInfo_H_
#define	_DL_DPCH_PowerControlInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DPC-Mode.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/TPC-StepSizeTDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DPCH_PowerControlInfo__modeSpecificInfo_PR {
	DL_DPCH_PowerControlInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	DL_DPCH_PowerControlInfo__modeSpecificInfo_PR_fdd,
	DL_DPCH_PowerControlInfo__modeSpecificInfo_PR_tdd
} DL_DPCH_PowerControlInfo__modeSpecificInfo_PR;

/* DL-DPCH-PowerControlInfo */
typedef struct DL_DPCH_PowerControlInfo {
	struct DL_DPCH_PowerControlInfo__modeSpecificInfo {
		DL_DPCH_PowerControlInfo__modeSpecificInfo_PR present;
		union DL_DPCH_PowerControlInfo__modeSpecificInfo_u {
			struct DL_DPCH_PowerControlInfo__modeSpecificInfo__fdd {
				DPC_Mode_t	 dpc_Mode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct DL_DPCH_PowerControlInfo__modeSpecificInfo__tdd {
				TPC_StepSizeTDD_t	*tpc_StepSizeTDD	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_PowerControlInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_PowerControlInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DPCH_PowerControlInfo_H_ */
