/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MasterInformationBlock_v6b0ext_IEs_H_
#define	_MasterInformationBlock_v6b0ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ExtSIBTypeInfoSchedulingInfo_List;

/* MasterInformationBlock-v6b0ext-IEs */
typedef struct MasterInformationBlock_v6b0ext_IEs {
	struct ExtSIBTypeInfoSchedulingInfo_List	*extSIBTypeInfoSchedulingInfo_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_v6b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock_v6b0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/ExtSIBTypeInfoSchedulingInfo-List.h"

#endif	/* _MasterInformationBlock_v6b0ext_IEs_H_ */
