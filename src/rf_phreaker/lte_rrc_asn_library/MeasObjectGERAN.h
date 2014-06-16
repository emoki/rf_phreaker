/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasObjectGERAN_H_
#define	_MeasObjectGERAN_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/CarrierFreqsGERAN.h"
#include "rf_phreaker/lte_rrc_asn_library/Q-OffsetRangeInterRAT.h"
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdGERAN;

/* MeasObjectGERAN */
typedef struct MeasObjectGERAN {
	CarrierFreqsGERAN_t	 carrierFreqs;
	Q_OffsetRangeInterRAT_t	 offsetFreq	/* DEFAULT 0 */;
	BIT_STRING_t	*ncc_Permitted	/* DEFAULT 'FF'HH */;
	struct PhysCellIdGERAN	*cellForWhichToReportCGI	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectGERAN;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellIdGERAN.h"

#endif	/* _MeasObjectGERAN_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
