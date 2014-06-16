/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_HandoverPreparationInformation_v12xy_IEs_H_
#define	_HandoverPreparationInformation_v12xy_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/ARFCN-ValueEUTRA-r9.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandoverPreparationInformation-v12xy-IEs */
typedef struct HandoverPreparationInformation_v12xy_IEs {
	ARFCN_ValueEUTRA_r9_t	*ue_SupportedEARFCN_r12	/* OPTIONAL */;
	struct HandoverPreparationInformation_v12xy_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_v12xy_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_v12xy_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_v12xy_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>