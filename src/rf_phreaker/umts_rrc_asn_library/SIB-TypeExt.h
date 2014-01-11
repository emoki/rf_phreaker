/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SIB_TypeExt_H_
#define	_SIB_TypeExt_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_TypeExt_PR {
	SIB_TypeExt_PR_NOTHING,	/* No components present */
	SIB_TypeExt_PR_systemInfoType11bis,
	SIB_TypeExt_PR_systemInfoType15bis,
	SIB_TypeExt_PR_systemInfoType15_1bis,
	SIB_TypeExt_PR_systemInfoType15_2bis,
	SIB_TypeExt_PR_systemInfoType15_3bis,
	SIB_TypeExt_PR_systemInfoType15_6,
	SIB_TypeExt_PR_systemInfoType15_7,
	SIB_TypeExt_PR_systemInfoType15_8
} SIB_TypeExt_PR;

/* SIB-TypeExt */
typedef struct SIB_TypeExt {
	SIB_TypeExt_PR present;
	union SIB_TypeExt_u {
		NULL_t	 systemInfoType11bis;
		NULL_t	 systemInfoType15bis;
		NULL_t	 systemInfoType15_1bis;
		NULL_t	 systemInfoType15_2bis;
		NULL_t	 systemInfoType15_3bis;
		NULL_t	 systemInfoType15_6;
		NULL_t	 systemInfoType15_7;
		NULL_t	 systemInfoType15_8;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_TypeExt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_TypeExt;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_TypeExt_H_ */
