/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ExtSIBTypeInfoSchedulingInfo_H_
#define	_ExtSIBTypeInfoSchedulingInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SIB-TypeExt.h"
#include "rf_phreaker/umts_rrc_asn_library/SchedulingInformation.h"
#include "rf_phreaker/umts_rrc_asn_library/ValueTagInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExtSIBTypeInfoSchedulingInfo */
typedef struct ExtSIBTypeInfoSchedulingInfo {
	SIB_TypeExt_t	 extensionSIB_Type;
	SchedulingInformation_t	 schedulingInfo;
	ValueTagInfo_t	 valueTagInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExtSIBTypeInfoSchedulingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtSIBTypeInfoSchedulingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtSIBTypeInfoSchedulingInfo_H_ */
