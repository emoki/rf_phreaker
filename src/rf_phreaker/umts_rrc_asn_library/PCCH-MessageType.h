/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PCCH_MessageType_H_
#define	_PCCH_MessageType_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PagingType1.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCCH_MessageType_PR {
	PCCH_MessageType_PR_NOTHING,	/* No components present */
	PCCH_MessageType_PR_pagingType1,
	PCCH_MessageType_PR_spare
} PCCH_MessageType_PR;

/* PCCH-MessageType */
typedef struct PCCH_MessageType {
	PCCH_MessageType_PR present;
	union PCCH_MessageType_u {
		PagingType1_t	 pagingType1;
		NULL_t	 spare;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_MessageType_H_ */
