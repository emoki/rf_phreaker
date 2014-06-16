/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FreqPriorityListUTRA_TDD_H_
#define	_FreqPriorityListUTRA_TDD_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityUTRA_TDD;

/* FreqPriorityListUTRA-TDD */
typedef struct FreqPriorityListUTRA_TDD {
	A_SEQUENCE_OF(struct FreqPriorityUTRA_TDD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityListUTRA_TDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityListUTRA_TDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/FreqPriorityUTRA-TDD.h"

#endif	/* _FreqPriorityListUTRA_TDD_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
