/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_UM_RLC_Mode_H_
#define	_UL_UM_RLC_Mode_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransmissionRLC_Discard;

/* UL-UM-RLC-Mode */
typedef struct UL_UM_RLC_Mode {
	struct TransmissionRLC_Discard	*transmissionRLC_Discard	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_UM_RLC_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_UM_RLC_Mode;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/TransmissionRLC-Discard.h"

#endif	/* _UL_UM_RLC_Mode_H_ */
