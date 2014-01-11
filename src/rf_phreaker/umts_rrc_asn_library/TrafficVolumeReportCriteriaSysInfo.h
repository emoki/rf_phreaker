/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TrafficVolumeReportCriteriaSysInfo_H_
#define	_TrafficVolumeReportCriteriaSysInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TrafficVolumeReportingCriteria.h"
#include "rf_phreaker/umts_rrc_asn_library/PeriodicalReportingCriteria.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficVolumeReportCriteriaSysInfo_PR {
	TrafficVolumeReportCriteriaSysInfo_PR_NOTHING,	/* No components present */
	TrafficVolumeReportCriteriaSysInfo_PR_trafficVolumeReportingCriteria,
	TrafficVolumeReportCriteriaSysInfo_PR_periodicalReportingCriteria
} TrafficVolumeReportCriteriaSysInfo_PR;

/* TrafficVolumeReportCriteriaSysInfo */
typedef struct TrafficVolumeReportCriteriaSysInfo {
	TrafficVolumeReportCriteriaSysInfo_PR present;
	union TrafficVolumeReportCriteriaSysInfo_u {
		TrafficVolumeReportingCriteria_t	 trafficVolumeReportingCriteria;
		PeriodicalReportingCriteria_t	 periodicalReportingCriteria;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficVolumeReportCriteriaSysInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficVolumeReportCriteriaSysInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficVolumeReportCriteriaSysInfo_H_ */
