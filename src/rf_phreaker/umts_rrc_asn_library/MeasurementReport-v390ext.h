/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasurementReport_v390ext_H_
#define	_MeasurementReport_v390ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResults_v390ext;

/* MeasurementReport-v390ext */
typedef struct MeasurementReport_v390ext {
	struct MeasuredResults_v390ext	*measuredResults_v390ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReport_v390ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReport_v390ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/MeasuredResults-v390ext.h"

#endif	/* _MeasurementReport_v390ext_H_ */
