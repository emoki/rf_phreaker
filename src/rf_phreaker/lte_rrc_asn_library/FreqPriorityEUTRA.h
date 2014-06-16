/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_FreqPriorityEUTRA_H_
#define	_FreqPriorityEUTRA_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/ARFCN-ValueEUTRA.h"
#include "rf_phreaker/lte_rrc_asn_library/CellReselectionPriority.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA */
typedef struct FreqPriorityEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
