/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NewIntraFreqCell_LCR_v8a0ext_H_
#define	_NewIntraFreqCell_LCR_v8a0ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellInfo_LCR_r8_ext;

/* NewIntraFreqCell-LCR-v8a0ext */
typedef struct NewIntraFreqCell_LCR_v8a0ext {
	struct CellInfo_LCR_r8_ext	*cellInfo_LCR_r8	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCell_LCR_v8a0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCell_LCR_v8a0ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CellInfo-LCR-r8-ext.h"

#endif	/* _NewIntraFreqCell_LCR_v8a0ext_H_ */
