/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntraFreqMeasQuantity_H_
#define	_IntraFreqMeasQuantity_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/FilterCoefficient.h"
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity-FDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity-TDDList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqMeasQuantity__modeSpecificInfo_PR {
	IntraFreqMeasQuantity__modeSpecificInfo_PR_NOTHING,	/* No components present */
	IntraFreqMeasQuantity__modeSpecificInfo_PR_fdd,
	IntraFreqMeasQuantity__modeSpecificInfo_PR_tdd
} IntraFreqMeasQuantity__modeSpecificInfo_PR;

/* IntraFreqMeasQuantity */
typedef struct IntraFreqMeasQuantity {
	FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
	struct IntraFreqMeasQuantity__modeSpecificInfo {
		IntraFreqMeasQuantity__modeSpecificInfo_PR present;
		union IntraFreqMeasQuantity__modeSpecificInfo_u {
			struct IntraFreqMeasQuantity__modeSpecificInfo__fdd {
				IntraFreqMeasQuantity_FDD_t	 intraFreqMeasQuantity_FDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct IntraFreqMeasQuantity__modeSpecificInfo__tdd {
				IntraFreqMeasQuantity_TDDList_t	 intraFreqMeasQuantity_TDDList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_H_ */
