/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RB_COUNT_C_InformationList_H_
#define	_RB_COUNT_C_InformationList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_COUNT_C_Information;

/* RB-COUNT-C-InformationList */
typedef struct RB_COUNT_C_InformationList {
	A_SEQUENCE_OF(struct RB_COUNT_C_Information) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_COUNT_C_InformationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_COUNT_C_InformationList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RB-COUNT-C-Information.h"

#endif	/* _RB_COUNT_C_InformationList_H_ */
