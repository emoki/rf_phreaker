/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_E_CSFB_r9_H_
#define	_E_CSFB_r9_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_CSFB_r9__mobilityCDMA2000_HRPD_r9 {
	E_CSFB_r9__mobilityCDMA2000_HRPD_r9_handover	= 0,
	E_CSFB_r9__mobilityCDMA2000_HRPD_r9_redirection	= 1
} e_E_CSFB_r9__mobilityCDMA2000_HRPD_r9;

/* Forward declarations */
struct CarrierFreqCDMA2000;

/* E-CSFB-r9 */
typedef struct E_CSFB_r9 {
	OCTET_STRING_t	*messageContCDMA2000_1XRTT_r9	/* OPTIONAL */;
	long	*mobilityCDMA2000_HRPD_r9	/* OPTIONAL */;
	OCTET_STRING_t	*messageContCDMA2000_HRPD_r9	/* OPTIONAL */;
	struct CarrierFreqCDMA2000	*redirectCarrierCDMA2000_HRPD_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_CSFB_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mobilityCDMA2000_HRPD_r9_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E_CSFB_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CarrierFreqCDMA2000.h"

#endif	/* _E_CSFB_r9_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
