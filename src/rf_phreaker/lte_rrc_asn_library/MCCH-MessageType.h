/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MCCH_MessageType_H_
#define	_MCCH_MessageType_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/MBSFNAreaConfiguration-r9.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/lte_rrc_asn_library/MBMSCountingRequest-r10.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MCCH_MessageType_PR {
	MCCH_MessageType_PR_NOTHING,	/* No components present */
	MCCH_MessageType_PR_c1,
	MCCH_MessageType_PR_later
} MCCH_MessageType_PR;
typedef enum MCCH_MessageType__c1_PR {
	MCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	MCCH_MessageType__c1_PR_mbsfnAreaConfiguration_r9
} MCCH_MessageType__c1_PR;
typedef enum MCCH_MessageType__later_PR {
	MCCH_MessageType__later_PR_NOTHING,	/* No components present */
	MCCH_MessageType__later_PR_c2,
	MCCH_MessageType__later_PR_messageClassExtension
} MCCH_MessageType__later_PR;
typedef enum MCCH_MessageType__later__c2_PR {
	MCCH_MessageType__later__c2_PR_NOTHING,	/* No components present */
	MCCH_MessageType__later__c2_PR_mbmsCountingRequest_r10
} MCCH_MessageType__later__c2_PR;

/* MCCH-MessageType */
typedef struct MCCH_MessageType {
	MCCH_MessageType_PR present;
	union MCCH_MessageType_u {
		struct MCCH_MessageType__c1 {
			MCCH_MessageType__c1_PR present;
			union MCCH_MessageType__c1_u {
				MBSFNAreaConfiguration_r9_t	 mbsfnAreaConfiguration_r9;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct MCCH_MessageType__later {
			MCCH_MessageType__later_PR present;
			union MCCH_MessageType__later_u {
				struct MCCH_MessageType__later__c2 {
					MCCH_MessageType__later__c2_PR present;
					union MCCH_MessageType__later__c2_u {
						MBMSCountingRequest_r10_t	 mbmsCountingRequest_r10;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct MCCH_MessageType__later__messageClassExtension {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtension;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _MCCH_MessageType_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
