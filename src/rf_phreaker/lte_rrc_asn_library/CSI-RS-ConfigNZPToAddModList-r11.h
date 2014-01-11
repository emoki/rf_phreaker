/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSI_RS_ConfigNZPToAddModList_r11_H_
#define	_CSI_RS_ConfigNZPToAddModList_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_RS_ConfigNZP_r11;

/* CSI-RS-ConfigNZPToAddModList-r11 */
typedef struct CSI_RS_ConfigNZPToAddModList_r11 {
	A_SEQUENCE_OF(struct CSI_RS_ConfigNZP_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ConfigNZPToAddModList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigNZPToAddModList_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-ConfigNZP-r11.h"

#endif	/* _CSI_RS_ConfigNZPToAddModList_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
