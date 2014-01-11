/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType3_v830ext_IEs_H_
#define	_SysInfoType3_v830ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PagingPermissionWithAccessControlParameters;
struct PagingPermissionWithAccessControlForSharedNetwork;

/* SysInfoType3-v830ext-IEs */
typedef struct SysInfoType3_v830ext_IEs {
	struct PagingPermissionWithAccessControlParameters	*pagingPermissionWithAccessControlParametersForPLMNOfMIB	/* OPTIONAL */;
	struct PagingPermissionWithAccessControlForSharedNetwork	*pagingPermissionWithAccessControlParametersForSharedNetwork	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType3_v830ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType3_v830ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PagingPermissionWithAccessControlParameters.h"
#include "rf_phreaker/umts_rrc_asn_library/PagingPermissionWithAccessControlForSharedNetwork.h"

#endif	/* _SysInfoType3_v830ext_IEs_H_ */
