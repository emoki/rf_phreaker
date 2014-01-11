/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DeferredMeasurementControlReadingSupport_H_
#define	_DeferredMeasurementControlReadingSupport_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity-FDD-sib3.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity-TDD-sib3List.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR {
	DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR_NOTHING,	/* No components present */
	DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR_fdd,
	DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR_tdd
} DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR;

/* DeferredMeasurementControlReadingSupport */
typedef struct DeferredMeasurementControlReadingSupport {
	struct DeferredMeasurementControlReadingSupport__modeSpecificInfo {
		DeferredMeasurementControlReadingSupport__modeSpecificInfo_PR present;
		union DeferredMeasurementControlReadingSupport__modeSpecificInfo_u {
			struct DeferredMeasurementControlReadingSupport__modeSpecificInfo__fdd {
				IntraFreqMeasQuantity_FDD_sib3_t	 intraFreqMeasQuantity_FDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct DeferredMeasurementControlReadingSupport__modeSpecificInfo__tdd {
				IntraFreqMeasQuantity_TDD_sib3List_t	 intraFreqMeasQuantity_TDDList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeferredMeasurementControlReadingSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeferredMeasurementControlReadingSupport;

#ifdef __cplusplus
}
#endif

#endif	/* _DeferredMeasurementControlReadingSupport_H_ */
