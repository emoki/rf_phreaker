/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CellSelectionInfo_v1130_H_
#define	_CellSelectionInfo_v1130_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/Q-QualMin-r9.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellSelectionInfo-v1130 */
typedef struct CellSelectionInfo_v1130 {
	Q_QualMin_r9_t	 q_QualMinWB_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellSelectionInfo_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellSelectionInfo_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _CellSelectionInfo_v1130_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
