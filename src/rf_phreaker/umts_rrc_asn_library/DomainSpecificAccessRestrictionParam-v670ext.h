/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DomainSpecificAccessRestrictionParam_v670ext_H_
#define	_DomainSpecificAccessRestrictionParam_v670ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DomainSpecificAccessRestriction-v670ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DomainSpecificAccessRestrictionParam-v670ext */
typedef struct DomainSpecificAccessRestrictionParam_v670ext {
	DomainSpecificAccessRestriction_v670ext_t	 cSDomainSpecificAccessRestriction;
	DomainSpecificAccessRestriction_v670ext_t	 pSDomainSpecificAccessRestriction;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DomainSpecificAccessRestrictionParam_v670ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DomainSpecificAccessRestrictionParam_v670ext;

#ifdef __cplusplus
}
#endif

#endif	/* _DomainSpecificAccessRestrictionParam_v670ext_H_ */
