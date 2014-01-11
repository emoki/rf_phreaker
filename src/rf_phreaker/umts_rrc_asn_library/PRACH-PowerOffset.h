/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PRACH_PowerOffset_H_
#define	_PRACH_PowerOffset_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PowerRampStep.h"
#include "rf_phreaker/umts_rrc_asn_library/PreambleRetransMax.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-PowerOffset */
typedef struct PRACH_PowerOffset {
	PowerRampStep_t	 powerRampStep;
	PreambleRetransMax_t	 preambleRetransMax;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_PowerOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_PowerOffset;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_PowerOffset_H_ */
