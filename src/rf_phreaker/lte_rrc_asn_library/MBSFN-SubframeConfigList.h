/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MBSFN_SubframeConfigList_H_
#define	_MBSFN_SubframeConfigList_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFN_SubframeConfig;

/* MBSFN-SubframeConfigList */
typedef struct MBSFN_SubframeConfigList {
	A_SEQUENCE_OF(struct MBSFN_SubframeConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfigList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/MBSFN-SubframeConfig.h"

#endif	/* _MBSFN_SubframeConfigList_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
