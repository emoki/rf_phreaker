/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEInformationRequest_r9_IEs_H_
#define	_UEInformationRequest_r9_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEInformationRequest_v930_IEs;

/* UEInformationRequest-r9-IEs */
typedef struct UEInformationRequest_r9_IEs {
	BOOLEAN_t	 rach_ReportReq_r9;
	BOOLEAN_t	 rlf_ReportReq_r9;
	struct UEInformationRequest_v930_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationRequest_r9_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_r9_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/UEInformationRequest-v930-IEs.h"

#endif	/* _UEInformationRequest_r9_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
