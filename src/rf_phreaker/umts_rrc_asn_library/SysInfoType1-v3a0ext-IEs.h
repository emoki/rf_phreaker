/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType1_v3a0ext_IEs_H_
#define	_SysInfoType1_v3a0ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-ConnTimersAndConstants-v3a0ext.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-IdleTimersAndConstants-v3a0ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType1-v3a0ext-IEs */
typedef struct SysInfoType1_v3a0ext_IEs {
	UE_ConnTimersAndConstants_v3a0ext_t	 ue_ConnTimersAndConstants_v3a0ext;
	UE_IdleTimersAndConstants_v3a0ext_t	 ue_IdleTimersAndConstants_v3a0ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType1_v3a0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType1_v3a0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType1_v3a0ext_IEs_H_ */
