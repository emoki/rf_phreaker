/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntraFreqMeasQuantity_TDD_sib3List_H_
#define	_IntraFreqMeasQuantity_TDD_sib3List_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqMeasQuantity_TDD_sib3List__Member {
	IntraFreqMeasQuantity_TDD_sib3List__Member_primaryCCPCH_RSCP	= 0,
	IntraFreqMeasQuantity_TDD_sib3List__Member_timeslotISCP	= 1
} e_IntraFreqMeasQuantity_TDD_sib3List__Member;

/* IntraFreqMeasQuantity-TDD-sib3List */
typedef struct IntraFreqMeasQuantity_TDD_sib3List {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqMeasQuantity_TDD_sib3List_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Member_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasQuantity_TDD_sib3List;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqMeasQuantity_TDD_sib3List_H_ */
