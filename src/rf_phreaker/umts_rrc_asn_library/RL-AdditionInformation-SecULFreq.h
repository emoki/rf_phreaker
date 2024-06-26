/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RL_AdditionInformation_SecULFreq_H_
#define	_RL_AdditionInformation_SecULFreq_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/CellIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-FDPCH-InfoPerRL-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/E-HICH-Information.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_RGCH_Information;

/* RL-AdditionInformation-SecULFreq */
typedef struct RL_AdditionInformation_SecULFreq {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	CellIdentity_t	*cell_id	/* OPTIONAL */;
	DL_FDPCH_InfoPerRL_r7_t	 dl_FDPCH_InfoPerRL;
	E_HICH_Information_t	 e_HICH_Information;
	struct E_RGCH_Information	*e_RGCH_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RL_AdditionInformation_SecULFreq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RL_AdditionInformation_SecULFreq;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/E-RGCH-Information.h"

#endif	/* _RL_AdditionInformation_SecULFreq_H_ */
