/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasuredResultsOnSecUlFreq_H_
#define	_MeasuredResultsOnSecUlFreq_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFrequencyMeasuredResultsListOnSecULFreq.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasuredResultsOnSecUlFreq */
typedef struct MeasuredResultsOnSecUlFreq {
	IntraFrequencyMeasuredResultsListOnSecULFreq_t	 intraFreqMeasuredResultsList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResultsOnSecUlFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResultsOnSecUlFreq;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasuredResultsOnSecUlFreq_H_ */
