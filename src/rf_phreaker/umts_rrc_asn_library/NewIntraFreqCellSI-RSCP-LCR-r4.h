/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NewIntraFreqCellSI_RSCP_LCR_r4_H_
#define	_NewIntraFreqCellSI_RSCP_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IntraFreqCellID.h"
#include "rf_phreaker/umts_rrc_asn_library/CellInfoSI-RSCP-LCR-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NewIntraFreqCellSI-RSCP-LCR-r4 */
typedef struct NewIntraFreqCellSI_RSCP_LCR_r4 {
	IntraFreqCellID_t	*intraFreqCellID	/* OPTIONAL */;
	CellInfoSI_RSCP_LCR_r4_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewIntraFreqCellSI_RSCP_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCellSI_RSCP_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _NewIntraFreqCellSI_RSCP_LCR_r4_H_ */
