/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RAB_InformationReconfigList_H_
#define	_RAB_InformationReconfigList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RAB_InformationReconfig;

/* RAB-InformationReconfigList */
typedef struct RAB_InformationReconfigList {
	A_SEQUENCE_OF(struct RAB_InformationReconfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationReconfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationReconfigList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationReconfig.h"

#endif	/* _RAB_InformationReconfigList_H_ */
