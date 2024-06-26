/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DomainSpecificAccessRestrictionForSharedNetwork_v670ext_H_
#define	_DomainSpecificAccessRestrictionForSharedNetwork_v670ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DomainSpecificAccessRestrictionList-v670ext.h"
#include "rf_phreaker/umts_rrc_asn_library/DomainSpecificAccessRestrictionParam-v670ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR {
	DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR_NOTHING,	/* No components present */
	DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR_domainSpecificAccessRestictionList,
	DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR_domainSpecificAccessRestictionParametersForAll
} DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR;

/* DomainSpecificAccessRestrictionForSharedNetwork-v670ext */
typedef struct DomainSpecificAccessRestrictionForSharedNetwork_v670ext {
	DomainSpecificAccessRestrictionForSharedNetwork_v670ext_PR present;
	union DomainSpecificAccessRestrictionForSharedNetwork_v670ext_u {
		DomainSpecificAccessRestrictionList_v670ext_t	 domainSpecificAccessRestictionList;
		DomainSpecificAccessRestrictionParam_v670ext_t	 domainSpecificAccessRestictionParametersForAll;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DomainSpecificAccessRestrictionForSharedNetwork_v670ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DomainSpecificAccessRestrictionForSharedNetwork_v670ext;

#ifdef __cplusplus
}
#endif

#endif	/* _DomainSpecificAccessRestrictionForSharedNetwork_v670ext_H_ */
