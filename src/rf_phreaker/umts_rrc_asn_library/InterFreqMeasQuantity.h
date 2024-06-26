/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterFreqMeasQuantity_H_
#define	_InterFreqMeasQuantity_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasQuantity.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/FilterCoefficient.h"
#include "rf_phreaker/umts_rrc_asn_library/FreqQualityEstimateQuantity-FDD.h"
#include "rf_phreaker/umts_rrc_asn_library/FreqQualityEstimateQuantity-TDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqMeasQuantity__reportingCriteria_PR {
	InterFreqMeasQuantity__reportingCriteria_PR_NOTHING,	/* No components present */
	InterFreqMeasQuantity__reportingCriteria_PR_intraFreqReportingCriteria,
	InterFreqMeasQuantity__reportingCriteria_PR_interFreqReportingCriteria
} InterFreqMeasQuantity__reportingCriteria_PR;
typedef enum InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR {
	InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR_NOTHING,	/* No components present */
	InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR_fdd,
	InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR_tdd
} InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR;

/* InterFreqMeasQuantity */
typedef struct InterFreqMeasQuantity {
	struct InterFreqMeasQuantity__reportingCriteria {
		InterFreqMeasQuantity__reportingCriteria_PR present;
		union InterFreqMeasQuantity__reportingCriteria_u {
			struct InterFreqMeasQuantity__reportingCriteria__intraFreqReportingCriteria {
				IntraFreqMeasQuantity_t	 intraFreqMeasQuantity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} intraFreqReportingCriteria;
			struct InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria {
				FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
				struct InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo {
					InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_PR present;
					union InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_u {
						struct InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo__fdd {
							FreqQualityEstimateQuantity_FDD_t	 freqQualityEstimateQuantity_FDD;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						struct InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo__tdd {
							FreqQualityEstimateQuantity_TDD_t	 freqQualityEstimateQuantity_TDD;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} modeSpecificInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} interFreqReportingCriteria;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportingCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqMeasQuantity;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqMeasQuantity_H_ */
