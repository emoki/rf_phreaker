/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CodeRange_H_
#define	_CodeRange_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-CodeMapList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CodeRange */
typedef struct CodeRange {
	PDSCH_CodeMapList_t	 pdsch_CodeMapList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CodeRange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CodeRange;

#ifdef __cplusplus
}
#endif

#endif	/* _CodeRange_H_ */
