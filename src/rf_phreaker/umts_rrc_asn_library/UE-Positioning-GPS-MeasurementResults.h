/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GPS_MeasurementResults_H_
#define	_UE_Positioning_GPS_MeasurementResults_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/GPS-MeasurementParamList.h"
#include "rf_phreaker/umts_rrc_asn_library/UTRAN-GPSReferenceTimeResult.h"
#include "rf_phreaker/umts_rrc_asn_library/GPS-TOW-1msec.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_GPS_MeasurementResults__referenceTime_PR {
	UE_Positioning_GPS_MeasurementResults__referenceTime_PR_NOTHING,	/* No components present */
	UE_Positioning_GPS_MeasurementResults__referenceTime_PR_utran_GPSReferenceTimeResult,
	UE_Positioning_GPS_MeasurementResults__referenceTime_PR_gps_ReferenceTimeOnly
} UE_Positioning_GPS_MeasurementResults__referenceTime_PR;

/* UE-Positioning-GPS-MeasurementResults */
typedef struct UE_Positioning_GPS_MeasurementResults {
	struct UE_Positioning_GPS_MeasurementResults__referenceTime {
		UE_Positioning_GPS_MeasurementResults__referenceTime_PR present;
		union UE_Positioning_GPS_MeasurementResults__referenceTime_u {
			UTRAN_GPSReferenceTimeResult_t	 utran_GPSReferenceTimeResult;
			GPS_TOW_1msec_t	 gps_ReferenceTimeOnly;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceTime;
	GPS_MeasurementParamList_t	 gps_MeasurementParamList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_MeasurementResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_MeasurementResults;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GPS_MeasurementResults_H_ */
