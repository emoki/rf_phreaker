/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DownlinkDirectTransfer_r3_IEs_H_
#define	_DownlinkDirectTransfer_r3_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/NAS-Message.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DownlinkDirectTransfer-r3-IEs */
typedef struct DownlinkDirectTransfer_r3_IEs {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	CN_DomainIdentity_t	 cn_DomainIdentity;
	NAS_Message_t	 nas_Message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownlinkDirectTransfer_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkDirectTransfer_r3_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _DownlinkDirectTransfer_r3_IEs_H_ */
