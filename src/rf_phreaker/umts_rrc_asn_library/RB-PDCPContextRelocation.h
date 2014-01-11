/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RB_PDCPContextRelocation_H_
#define	_RB_PDCPContextRelocation_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RB-Identity.h"
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RB-PDCPContextRelocation */
typedef struct RB_PDCPContextRelocation {
	RB_Identity_t	 rb_Identity;
	BOOLEAN_t	 dl_RFC3095_Context_Relocation;
	BOOLEAN_t	 ul_RFC3095_Context_Relocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_PDCPContextRelocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_PDCPContextRelocation;

#ifdef __cplusplus
}
#endif

#endif	/* _RB_PDCPContextRelocation_H_ */
