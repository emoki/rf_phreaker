/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GPS_ReferenceTime_v770ext_H_
#define	_UE_Positioning_GPS_ReferenceTime_v770ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GPS-ReferenceTimeUncertainty.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-GPS-ReferenceTime-v770ext */
typedef struct UE_Positioning_GPS_ReferenceTime_v770ext {
	UE_Positioning_GPS_ReferenceTimeUncertainty_t	*ue_Positioning_GPS_ReferenceTimeUncertainty	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GPS_ReferenceTime_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_ReferenceTime_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GPS_ReferenceTime_v770ext_H_ */
