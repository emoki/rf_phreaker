/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ASCSetting_TDD_r7_H_
#define	_ASCSetting_TDD_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AccessServiceClass_TDD_r7;

/* ASCSetting-TDD-r7 */
typedef struct ASCSetting_TDD_r7 {
	struct AccessServiceClass_TDD_r7	*accessServiceClass_TDD	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASCSetting_TDD_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASCSetting_TDD_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/AccessServiceClass-TDD-r7.h"

#endif	/* _ASCSetting_TDD_r7_H_ */
