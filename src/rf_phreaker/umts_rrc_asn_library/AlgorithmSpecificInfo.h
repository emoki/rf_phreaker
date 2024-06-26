/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_AlgorithmSpecificInfo_H_
#define	_AlgorithmSpecificInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RFC2507-Info.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AlgorithmSpecificInfo_PR {
	AlgorithmSpecificInfo_PR_NOTHING,	/* No components present */
	AlgorithmSpecificInfo_PR_rfc2507_Info
} AlgorithmSpecificInfo_PR;

/* AlgorithmSpecificInfo */
typedef struct AlgorithmSpecificInfo {
	AlgorithmSpecificInfo_PR present;
	union AlgorithmSpecificInfo_u {
		RFC2507_Info_t	 rfc2507_Info;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlgorithmSpecificInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlgorithmSpecificInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _AlgorithmSpecificInfo_H_ */
