/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ULHandoverPreparationTransfer_H_
#define	_ULHandoverPreparationTransfer_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/ULHandoverPreparationTransfer-r8-IEs.h"
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULHandoverPreparationTransfer__criticalExtensions_PR {
	ULHandoverPreparationTransfer__criticalExtensions_PR_NOTHING,	/* No components present */
	ULHandoverPreparationTransfer__criticalExtensions_PR_c1,
	ULHandoverPreparationTransfer__criticalExtensions_PR_criticalExtensionsFuture
} ULHandoverPreparationTransfer__criticalExtensions_PR;
typedef enum ULHandoverPreparationTransfer__criticalExtensions__c1_PR {
	ULHandoverPreparationTransfer__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	ULHandoverPreparationTransfer__criticalExtensions__c1_PR_ulHandoverPreparationTransfer_r8,
	ULHandoverPreparationTransfer__criticalExtensions__c1_PR_spare3,
	ULHandoverPreparationTransfer__criticalExtensions__c1_PR_spare2,
	ULHandoverPreparationTransfer__criticalExtensions__c1_PR_spare1
} ULHandoverPreparationTransfer__criticalExtensions__c1_PR;

/* ULHandoverPreparationTransfer */
typedef struct ULHandoverPreparationTransfer {
	struct ULHandoverPreparationTransfer__criticalExtensions {
		ULHandoverPreparationTransfer__criticalExtensions_PR present;
		union ULHandoverPreparationTransfer__criticalExtensions_u {
			struct ULHandoverPreparationTransfer__criticalExtensions__c1 {
				ULHandoverPreparationTransfer__criticalExtensions__c1_PR present;
				union ULHandoverPreparationTransfer__criticalExtensions__c1_u {
					ULHandoverPreparationTransfer_r8_IEs_t	 ulHandoverPreparationTransfer_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct ULHandoverPreparationTransfer__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULHandoverPreparationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULHandoverPreparationTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _ULHandoverPreparationTransfer_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
