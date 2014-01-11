/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasurementReport_vaxyext_IEs_H_
#define	_MeasurementReport_vaxyext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementReport_vaxyext_IEs__loggedMeasAvailable {
	MeasurementReport_vaxyext_IEs__loggedMeasAvailable_true	= 0
} e_MeasurementReport_vaxyext_IEs__loggedMeasAvailable;

/* Forward declarations */
struct EventResults_vaxyext;

/* MeasurementReport-vaxyext-IEs */
typedef struct MeasurementReport_vaxyext_IEs {
	struct EventResults_vaxyext	*eventResults	/* OPTIONAL */;
	long	*loggedMeasAvailable	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReport_vaxyext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_loggedMeasAvailable_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReport_vaxyext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/EventResults-vaxyext.h"

#endif	/* _MeasurementReport_vaxyext_IEs_H_ */
