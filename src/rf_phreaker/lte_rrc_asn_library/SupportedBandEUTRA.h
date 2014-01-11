/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SupportedBandEUTRA_H_
#define	_SupportedBandEUTRA_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/FreqBandIndicator.h"
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandEUTRA */
typedef struct SupportedBandEUTRA {
	FreqBandIndicator_t	 bandEUTRA;
	BOOLEAN_t	 halfDuplex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandEUTRA_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
