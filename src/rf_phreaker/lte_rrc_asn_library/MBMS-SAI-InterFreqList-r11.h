/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MBMS_SAI_InterFreqList_r11_H_
#define	_MBMS_SAI_InterFreqList_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SAI_InterFreq_r11;

/* MBMS-SAI-InterFreqList-r11 */
typedef struct MBMS_SAI_InterFreqList_r11 {
	A_SEQUENCE_OF(struct MBMS_SAI_InterFreq_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SAI_InterFreqList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreqList_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/MBMS-SAI-InterFreq-r11.h"

#endif	/* _MBMS_SAI_InterFreqList_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
