/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UplinkPowerControlDedicated_v1020_H_
#define	_UplinkPowerControlDedicated_v1020_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaTxD_OffsetListPUCCH_r10;

/* UplinkPowerControlDedicated-v1020 */
typedef struct UplinkPowerControlDedicated_v1020 {
	struct DeltaTxD_OffsetListPUCCH_r10	*deltaTxD_OffsetListPUCCH_r10	/* OPTIONAL */;
	long	*pSRS_OffsetAp_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkPowerControlDedicated_v1020_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1020;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/DeltaTxD-OffsetListPUCCH-r10.h"

#endif	/* _UplinkPowerControlDedicated_v1020_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
