/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_CounterSynchronisationInfo_H_
#define	_UL_CounterSynchronisationInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/STARTList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_WithPDCP_InfoList;

/* UL-CounterSynchronisationInfo */
typedef struct UL_CounterSynchronisationInfo {
	struct RB_WithPDCP_InfoList	*rB_WithPDCP_InfoList	/* OPTIONAL */;
	STARTList_t	 startList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CounterSynchronisationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CounterSynchronisationInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RB-WithPDCP-InfoList.h"

#endif	/* _UL_CounterSynchronisationInfo_H_ */
