/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterFreqRACHRepCellsList_H_
#define	_InterFreqRACHRepCellsList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/InterFreqCellID.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterFreqRACHRepCellsList */
typedef struct InterFreqRACHRepCellsList {
	A_SEQUENCE_OF(InterFreqCellID_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqRACHRepCellsList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqRACHRepCellsList;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqRACHRepCellsList_H_ */
