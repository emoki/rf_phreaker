/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_DPCH_InfoPerRL_PostTDD_LCR_r4_H_
#define	_DL_DPCH_InfoPerRL_PostTDD_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DownlinkTimeslotsCodes-LCR-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-DPCH-InfoPerRL-PostTDD-LCR-r4 */
typedef struct DL_DPCH_InfoPerRL_PostTDD_LCR_r4 {
	DownlinkTimeslotsCodes_LCR_r4_t	 dl_CCTrCH_TimeslotsCodes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoPerRL_PostTDD_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoPerRL_PostTDD_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DPCH_InfoPerRL_PostTDD_LCR_r4_H_ */
