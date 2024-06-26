/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ActiveSetUpdate_v950ext_IEs_H_
#define	_ActiveSetUpdate_v950ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryCellMIMOparametersFDD_v950ext;
struct RL_AdditionInformationList_v950ext;

/* ActiveSetUpdate-v950ext-IEs */
typedef struct ActiveSetUpdate_v950ext_IEs {
	struct SecondaryCellMIMOparametersFDD_v950ext	*secondaryCellMimoParameters	/* OPTIONAL */;
	struct RL_AdditionInformationList_v950ext	*rl_AdditionInformationList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActiveSetUpdate_v950ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_v950ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryCellMIMOparametersFDD-v950ext.h"
#include "rf_phreaker/umts_rrc_asn_library/RL-AdditionInformationList-v950ext.h"

#endif	/* _ActiveSetUpdate_v950ext_IEs_H_ */
