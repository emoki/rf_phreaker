/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SRNC_RelocationInfo_v770ext_IEs_H_
#define	_SRNC_RelocationInfo_v770ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ThresholdSFN-GPS-TOW-us.h"
#include "rf_phreaker/umts_rrc_asn_library/T-305.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRNC-RelocationInfo-v770ext-IEs */
typedef struct SRNC_RelocationInfo_v770ext_IEs {
	ThresholdSFN_GPS_TOW_us_t	*thresholdSFN_GPS_TOW_us	/* OPTIONAL */;
	T_305_t	*srns_t_305	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_v770ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_v770ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SRNC_RelocationInfo_v770ext_IEs_H_ */
