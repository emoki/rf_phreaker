/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_AdditionalPRACH_TF_and_TFCS_CCCH_List_H_
#define	_AdditionalPRACH_TF_and_TFCS_CCCH_List_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalPRACH_TF_and_TFCS_CCCH;

/* AdditionalPRACH-TF-and-TFCS-CCCH-List */
typedef struct AdditionalPRACH_TF_and_TFCS_CCCH_List {
	A_SEQUENCE_OF(struct AdditionalPRACH_TF_and_TFCS_CCCH) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdditionalPRACH_TF_and_TFCS_CCCH_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdditionalPRACH_TF_and_TFCS_CCCH_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/AdditionalPRACH-TF-and-TFCS-CCCH.h"

#endif	/* _AdditionalPRACH_TF_and_TFCS_CCCH_List_H_ */
