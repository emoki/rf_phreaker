/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType15bis_vaxyext_IEs_H_
#define	_SysInfoType15bis_vaxyext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-ReferenceTime-vaxyext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15bis-vaxyext-IEs */
typedef struct SysInfoType15bis_vaxyext_IEs {
	UE_Positioning_GANSS_ReferenceTime_vaxyext_t	 ue_positioning_GANSS_ReferenceTime;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15bis_vaxyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15bis_vaxyext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15bis_vaxyext_IEs_H_ */
