/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RRCConnectionRelease_vaxyext_IEs_H_
#define	_RRCConnectionRelease_vaxyext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ExtendedWaitTime.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRCConnectionRelease-vaxyext-IEs */
typedef struct RRCConnectionRelease_vaxyext_IEs {
	ExtendedWaitTime_t	*extendedWaitTime	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRelease_vaxyext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRelease_vaxyext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRelease_vaxyext_IEs_H_ */
