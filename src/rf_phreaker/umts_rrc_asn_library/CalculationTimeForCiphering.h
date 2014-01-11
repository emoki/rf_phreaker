/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CalculationTimeForCiphering_H_
#define	_CalculationTimeForCiphering_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellIdentity.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CalculationTimeForCiphering */
typedef struct CalculationTimeForCiphering {
	CellIdentity_t	 cell_Id;
	long	 sfn;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CalculationTimeForCiphering_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CalculationTimeForCiphering;

#ifdef __cplusplus
}
#endif

#endif	/* _CalculationTimeForCiphering_H_ */
