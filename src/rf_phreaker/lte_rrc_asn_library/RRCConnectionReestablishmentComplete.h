/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReestablishmentComplete_H_
#define	_RRCConnectionReestablishmentComplete_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/lte_rrc_asn_library/RRCConnectionReestablishmentComplete-r8-IEs.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentComplete__criticalExtensions_PR {
	RRCConnectionReestablishmentComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentComplete__criticalExtensions_PR_rrcConnectionReestablishmentComplete_r8,
	RRCConnectionReestablishmentComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentComplete__criticalExtensions_PR;

/* RRCConnectionReestablishmentComplete */
typedef struct RRCConnectionReestablishmentComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCConnectionReestablishmentComplete__criticalExtensions {
		RRCConnectionReestablishmentComplete__criticalExtensions_PR present;
		union RRCConnectionReestablishmentComplete__criticalExtensions_u {
			RRCConnectionReestablishmentComplete_r8_IEs_t	 rrcConnectionReestablishmentComplete_r8;
			struct RRCConnectionReestablishmentComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentComplete_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
