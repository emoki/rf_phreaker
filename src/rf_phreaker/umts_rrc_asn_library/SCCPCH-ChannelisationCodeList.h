/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SCCPCH_ChannelisationCodeList_H_
#define	_SCCPCH_ChannelisationCodeList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SCCPCH-ChannelisationCode.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SCCPCH-ChannelisationCodeList */
typedef struct SCCPCH_ChannelisationCodeList {
	A_SEQUENCE_OF(SCCPCH_ChannelisationCode_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCCPCH_ChannelisationCodeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCCPCH_ChannelisationCodeList;

#ifdef __cplusplus
}
#endif

#endif	/* _SCCPCH_ChannelisationCodeList_H_ */
