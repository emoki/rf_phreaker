/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType15_1_v920ext_IEs_H_
#define	_SysInfoType15_1_v920ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GPS-DGPS-Corrections-v920ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-1-v920ext-IEs */
typedef struct SysInfoType15_1_v920ext_IEs {
	UE_Positioning_GPS_DGPS_Corrections_v920ext_t	 ue_positioning_GPS_DGPS_Corrections;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_1_v920ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_1_v920ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_1_v920ext_IEs_H_ */
