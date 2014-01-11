/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Event2f_r6_H_
#define	_Event2f_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/Threshold-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/W.h"
#include "rf_phreaker/umts_rrc_asn_library/HysteresisInterFreq.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeToTrigger.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportingCellStatus;

/* Event2f-r6 */
typedef struct Event2f_r6 {
	Threshold_r6_t	 usedFreqThreshold;
	W_t	 usedFreqW;
	HysteresisInterFreq_t	 hysteresis;
	TimeToTrigger_t	 timeToTrigger;
	struct ReportingCellStatus	*reportingCellStatus	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Event2f_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event2f_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ReportingCellStatus.h"

#endif	/* _Event2f_r6_H_ */
