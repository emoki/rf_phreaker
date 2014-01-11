/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CN-InformationInfo-r6.h"

static asn_TYPE_member_t asn_MBR_CN_InformationInfo_r6_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CN_InformationInfo_r6, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct CN_InformationInfo_r6, cn_CommonGSM_MAP_NAS_SysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-CommonGSM-MAP-NAS-SysInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct CN_InformationInfo_r6, cn_DomainInformationList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainInformationList"
		},
	{ ATF_POINTER, 1, offsetof(struct CN_InformationInfo_r6, primary_plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primary-plmn-Identity"
		},
};
static int asn_MAP_CN_InformationInfo_r6_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_CN_InformationInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CN_InformationInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity at 10789 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-CommonGSM-MAP-NAS-SysInfo at 10790 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cn-DomainInformationList at 10791 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* primary-plmn-Identity at 10792 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CN_InformationInfo_r6_specs_1 = {
	sizeof(struct CN_InformationInfo_r6),
	offsetof(struct CN_InformationInfo_r6, _asn_ctx),
	asn_MAP_CN_InformationInfo_r6_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CN_InformationInfo_r6_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CN_InformationInfo_r6 = {
	"CN-InformationInfo-r6",
	"CN-InformationInfo-r6",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CN_InformationInfo_r6_tags_1,
	sizeof(asn_DEF_CN_InformationInfo_r6_tags_1)
		/sizeof(asn_DEF_CN_InformationInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_CN_InformationInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_CN_InformationInfo_r6_tags_1)
		/sizeof(asn_DEF_CN_InformationInfo_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CN_InformationInfo_r6_1,
	4,	/* Elements count */
	&asn_SPC_CN_InformationInfo_r6_specs_1	/* Additional specs */
};

