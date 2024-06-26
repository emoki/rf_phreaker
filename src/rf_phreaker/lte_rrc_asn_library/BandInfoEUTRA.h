/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_BandInfoEUTRA_H_
#define	_BandInfoEUTRA_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/InterFreqBandList.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterRAT_BandList;

/* BandInfoEUTRA */
typedef struct BandInfoEUTRA {
	InterFreqBandList_t	 interFreqBandList;
	struct InterRAT_BandList	*interRAT_BandList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandInfoEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandInfoEUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/InterRAT-BandList.h"

#endif	/* _BandInfoEUTRA_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
