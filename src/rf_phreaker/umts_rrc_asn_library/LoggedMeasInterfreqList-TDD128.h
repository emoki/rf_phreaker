/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_LoggedMeasInterfreqList_TDD128_H_
#define	_LoggedMeasInterfreqList_TDD128_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LoggedMeasInterfreqInfo_TDD128;

/* LoggedMeasInterfreqList-TDD128 */
typedef struct LoggedMeasInterfreqList_TDD128 {
	A_SEQUENCE_OF(struct LoggedMeasInterfreqInfo_TDD128) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasInterfreqList_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasInterfreqList_TDD128;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasInterfreqInfo-TDD128.h"

#endif	/* _LoggedMeasInterfreqList_TDD128_H_ */
