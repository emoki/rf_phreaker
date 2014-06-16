/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PreRegistrationInfoHRPD_H_
#define	_PreRegistrationInfoHRPD_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/lte_rrc_asn_library/PreRegistrationZoneIdHRPD.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryPreRegistrationZoneIdListHRPD;

/* PreRegistrationInfoHRPD */
typedef struct PreRegistrationInfoHRPD {
	BOOLEAN_t	 preRegistrationAllowed;
	PreRegistrationZoneIdHRPD_t	*preRegistrationZoneId	/* OPTIONAL */;
	struct SecondaryPreRegistrationZoneIdListHRPD	*secondaryPreRegistrationZoneIdList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreRegistrationInfoHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreRegistrationInfoHRPD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/SecondaryPreRegistrationZoneIdListHRPD.h"

#endif	/* _PreRegistrationInfoHRPD_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
