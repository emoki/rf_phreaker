/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SIR_TimeslotList_H_
#define	_SIR_TimeslotList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SIR.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIR-TimeslotList */
typedef struct SIR_TimeslotList {
	A_SEQUENCE_OF(SIR_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIR_TimeslotList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIR_TimeslotList;

#ifdef __cplusplus
}
#endif

#endif	/* _SIR_TimeslotList_H_ */
