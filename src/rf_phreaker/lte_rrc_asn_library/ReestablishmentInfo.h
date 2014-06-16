/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_ReestablishmentInfo_H_
#define	_ReestablishmentInfo_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellId.h"
#include "rf_phreaker/lte_rrc_asn_library/ShortMAC-I.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdditionalReestabInfoList;

/* ReestablishmentInfo */
typedef struct ReestablishmentInfo {
	PhysCellId_t	 sourcePhysCellId;
	ShortMAC_I_t	 targetCellShortMAC_I;
	struct AdditionalReestabInfoList	*additionalReestabInfoList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReestablishmentInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReestablishmentInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/AdditionalReestabInfoList.h"

#endif	/* _ReestablishmentInfo_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>