/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HS_SCCH_LessInfo_r7_H_
#define	_HS_SCCH_LessInfo_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-Less-NewOperation.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR {
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_NOTHING,	/* No components present */
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_continue,
	HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR_newOperation
} HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR;

/* HS-SCCH-LessInfo-r7 */
typedef struct HS_SCCH_LessInfo_r7 {
	struct HS_SCCH_LessInfo_r7__hs_scchLessOperation {
		HS_SCCH_LessInfo_r7__hs_scchLessOperation_PR present;
		union HS_SCCH_LessInfo_r7__hs_scchLessOperation_u {
			NULL_t	 Continue;
			HS_SCCH_Less_NewOperation_t	 newOperation;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} hs_scchLessOperation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SCCH_LessInfo_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SCCH_LessInfo_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SCCH_LessInfo_r7_H_ */
