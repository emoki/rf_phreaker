/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TPC_Combination_Info_r9_H_
#define	_TPC_Combination_Info_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/TPC-CombinationIndex.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TPC-Combination-Info-r9 */
typedef struct TPC_Combination_Info_r9 {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	TPC_CombinationIndex_t	 tpc_CombinationIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TPC_Combination_Info_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TPC_Combination_Info_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _TPC_Combination_Info_r9_H_ */
