/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MNC_H_
#define	_MNC_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/MCC-MNC-Digit.h"
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MNC */
typedef struct MNC {
	A_SEQUENCE_OF(MCC_MNC_Digit_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MNC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MNC;

#ifdef __cplusplus
}
#endif

#endif	/* _MNC_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
