/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PRACH_Information_LCR_List_H_
#define	_PRACH_Information_LCR_List_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PRACH_Information_LCR;

/* PRACH-Information-LCR-List */
typedef struct PRACH_Information_LCR_List {
	A_SEQUENCE_OF(struct PRACH_Information_LCR) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Information_LCR_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Information_LCR_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PRACH-Information-LCR.h"

#endif	/* _PRACH_Information_LCR_List_H_ */
