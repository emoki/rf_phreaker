/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_CurrentCell_SCCPCHList_r6_H_
#define	_MBMS_CurrentCell_SCCPCHList_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_CurrentCell_SCCPCH_r6;

/* MBMS-CurrentCell-SCCPCHList-r6 */
typedef struct MBMS_CurrentCell_SCCPCHList_r6 {
	A_SEQUENCE_OF(struct MBMS_CurrentCell_SCCPCH_r6) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_CurrentCell_SCCPCHList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_CurrentCell_SCCPCHList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/MBMS-CurrentCell-SCCPCH-r6.h"

#endif	/* _MBMS_CurrentCell_SCCPCHList_r6_H_ */
