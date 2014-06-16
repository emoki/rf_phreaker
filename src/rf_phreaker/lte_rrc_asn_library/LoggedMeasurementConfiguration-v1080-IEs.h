/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LoggedMeasurementConfiguration_v1080_IEs_H_
#define	_LoggedMeasurementConfiguration_v1080_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LoggedMeasurementConfiguration_v1130_IEs;

/* LoggedMeasurementConfiguration-v1080-IEs */
typedef struct LoggedMeasurementConfiguration_v1080_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension_r10	/* OPTIONAL */;
	struct LoggedMeasurementConfiguration_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_v1080_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_v1080_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/LoggedMeasurementConfiguration-v1130-IEs.h"

#endif	/* _LoggedMeasurementConfiguration_v1080_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
