/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UL_UM_RLC_H_
#define	_UL_UM_RLC_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/SN-FieldLength.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UL-UM-RLC */
typedef struct UL_UM_RLC {
	SN_FieldLength_t	 sn_FieldLength;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_UM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_UM_RLC;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_UM_RLC_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
