/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NewIntraFreqCellSI_List_ECN0_LCR_r4_H_
#define	_NewIntraFreqCellSI_List_ECN0_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewIntraFreqCellSI_ECN0_LCR_r4;

/* NewIntraFreqCellSI-List-ECN0-LCR-r4 */
typedef struct NewIntraFreqCellSI_List_ECN0_LCR_r4 {
	A_SEQUENCE_OF(struct NewIntraFreqCellSI_ECN0_LCR_r4) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellSI_List_ECN0_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellSI_List_ECN0_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-ECN0-LCR-r4.h"

#endif	/* _NewIntraFreqCellSI_List_ECN0_LCR_r4_H_ */
