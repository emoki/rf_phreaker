/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_NeighCellsCRS_Info_r11_H_
#define	_NeighCellsCRS_Info_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include "rf_phreaker/lte_rrc_asn_library/CRS-AssistanceInfoList-r11.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellsCRS_Info_r11_PR {
	NeighCellsCRS_Info_r11_PR_NOTHING,	/* No components present */
	NeighCellsCRS_Info_r11_PR_release,
	NeighCellsCRS_Info_r11_PR_setup
} NeighCellsCRS_Info_r11_PR;

/* NeighCellsCRS-Info-r11 */
typedef struct NeighCellsCRS_Info_r11 {
	NeighCellsCRS_Info_r11_PR present;
	union NeighCellsCRS_Info_r11_u {
		NULL_t	 release;
		CRS_AssistanceInfoList_r11_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsCRS_Info_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsCRS_Info_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsCRS_Info_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
