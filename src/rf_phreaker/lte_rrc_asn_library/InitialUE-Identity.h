/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InitialUE_Identity_H_
#define	_InitialUE_Identity_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/S-TMSI.h"
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitialUE_Identity_PR {
	InitialUE_Identity_PR_NOTHING,	/* No components present */
	InitialUE_Identity_PR_s_TMSI,
	InitialUE_Identity_PR_randomValue
} InitialUE_Identity_PR;

/* InitialUE-Identity */
typedef struct InitialUE_Identity {
	InitialUE_Identity_PR present;
	union InitialUE_Identity_u {
		S_TMSI_t	 s_TMSI;
		BIT_STRING_t	 randomValue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialUE_Identity;

#ifdef __cplusplus
}
#endif

#endif	/* _InitialUE_Identity_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
