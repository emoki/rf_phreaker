/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RLC_Capability_vaxyext_H_
#define	_RLC_Capability_vaxyext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TotalRLC-AM-BufferSize-vaxyext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Capability-vaxyext */
typedef struct RLC_Capability_vaxyext {
	TotalRLC_AM_BufferSize_vaxyext_t	*totalRLC_AM_BufferSize	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Capability_vaxyext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Capability_vaxyext;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Capability_vaxyext_H_ */
