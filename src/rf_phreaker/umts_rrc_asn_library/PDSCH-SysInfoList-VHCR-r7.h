/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PDSCH_SysInfoList_VHCR_r7_H_
#define	_PDSCH_SysInfoList_VHCR_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDSCH_SysInfo_VHCR_r7;

/* PDSCH-SysInfoList-VHCR-r7 */
typedef struct PDSCH_SysInfoList_VHCR_r7 {
	A_SEQUENCE_OF(struct PDSCH_SysInfo_VHCR_r7) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_SysInfoList_VHCR_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_SysInfoList_VHCR_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-SysInfo-VHCR-r7.h"

#endif	/* _PDSCH_SysInfoList_VHCR_r7_H_ */
