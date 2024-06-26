/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterFreqRACHReportingInfo_H_
#define	_InterFreqRACHReportingInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/Threshold.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxReportedCellsOnRACHinterFreq.h"
#include "rf_phreaker/umts_rrc_asn_library/InterFreqRepQuantityRACH-FDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/InterFreqRepQuantityRACH-TDDList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqRACHReportingInfo__modeSpecificInfo_PR {
	InterFreqRACHReportingInfo__modeSpecificInfo_PR_NOTHING,	/* No components present */
	InterFreqRACHReportingInfo__modeSpecificInfo_PR_fdd,
	InterFreqRACHReportingInfo__modeSpecificInfo_PR_tdd
} InterFreqRACHReportingInfo__modeSpecificInfo_PR;

/* InterFreqRACHReportingInfo */
typedef struct InterFreqRACHReportingInfo {
	struct InterFreqRACHReportingInfo__modeSpecificInfo {
		InterFreqRACHReportingInfo__modeSpecificInfo_PR present;
		union InterFreqRACHReportingInfo__modeSpecificInfo_u {
			struct InterFreqRACHReportingInfo__modeSpecificInfo__fdd {
				InterFreqRepQuantityRACH_FDD_t	 interFreqRepQuantityRACH_FDD;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct InterFreqRACHReportingInfo__modeSpecificInfo__tdd {
				InterFreqRepQuantityRACH_TDDList_t	 interFreqRepQuantityRACH_TDDList;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	Threshold_t	 interFreqRACHReportingThreshold;
	MaxReportedCellsOnRACHinterFreq_t	 maxReportedCellsOnRACHinterFreq;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqRACHReportingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqRACHReportingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqRACHReportingInfo_H_ */
