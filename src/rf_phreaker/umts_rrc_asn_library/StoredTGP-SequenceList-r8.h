/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_StoredTGP_SequenceList_r8_H_
#define	_StoredTGP_SequenceList_r8_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct StoredTGP_Sequence_r8;

/* StoredTGP-SequenceList-r8 */
typedef struct StoredTGP_SequenceList_r8 {
	A_SEQUENCE_OF(struct StoredTGP_Sequence_r8) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoredTGP_SequenceList_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoredTGP_SequenceList_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/StoredTGP-Sequence-r8.h"

#endif	/* _StoredTGP_SequenceList_r8_H_ */
