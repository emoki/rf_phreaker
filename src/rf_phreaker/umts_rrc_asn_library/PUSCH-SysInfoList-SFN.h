/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PUSCH_SysInfoList_SFN_H_
#define	_PUSCH_SysInfoList_SFN_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include "rf_phreaker/umts_rrc_asn_library/PUSCH-SysInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SFN_TimeInfo;

typedef struct PUSCH_SysInfoList_SFN__Member {
	PUSCH_SysInfo_t	 pusch_SysInfo;
	struct SFN_TimeInfo	*sfn_TimeInfo	/* OPTIONAL */;

	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN__Member_t;

/* PUSCH-SysInfoList-SFN */
typedef struct PUSCH_SysInfoList_SFN {
	A_SEQUENCE_OF(PUSCH_SysInfoList_SFN__Member_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_SFN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_SFN;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/SFN-TimeInfo.h"

#endif	/* _PUSCH_SysInfoList_SFN_H_ */
