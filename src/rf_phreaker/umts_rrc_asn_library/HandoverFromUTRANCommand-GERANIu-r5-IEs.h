/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HandoverFromUTRANCommand_GERANIu_r5_IEs_H_
#define	_HandoverFromUTRANCommand_GERANIu_r5_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/Frequency-Band.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/GERANIu-MessageList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR {
	HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR_NOTHING,	/* No components present */
	HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR_single_GERANIu_Message,
	HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR_geranIu_MessageList
} HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR;

/* HandoverFromUTRANCommand-GERANIu-r5-IEs */
typedef struct HandoverFromUTRANCommand_GERANIu_r5_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	Frequency_Band_t	 frequency_Band;
	struct HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message {
		HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_PR present;
		union HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message_u {
			struct HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message__single_GERANIu_Message {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} single_GERANIu_Message;
			struct HandoverFromUTRANCommand_GERANIu_r5_IEs__geranIu_Message__geranIu_MessageList {
				GERANIu_MessageList_t	 geranIu_Messages;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} geranIu_MessageList;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} geranIu_Message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromUTRANCommand_GERANIu_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_GERANIu_r5_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverFromUTRANCommand_GERANIu_r5_IEs_H_ */
