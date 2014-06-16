/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_IRAT_ParametersGERAN_H_
#define	_IRAT_ParametersGERAN_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/SupportedBandListGERAN.h"
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersGERAN */
typedef struct IRAT_ParametersGERAN {
	SupportedBandListGERAN_t	 supportedBandListGERAN;
	BOOLEAN_t	 interRAT_PS_HO_ToGERAN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersGERAN_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
