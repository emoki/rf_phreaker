/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PowerOffsetInfoShort_H_
#define	_PowerOffsetInfoShort_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TFC-Value.h"
#include "rf_phreaker/umts_rrc_asn_library/GainFactor.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PowerOffsetInfoShort__modeSpecificInfo_PR {
	PowerOffsetInfoShort__modeSpecificInfo_PR_NOTHING,	/* No components present */
	PowerOffsetInfoShort__modeSpecificInfo_PR_fdd,
	PowerOffsetInfoShort__modeSpecificInfo_PR_tdd
} PowerOffsetInfoShort__modeSpecificInfo_PR;

/* PowerOffsetInfoShort */
typedef struct PowerOffsetInfoShort {
	TFC_Value_t	 referenceTFC;
	struct PowerOffsetInfoShort__modeSpecificInfo {
		PowerOffsetInfoShort__modeSpecificInfo_PR present;
		union PowerOffsetInfoShort__modeSpecificInfo_u {
			struct PowerOffsetInfoShort__modeSpecificInfo__fdd {
				GainFactor_t	 gainFactorBetaC;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	GainFactor_t	 gainFactorBetaD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PowerOffsetInfoShort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PowerOffsetInfoShort;

#ifdef __cplusplus
}
#endif

#endif	/* _PowerOffsetInfoShort_H_ */
