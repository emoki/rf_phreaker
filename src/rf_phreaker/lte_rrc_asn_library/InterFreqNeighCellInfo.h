/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_InterFreqNeighCellInfo_H_
#define	_InterFreqNeighCellInfo_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellId.h"
#include "rf_phreaker/lte_rrc_asn_library/Q-OffsetRange.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterFreqNeighCellInfo */
typedef struct InterFreqNeighCellInfo {
	PhysCellId_t	 physCellId;
	Q_OffsetRange_t	 q_OffsetCell;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqNeighCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqNeighCellInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqNeighCellInfo_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
