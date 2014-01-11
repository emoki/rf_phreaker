/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ProtocolErrorMoreInformation_H_
#define	_ProtocolErrorMoreInformation_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/IdentificationOfReceivedMessage.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProtocolErrorMoreInformation__diagnosticsType_PR {
	ProtocolErrorMoreInformation__diagnosticsType_PR_NOTHING,	/* No components present */
	ProtocolErrorMoreInformation__diagnosticsType_PR_type1,
	ProtocolErrorMoreInformation__diagnosticsType_PR_spare
} ProtocolErrorMoreInformation__diagnosticsType_PR;
typedef enum ProtocolErrorMoreInformation__diagnosticsType__type1_PR {
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_NOTHING,	/* No components present */
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_asn1_ViolationOrEncodingError,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_messageTypeNonexistent,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_messageNotCompatibleWithReceiverState,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_ie_ValueNotComprehended,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_conditionalInformationElementError,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_messageExtensionNotComprehended,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_spare1,
	ProtocolErrorMoreInformation__diagnosticsType__type1_PR_spare2
} ProtocolErrorMoreInformation__diagnosticsType__type1_PR;

/* ProtocolErrorMoreInformation */
typedef struct ProtocolErrorMoreInformation {
	struct ProtocolErrorMoreInformation__diagnosticsType {
		ProtocolErrorMoreInformation__diagnosticsType_PR present;
		union ProtocolErrorMoreInformation__diagnosticsType_u {
			struct ProtocolErrorMoreInformation__diagnosticsType__type1 {
				ProtocolErrorMoreInformation__diagnosticsType__type1_PR present;
				union ProtocolErrorMoreInformation__diagnosticsType__type1_u {
					NULL_t	 asn1_ViolationOrEncodingError;
					NULL_t	 messageTypeNonexistent;
					IdentificationOfReceivedMessage_t	 messageNotCompatibleWithReceiverState;
					IdentificationOfReceivedMessage_t	 ie_ValueNotComprehended;
					IdentificationOfReceivedMessage_t	 conditionalInformationElementError;
					IdentificationOfReceivedMessage_t	 messageExtensionNotComprehended;
					NULL_t	 spare1;
					NULL_t	 spare2;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} type1;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} diagnosticsType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolErrorMoreInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolErrorMoreInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolErrorMoreInformation_H_ */
