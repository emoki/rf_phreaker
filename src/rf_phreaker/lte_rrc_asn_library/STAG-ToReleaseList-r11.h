/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_STAG_ToReleaseList_r11_H_
#define	_STAG_ToReleaseList_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/STAG-Id-r11.h"
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* STAG-ToReleaseList-r11 */
typedef struct STAG_ToReleaseList_r11 {
	A_SEQUENCE_OF(STAG_Id_r11_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} STAG_ToReleaseList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_STAG_ToReleaseList_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _STAG_ToReleaseList_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
