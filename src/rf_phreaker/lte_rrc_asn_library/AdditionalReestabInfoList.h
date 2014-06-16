/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_AdditionalReestabInfoList_H_
#define	_AdditionalReestabInfoList_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalReestabInfo;

/* AdditionalReestabInfoList */
typedef struct AdditionalReestabInfoList {
	A_SEQUENCE_OF(struct AdditionalReestabInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalReestabInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalReestabInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/AdditionalReestabInfo.h"

#endif	/* _AdditionalReestabInfoList_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
