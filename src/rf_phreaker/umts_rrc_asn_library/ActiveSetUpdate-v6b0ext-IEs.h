/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ActiveSetUpdate_v6b0ext_IEs_H_
#define	_ActiveSetUpdate_v6b0ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RL_AdditionInformation_list_v6b0ext;

/* ActiveSetUpdate-v6b0ext-IEs */
typedef struct ActiveSetUpdate_v6b0ext_IEs {
	struct RL_AdditionInformation_list_v6b0ext	*rl_AdditionInformation_list_v6b0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActiveSetUpdate_v6b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_v6b0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RL-AdditionInformation-list-v6b0ext.h"

#endif	/* _ActiveSetUpdate_v6b0ext_IEs_H_ */
