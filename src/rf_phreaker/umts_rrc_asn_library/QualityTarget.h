/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_QualityTarget_H_
#define	_QualityTarget_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/BLER-QualityValue.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* QualityTarget */
typedef struct QualityTarget {
	BLER_QualityValue_t	 bler_QualityValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QualityTarget_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_QualityTarget;

#ifdef __cplusplus
}
#endif

#endif	/* _QualityTarget_H_ */
