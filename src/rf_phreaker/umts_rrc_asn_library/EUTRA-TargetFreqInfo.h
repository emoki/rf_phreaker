/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EUTRA_TargetFreqInfo_H_
#define	_EUTRA_TargetFreqInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/EARFCN.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_BlacklistedCellPerFreqList;

/* EUTRA-TargetFreqInfo */
typedef struct EUTRA_TargetFreqInfo {
	EARFCN_t	 dlEUTRACarrierFreq;
	struct EUTRA_BlacklistedCellPerFreqList	*eutraBlacklistedCellPerFreqList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_TargetFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_TargetFreqInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/EUTRA-BlacklistedCellPerFreqList.h"

#endif	/* _EUTRA_TargetFreqInfo_H_ */
