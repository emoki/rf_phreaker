/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BCCH_DL_SCH_Message_H_
#define	_BCCH_DL_SCH_Message_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/BCCH-DL-SCH-MessageType.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-DL-SCH-Message */
typedef struct BCCH_DL_SCH_Message {
	BCCH_DL_SCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_Message_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
