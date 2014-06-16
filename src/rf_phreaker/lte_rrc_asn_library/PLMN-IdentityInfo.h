/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PLMN_IdentityInfo_H_
#define	_PLMN_IdentityInfo_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PLMN-Identity.h"
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_IdentityInfo__cellReservedForOperatorUse {
	PLMN_IdentityInfo__cellReservedForOperatorUse_reserved	= 0,
	PLMN_IdentityInfo__cellReservedForOperatorUse_notReserved	= 1
} e_PLMN_IdentityInfo__cellReservedForOperatorUse;

/* PLMN-IdentityInfo */
typedef struct PLMN_IdentityInfo {
	PLMN_Identity_t	 plmn_Identity;
	long	 cellReservedForOperatorUse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cellReservedForOperatorUse_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMN_IdentityInfo_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
