/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4_H_
#define	_IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-List-HCS-RSCP-LCR-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RemovedIntraFreqCellList;

/* IntraFreqCellInfoSI-List-HCS-RSCP-LCR-r4 */
typedef struct IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4 {
	struct RemovedIntraFreqCellList	*removedIntraFreqCellList	/* OPTIONAL */;
	NewIntraFreqCellSI_List_HCS_RSCP_LCR_r4_t	 newIntraFreqCellList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RemovedIntraFreqCellList.h"

#endif	/* _IntraFreqCellInfoSI_List_HCS_RSCP_LCR_r4_H_ */
