/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PCPCH_ChannelInfoList_H_
#define	_PCPCH_ChannelInfoList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PCPCH_ChannelInfo;

/* PCPCH-ChannelInfoList */
typedef struct PCPCH_ChannelInfoList {
	A_SEQUENCE_OF(struct PCPCH_ChannelInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCPCH_ChannelInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCPCH_ChannelInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PCPCH-ChannelInfo.h"

#endif	/* _PCPCH_ChannelInfoList_H_ */
