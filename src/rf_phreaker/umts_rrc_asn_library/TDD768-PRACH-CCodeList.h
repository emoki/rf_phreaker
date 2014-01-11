/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TDD768_PRACH_CCodeList_H_
#define	_TDD768_PRACH_CCodeList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TDD768-PRACH-CCode32.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include "rf_phreaker/umts_rrc_asn_library/TDD768-PRACH-CCode16.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD768_PRACH_CCodeList_PR {
	TDD768_PRACH_CCodeList_PR_NOTHING,	/* No components present */
	TDD768_PRACH_CCodeList_PR_sf32,
	TDD768_PRACH_CCodeList_PR_sf16
} TDD768_PRACH_CCodeList_PR;

/* TDD768-PRACH-CCodeList */
typedef struct TDD768_PRACH_CCodeList {
	TDD768_PRACH_CCodeList_PR present;
	union TDD768_PRACH_CCodeList_u {
		struct TDD768_PRACH_CCodeList__sf32 {
			A_SEQUENCE_OF(TDD768_PRACH_CCode32_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} sf32;
		struct TDD768_PRACH_CCodeList__sf16 {
			A_SEQUENCE_OF(TDD768_PRACH_CCode16_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} sf16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD768_PRACH_CCodeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD768_PRACH_CCodeList;

#ifdef __cplusplus
}
#endif

#endif	/* _TDD768_PRACH_CCodeList_H_ */
