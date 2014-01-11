/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GPS_AdditionalAssistanceDataRequest_H_
#define	_UE_Positioning_GPS_AdditionalAssistanceDataRequest_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_NavModelAddDataReq;

/* UE-Positioning-GPS-AdditionalAssistanceDataRequest */
typedef struct UE_Positioning_GPS_AdditionalAssistanceDataRequest {
	BOOLEAN_t	 almanacRequest;
	BOOLEAN_t	 utcModelRequest;
	BOOLEAN_t	 ionosphericModelRequest;
	BOOLEAN_t	 navigationModelRequest;
	BOOLEAN_t	 dgpsCorrectionsRequest;
	BOOLEAN_t	 referenceLocationRequest;
	BOOLEAN_t	 referenceTimeRequest;
	BOOLEAN_t	 aquisitionAssistanceRequest;
	BOOLEAN_t	 realTimeIntegrityRequest;
	struct UE_Positioning_GPS_NavModelAddDataReq	*navModelAddDataRequest	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_AdditionalAssistanceDataRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GPS-NavModelAddDataReq.h"

#endif	/* _UE_Positioning_GPS_AdditionalAssistanceDataRequest_H_ */
