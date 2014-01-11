/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_URAUpdateConfirm_CCCH_H_
#define	_URAUpdateConfirm_CCCH_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/URAUpdateConfirm-CCCH-r3-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include "rf_phreaker/umts_rrc_asn_library/URAUpdateConfirm-v690ext-IEs.h"
#include "rf_phreaker/umts_rrc_asn_library/URAUpdateConfirm-v860ext-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum URAUpdateConfirm_CCCH_PR {
	URAUpdateConfirm_CCCH_PR_NOTHING,	/* No components present */
	URAUpdateConfirm_CCCH_PR_r3,
	URAUpdateConfirm_CCCH_PR_later_than_r3
} URAUpdateConfirm_CCCH_PR;

/* URAUpdateConfirm-CCCH */
typedef struct URAUpdateConfirm_CCCH {
	URAUpdateConfirm_CCCH_PR present;
	union URAUpdateConfirm_CCCH_u {
		struct URAUpdateConfirm_CCCH__r3 {
			URAUpdateConfirm_CCCH_r3_IEs_t	 uraUpdateConfirm_CCCH_r3;
			struct URAUpdateConfirm_CCCH__r3__laterNonCriticalExtensions {
				BIT_STRING_t	*uraUpdateConfirm_CCCH_r3_add_ext	/* OPTIONAL */;
				struct URAUpdateConfirm_CCCH__r3__laterNonCriticalExtensions__v690NonCriticalExtensions {
					URAUpdateConfirm_v690ext_IEs_t	 uraUpdateConfirm_v690ext;
					struct URAUpdateConfirm_CCCH__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v860NonCriticalExtensions {
						URAUpdateConfirm_v860ext_IEs_t	 uraUpdateConfirm_v860ext;
						struct URAUpdateConfirm_CCCH__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v860NonCriticalExtensions__nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v860NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct URAUpdateConfirm_CCCH__later_than_r3 {
			U_RNTI_t	 u_RNTI;
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct URAUpdateConfirm_CCCH__later_than_r3__criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} URAUpdateConfirm_CCCH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URAUpdateConfirm_CCCH;

#ifdef __cplusplus
}
#endif

#endif	/* _URAUpdateConfirm_CCCH_H_ */
