/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TransportFormatCombinationControlFailure_H_
#define	_TransportFormatCombinationControlFailure_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/umts_rrc_asn_library/FailureCauseWithProtErr.h"
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TransportFormatCombinationControlFailure */
typedef struct TransportFormatCombinationControlFailure {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	FailureCauseWithProtErr_t	 failureCause;
	struct TransportFormatCombinationControlFailure__laterNonCriticalExtensions {
		BIT_STRING_t	*transportFormatCombinationControlFailure_r3_add_ext	/* OPTIONAL */;
		struct TransportFormatCombinationControlFailure__laterNonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportFormatCombinationControlFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportFormatCombinationControlFailure;

#ifdef __cplusplus
}
#endif

#endif	/* _TransportFormatCombinationControlFailure_H_ */
