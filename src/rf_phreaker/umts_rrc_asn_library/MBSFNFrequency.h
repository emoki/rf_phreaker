/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBSFNFrequency_H_
#define	_MBSFNFrequency_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/CellParametersID.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBSFNFrequency */
typedef struct MBSFNFrequency {
	FrequencyInfo_t	 frequencyInfo;
	CellParametersID_t	*cellParametersID	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNFrequency;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNFrequency_H_ */
