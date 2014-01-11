/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_DCCH_Message_H_
#define	_DL_DCCH_Message_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-DCCH-MessageType.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityCheckInfo;

/* DL-DCCH-Message */
typedef struct DL_DCCH_Message {
	struct IntegrityCheckInfo	*integrityCheckInfo	/* OPTIONAL */;
	DL_DCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DCCH_Message;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntegrityCheckInfo.h"

#endif	/* _DL_DCCH_Message_H_ */
