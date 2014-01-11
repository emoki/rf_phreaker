/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UEAssistanceInformation_r11_H_
#define	_UEAssistanceInformation_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/UEAssistanceInformation-r11-IEs.h"
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformation_r11__criticalExtensions_PR {
	UEAssistanceInformation_r11__criticalExtensions_PR_NOTHING,	/* No components present */
	UEAssistanceInformation_r11__criticalExtensions_PR_c1,
	UEAssistanceInformation_r11__criticalExtensions_PR_criticalExtensionsFuture
} UEAssistanceInformation_r11__criticalExtensions_PR;
typedef enum UEAssistanceInformation_r11__criticalExtensions__c1_PR {
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_ueAssistanceInformation_r11,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare3,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare2,
	UEAssistanceInformation_r11__criticalExtensions__c1_PR_spare1
} UEAssistanceInformation_r11__criticalExtensions__c1_PR;

/* UEAssistanceInformation-r11 */
typedef struct UEAssistanceInformation_r11 {
	struct UEAssistanceInformation_r11__criticalExtensions {
		UEAssistanceInformation_r11__criticalExtensions_PR present;
		union UEAssistanceInformation_r11__criticalExtensions_u {
			struct UEAssistanceInformation_r11__criticalExtensions__c1 {
				UEAssistanceInformation_r11__criticalExtensions__c1_PR present;
				union UEAssistanceInformation_r11__criticalExtensions__c1_u {
					UEAssistanceInformation_r11_IEs_t	 ueAssistanceInformation_r11;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct UEAssistanceInformation_r11__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformation_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
