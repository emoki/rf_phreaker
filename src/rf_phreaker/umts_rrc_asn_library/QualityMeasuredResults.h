/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_QualityMeasuredResults_H_
#define	_QualityMeasuredResults_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QualityMeasuredResults__modeSpecificInfo_PR {
	QualityMeasuredResults__modeSpecificInfo_PR_NOTHING,	/* No components present */
	QualityMeasuredResults__modeSpecificInfo_PR_fdd,
	QualityMeasuredResults__modeSpecificInfo_PR_tdd
} QualityMeasuredResults__modeSpecificInfo_PR;

/* Forward declarations */
struct BLER_MeasurementResultsList;
struct SIR_MeasurementList;

/* QualityMeasuredResults */
typedef struct QualityMeasuredResults {
	struct BLER_MeasurementResultsList	*blerMeasurementResultsList	/* OPTIONAL */;
	struct QualityMeasuredResults__modeSpecificInfo {
		QualityMeasuredResults__modeSpecificInfo_PR present;
		union QualityMeasuredResults__modeSpecificInfo_u {
			NULL_t	 fdd;
			struct QualityMeasuredResults__modeSpecificInfo__tdd {
				struct SIR_MeasurementList	*sir_MeasurementResults	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QualityMeasuredResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QualityMeasuredResults;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/BLER-MeasurementResultsList.h"
#include "rf_phreaker/umts_rrc_asn_library/SIR-MeasurementList.h"

#endif	/* _QualityMeasuredResults_H_ */
