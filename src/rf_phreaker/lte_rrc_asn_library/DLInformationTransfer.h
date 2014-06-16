/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_DLInformationTransfer_H_
#define	_DLInformationTransfer_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/lte_rrc_asn_library/DLInformationTransfer-r8-IEs.h"
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DLInformationTransfer__criticalExtensions_PR {
	DLInformationTransfer__criticalExtensions_PR_NOTHING,	/* No components present */
	DLInformationTransfer__criticalExtensions_PR_c1,
	DLInformationTransfer__criticalExtensions_PR_criticalExtensionsFuture
} DLInformationTransfer__criticalExtensions_PR;
typedef enum DLInformationTransfer__criticalExtensions__c1_PR {
	DLInformationTransfer__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	DLInformationTransfer__criticalExtensions__c1_PR_dlInformationTransfer_r8,
	DLInformationTransfer__criticalExtensions__c1_PR_spare3,
	DLInformationTransfer__criticalExtensions__c1_PR_spare2,
	DLInformationTransfer__criticalExtensions__c1_PR_spare1
} DLInformationTransfer__criticalExtensions__c1_PR;

/* DLInformationTransfer */
typedef struct DLInformationTransfer {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct DLInformationTransfer__criticalExtensions {
		DLInformationTransfer__criticalExtensions_PR present;
		union DLInformationTransfer__criticalExtensions_u {
			struct DLInformationTransfer__criticalExtensions__c1 {
				DLInformationTransfer__criticalExtensions__c1_PR present;
				union DLInformationTransfer__criticalExtensions__c1_u {
					DLInformationTransfer_r8_IEs_t	 dlInformationTransfer_r8;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct DLInformationTransfer__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _DLInformationTransfer_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
