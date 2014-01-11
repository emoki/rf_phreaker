/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HS_SICH_List_TDD128_H_
#define	_HS_SICH_List_TDD128_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/HS-SICH-Configuration-TDD128-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_SICH_List_TDD128__Member_PR {
	HS_SICH_List_TDD128__Member_PR_NOTHING,	/* No components present */
	HS_SICH_List_TDD128__Member_PR_implicit,
	HS_SICH_List_TDD128__Member_PR_explicit
} HS_SICH_List_TDD128__Member_PR;

/* HS-SICH-List-TDD128 */
typedef struct HS_SICH_List_TDD128 {
	A_SEQUENCE_OF(struct HS_SICH_List_TDD128__Member {
		HS_SICH_List_TDD128__Member_PR present;
		union HS_SICH_List_TDD128__Member_u {
			struct implicit {
				long	 hS_SCCH_Index;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} implicit;
			struct explicit {
				HS_SICH_Configuration_TDD128_r6_t	 hS_SICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SICH_List_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_SICH_List_TDD128;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SICH_List_TDD128_H_ */
