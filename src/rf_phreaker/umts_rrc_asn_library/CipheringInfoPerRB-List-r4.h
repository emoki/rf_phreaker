/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CipheringInfoPerRB_List_r4_H_
#define	_CipheringInfoPerRB_List_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CipheringInfoPerRB_r4;

/* CipheringInfoPerRB-List-r4 */
typedef struct CipheringInfoPerRB_List_r4 {
	A_SEQUENCE_OF(struct CipheringInfoPerRB_r4) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CipheringInfoPerRB_List_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CipheringInfoPerRB_List_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CipheringInfoPerRB-r4.h"

#endif	/* _CipheringInfoPerRB_List_r4_H_ */
