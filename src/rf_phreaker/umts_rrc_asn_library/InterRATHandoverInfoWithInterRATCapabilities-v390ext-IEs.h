/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs_H_
#define	_InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FailureCauseWithProtErr;

/* InterRATHandoverInfoWithInterRATCapabilities-v390ext-IEs */
typedef struct InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs {
	struct FailureCauseWithProtErr	*failureCauseWithProtErr	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/FailureCauseWithProtErr.h"

#endif	/* _InterRATHandoverInfoWithInterRATCapabilities_v390ext_IEs_H_ */
