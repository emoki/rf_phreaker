/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RFC3095_ContextInfo_r5_H_
#define	_RFC3095_ContextInfo_r5_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RFC3095-ContextInfoList-r5.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RFC3095_ContextInfo_r5_PR {
	RFC3095_ContextInfo_r5_PR_NOTHING,	/* No components present */
	RFC3095_ContextInfo_r5_PR_r5,
	RFC3095_ContextInfo_r5_PR_criticalExtensions
} RFC3095_ContextInfo_r5_PR;

/* RFC3095-ContextInfo-r5 */
typedef struct RFC3095_ContextInfo_r5 {
	RFC3095_ContextInfo_r5_PR present;
	union RFC3095_ContextInfo_r5_u {
		struct RFC3095_ContextInfo_r5__r5 {
			RFC3095_ContextInfoList_r5_t	 rFC3095_ContextInfoList_r5;
			struct RFC3095_ContextInfo_r5__r5__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r5;
		struct RFC3095_ContextInfo_r5__criticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} criticalExtensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RFC3095_ContextInfo_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RFC3095_ContextInfo_r5;

#ifdef __cplusplus
}
#endif

#endif	/* _RFC3095_ContextInfo_r5_H_ */
