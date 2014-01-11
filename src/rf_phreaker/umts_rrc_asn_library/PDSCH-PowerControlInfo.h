/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PDSCH_PowerControlInfo_H_
#define	_PDSCH_PowerControlInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TPC-StepSizeTDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_CCTrChTPCList;

/* PDSCH-PowerControlInfo */
typedef struct PDSCH_PowerControlInfo {
	TPC_StepSizeTDD_t	*tpc_StepSizeTDD	/* OPTIONAL */;
	struct UL_CCTrChTPCList	*ul_CCTrChTPCList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_PowerControlInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_PowerControlInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UL-CCTrChTPCList.h"

#endif	/* _PDSCH_PowerControlInfo_H_ */
