/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UEInformationResponse_v12xy_IEs_H_
#define	_UEInformationResponse_v12xy_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VisitedCellInfoList_r12;

/* UEInformationResponse-v12xy-IEs */
typedef struct UEInformationResponse_v12xy_IEs {
	struct VisitedCellInfoList_r12	*mobilityHistoryReport_r12	/* OPTIONAL */;
	struct UEInformationResponse_v12xy_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v12xy_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v12xy_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/MobilityHistoryReport-r12.h"

#endif	/* _UEInformationResponse_v12xy_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
