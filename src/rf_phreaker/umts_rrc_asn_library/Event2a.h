/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Event2a_H_
#define	_Event2a_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/Threshold.h"
#include "rf_phreaker/umts_rrc_asn_library/W.h"
#include "rf_phreaker/umts_rrc_asn_library/HysteresisInterFreq.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeToTrigger.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;
struct NonUsedFreqParameterList;

/* Event2a */
typedef struct Event2a {
	Threshold_t	 dummy;
	W_t	 usedFreqW;
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	struct NonUsedFreqParameterList	*nonUsedFreqParameterList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2a_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2a;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ReportingCellStatus.h"
#include "rf_phreaker/umts_rrc_asn_library/NonUsedFreqParameterList.h"

#endif	/* _Event2a_H_ */
