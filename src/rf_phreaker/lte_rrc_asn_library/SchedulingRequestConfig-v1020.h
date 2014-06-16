/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SchedulingRequestConfig_v1020_H_
#define	_SchedulingRequestConfig_v1020_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SchedulingRequestConfig-v1020 */
typedef struct SchedulingRequestConfig_v1020 {
	long	*sr_PUCCH_ResourceIndexP1_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig_v1020;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_v1020_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
