/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Event2c_r10_H_
#define	_Event2c_r10_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/HysteresisInterFreq.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeToTrigger.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus_r10;
struct NonUsedFreqParameterList_r10;

/* Event2c-r10 */
typedef struct Event2c_r10 {
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus_r10	*reportingCellStatus	/* OPTIONAL */;
	struct NonUsedFreqParameterList_r10	*nonUsedFreqParameterList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2c_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2c_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ReportingCellStatus-r10.h"
#include "rf_phreaker/umts_rrc_asn_library/NonUsedFreqParameterList-r10.h"

#endif	/* _Event2c_r10_H_ */
