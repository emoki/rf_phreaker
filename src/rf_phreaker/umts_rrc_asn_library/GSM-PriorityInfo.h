/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_GSM_PriorityInfo_H_
#define	_GSM_PriorityInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/GSM-CellGroup.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-PriorityInfo */
typedef struct GSM_PriorityInfo {
	GSM_CellGroup_t	 gsmCellGroup;
	long	 priority;
	long	 qRxLevMinGSM;
	long	 threshXhigh;
	long	 threshXlow;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_PriorityInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_PriorityInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_PriorityInfo_H_ */
