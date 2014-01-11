/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_HandoverFromUTRANCommand_GSM_r6_IEs_H_
#define	_HandoverFromUTRANCommand_GSM_r6_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/Frequency-Band.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/GSM-MessageList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/umts_rrc_asn_library/GERAN-SystemInformation.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR {
	HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR_NOTHING,	/* No components present */
	HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR_single_GSM_Message,
	HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR_gsm_MessageList
} HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR;
typedef enum HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR {
	HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR_NOTHING,	/* No components present */
	HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR_sI,
	HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR_pSI
} HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR;

/* Forward declarations */
struct RAB_InformationList_r6;

/* HandoverFromUTRANCommand-GSM-r6-IEs */
typedef struct HandoverFromUTRANCommand_GSM_r6_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct RAB_InformationList_r6	*toHandoverRAB_Info	/* OPTIONAL */;
	Frequency_Band_t	 frequency_band;
	struct HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message {
		HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_PR present;
		union HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message_u {
			struct HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message__single_GSM_Message {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} single_GSM_Message;
			struct HandoverFromUTRANCommand_GSM_r6_IEs__gsm_message__gsm_MessageList {
				GSM_MessageList_t	 gsm_Messages;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gsm_MessageList;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} gsm_message;
	struct HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType {
		HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_PR present;
		union HandoverFromUTRANCommand_GSM_r6_IEs__geran_SystemInfoType_u {
			GERAN_SystemInformation_t	 sI;
			GERAN_SystemInformation_t	 pSI;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *geran_SystemInfoType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromUTRANCommand_GSM_r6_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromUTRANCommand_GSM_r6_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationList-r6.h"

#endif	/* _HandoverFromUTRANCommand_GSM_r6_IEs_H_ */
