/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasResultServFreq_r10_H_
#define	_MeasResultServFreq_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/ServCellIndex-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/RSRP-Range.h"
#include "rf_phreaker/lte_rrc_asn_library/RSRQ-Range.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/lte_rrc_asn_library/PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultServFreq-r10 */
typedef struct MeasResultServFreq_r10 {
	ServCellIndex_r10_t	 servFreqId_r10;
	struct MeasResultServFreq_r10__measResultSCell_r10 {
		RSRP_Range_t	 rsrpResultSCell_r10;
		RSRQ_Range_t	 rsrqResultSCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r10;
	struct MeasResultServFreq_r10__measResultBestNeighCell_r10 {
		PhysCellId_t	 physCellId_r10;
		RSRP_Range_t	 rsrpResultNCell_r10;
		RSRQ_Range_t	 rsrqResultNCell_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreq_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreq_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultServFreq_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
