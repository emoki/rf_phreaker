/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RB_InformationAffected_r7_H_
#define	_RB_InformationAffected_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RB-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-MappingInfo-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RB-InformationAffected-r7 */
typedef struct RB_InformationAffected_r7 {
	RB_Identity_t	 rb_Identity;
	RB_MappingInfo_r7_t	 rb_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationAffected_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationAffected_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _RB_InformationAffected_r7_H_ */
