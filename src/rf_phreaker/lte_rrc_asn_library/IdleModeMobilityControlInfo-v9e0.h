/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IdleModeMobilityControlInfo_v9e0_H_
#define	_IdleModeMobilityControlInfo_v9e0_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FreqPriorityEUTRA_v9e0;

/* IdleModeMobilityControlInfo-v9e0 */
typedef struct IdleModeMobilityControlInfo_v9e0 {
	struct IdleModeMobilityControlInfo_v9e0__freqPriorityListEUTRA_v9e0 {
		A_SEQUENCE_OF(struct FreqPriorityEUTRA_v9e0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqPriorityListEUTRA_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IdleModeMobilityControlInfo_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IdleModeMobilityControlInfo_v9e0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/FreqPriorityEUTRA-v9e0.h"

#endif	/* _IdleModeMobilityControlInfo_v9e0_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
