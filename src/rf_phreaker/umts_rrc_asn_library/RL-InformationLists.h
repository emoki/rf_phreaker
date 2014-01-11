/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RL_InformationLists_H_
#define	_RL_InformationLists_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RL_AdditionInfoList;
struct RL_RemovalInformationList;

/* RL-InformationLists */
typedef struct RL_InformationLists {
	struct RL_AdditionInfoList	*rl_AdditionInfoList	/* OPTIONAL */;
	struct RL_RemovalInformationList	*rL_RemovalInformationList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RL_InformationLists_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RL_InformationLists;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RL-AdditionInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/RL-RemovalInformationList.h"

#endif	/* _RL_InformationLists_H_ */
