/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_SHCCH_Message_H_
#define	_UL_SHCCH_Message_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UL-SHCCH-MessageType.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-SHCCH-Message */
typedef struct UL_SHCCH_Message {
	UL_SHCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_SHCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_SHCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_SHCCH_Message_H_ */
