/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NewInterFreqCellList_r9_H_
#define	_NewInterFreqCellList_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewInterFreqCell_r9;

/* NewInterFreqCellList-r9 */
typedef struct NewInterFreqCellList_r9 {
	A_SEQUENCE_OF(struct NewInterFreqCell_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterFreqCellList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterFreqCellList_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/NewInterFreqCell-r9.h"

#endif	/* _NewInterFreqCellList_r9_H_ */
