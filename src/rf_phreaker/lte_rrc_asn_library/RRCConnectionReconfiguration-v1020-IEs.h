/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReconfiguration_v1020_IEs_H_
#define	_RRCConnectionReconfiguration_v1020_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToReleaseList_r10;
struct SCellToAddModList_r10;
struct RRCConnectionReconfiguration_v1130_IEs;

/* RRCConnectionReconfiguration-v1020-IEs */
typedef struct RRCConnectionReconfiguration_v1020_IEs {
	struct SCellToReleaseList_r10	*sCellToReleaseList_r10	/* OPTIONAL */;
	struct SCellToAddModList_r10	*sCellToAddModList_r10	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v1130_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_v1020_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/SCellToReleaseList-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/SCellToAddModList-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/RRCConnectionReconfiguration-v1130-IEs.h"

#endif	/* _RRCConnectionReconfiguration_v1020_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
