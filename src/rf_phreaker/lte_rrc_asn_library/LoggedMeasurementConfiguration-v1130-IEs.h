/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_LoggedMeasurementConfiguration_v1130_IEs_H_
#define	_LoggedMeasurementConfiguration_v1130_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityList3_r11;
struct AreaConfiguration_v1130;

/* LoggedMeasurementConfiguration-v1130-IEs */
typedef struct LoggedMeasurementConfiguration_v1130_IEs {
	struct PLMN_IdentityList3_r11	*plmn_IdentityList_r11	/* OPTIONAL */;
	struct AreaConfiguration_v1130	*areaConfiguration_v1130	/* OPTIONAL */;
	struct LoggedMeasurementConfiguration_v1130_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasurementConfiguration_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_v1130_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PLMN-IdentityList3-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/AreaConfiguration-v1130.h"

#endif	/* _LoggedMeasurementConfiguration_v1130_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
