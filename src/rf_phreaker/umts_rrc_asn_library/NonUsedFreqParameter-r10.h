/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NonUsedFreqParameter_r10_H_
#define	_NonUsedFreqParameter_r10_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/Threshold-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/W.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NonUsedFreqParameter_r10__nonUsedFreqTriggeringConditionDetectedCells {
	NonUsedFreqParameter_r10__nonUsedFreqTriggeringConditionDetectedCells_true	= 0
} e_NonUsedFreqParameter_r10__nonUsedFreqTriggeringConditionDetectedCells;

/* NonUsedFreqParameter-r10 */
typedef struct NonUsedFreqParameter_r10 {
	Threshold_r6_t	 nonUsedFreqThreshold;
	W_t	 nonUsedFreqW;
	long	 nonUsedFreqTriggeringConditionDetectedCells;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonUsedFreqParameter_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nonUsedFreqTriggeringConditionDetectedCells_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NonUsedFreqParameter_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _NonUsedFreqParameter_r10_H_ */
