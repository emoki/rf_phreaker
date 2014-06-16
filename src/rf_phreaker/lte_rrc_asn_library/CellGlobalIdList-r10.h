/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellGlobalIdList_r10_H_
#define	_CellGlobalIdList_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellGlobalIdEUTRA;

/* CellGlobalIdList-r10 */
typedef struct CellGlobalIdList_r10 {
	A_SEQUENCE_OF(struct CellGlobalIdEUTRA) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellGlobalIdList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdList_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CellGlobalIdEUTRA.h"

#endif	/* _CellGlobalIdList_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
