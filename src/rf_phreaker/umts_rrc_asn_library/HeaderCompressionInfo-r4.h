/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HeaderCompressionInfo_r4_H_
#define	_HeaderCompressionInfo_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/AlgorithmSpecificInfo-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HeaderCompressionInfo-r4 */
typedef struct HeaderCompressionInfo_r4 {
	AlgorithmSpecificInfo_r4_t	 algorithmSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HeaderCompressionInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HeaderCompressionInfo_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _HeaderCompressionInfo_r4_H_ */
