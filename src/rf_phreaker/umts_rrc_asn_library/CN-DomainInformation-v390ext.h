/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CN_DomainInformation_v390ext_H_
#define	_CN_DomainInformation_v390ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CN-DRX-CycleLengthCoefficient.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CN-DomainInformation-v390ext */
typedef struct CN_DomainInformation_v390ext {
	CN_DRX_CycleLengthCoefficient_t	 cn_DRX_CycleLengthCoeff;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CN_DomainInformation_v390ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CN_DomainInformation_v390ext;

#ifdef __cplusplus
}
#endif

#endif	/* _CN_DomainInformation_v390ext_H_ */
