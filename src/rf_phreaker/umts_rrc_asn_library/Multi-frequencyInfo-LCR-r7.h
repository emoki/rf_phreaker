/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Multi_frequencyInfo_LCR_r7_H_
#define	_Multi_frequencyInfo_LCR_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UpPCHposition-LCR.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfoTDD;

/* Multi-frequencyInfo-LCR-r7 */
typedef struct Multi_frequencyInfo_LCR_r7 {
	struct FrequencyInfoTDD	*secondFrequencyInfo	/* OPTIONAL */;
	struct FrequencyInfoTDD	*fPachFrequencyInfo	/* OPTIONAL */;
	UpPCHposition_LCR_t	*upPCHpositionInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Multi_frequencyInfo_LCR_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Multi_frequencyInfo_LCR_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfoTDD.h"

#endif	/* _Multi_frequencyInfo_LCR_r7_H_ */
