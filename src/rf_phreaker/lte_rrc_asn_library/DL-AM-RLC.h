/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DL_AM_RLC_H_
#define	_DL_AM_RLC_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/T-Reordering.h"
#include "rf_phreaker/lte_rrc_asn_library/T-StatusProhibit.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-AM-RLC */
typedef struct DL_AM_RLC {
	T_Reordering_t	 t_Reordering;
	T_StatusProhibit_t	 t_StatusProhibit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
