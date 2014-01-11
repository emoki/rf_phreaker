/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasuredResults_H_
#define	_MeasuredResults_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqMeasuredResultsList.h"
#include "rf_phreaker/umts_rrc_asn_library/InterFreqMeasuredResultsList.h"
#include "rf_phreaker/umts_rrc_asn_library/InterRATMeasuredResultsList.h"
#include "rf_phreaker/umts_rrc_asn_library/TrafficVolumeMeasuredResultsList.h"
#include "rf_phreaker/umts_rrc_asn_library/QualityMeasuredResults.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-InternalMeasuredResults.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-MeasuredResults.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasuredResults_PR {
	MeasuredResults_PR_NOTHING,	/* No components present */
	MeasuredResults_PR_intraFreqMeasuredResultsList,
	MeasuredResults_PR_interFreqMeasuredResultsList,
	MeasuredResults_PR_interRATMeasuredResultsList,
	MeasuredResults_PR_trafficVolumeMeasuredResultsList,
	MeasuredResults_PR_qualityMeasuredResults,
	MeasuredResults_PR_ue_InternalMeasuredResults,
	MeasuredResults_PR_ue_positioning_MeasuredResults,
	MeasuredResults_PR_spare
} MeasuredResults_PR;

/* MeasuredResults */
typedef struct MeasuredResults {
	MeasuredResults_PR present;
	union MeasuredResults_u {
		IntraFreqMeasuredResultsList_t	 intraFreqMeasuredResultsList;
		InterFreqMeasuredResultsList_t	 interFreqMeasuredResultsList;
		InterRATMeasuredResultsList_t	 interRATMeasuredResultsList;
		TrafficVolumeMeasuredResultsList_t	 trafficVolumeMeasuredResultsList;
		QualityMeasuredResults_t	 qualityMeasuredResults;
		UE_InternalMeasuredResults_t	 ue_InternalMeasuredResults;
		UE_Positioning_MeasuredResults_t	 ue_positioning_MeasuredResults;
		NULL_t	 spare;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResults;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasuredResults_H_ */
