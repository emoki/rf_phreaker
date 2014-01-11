/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RL-InformationLists.h"

static asn_TYPE_member_t asn_MBR_RL_InformationLists_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RL_InformationLists, rl_AdditionInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_AdditionInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rl-AdditionInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct RL_InformationLists, rL_RemovalInformationList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RL_RemovalInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rL-RemovalInformationList"
		},
};
static int asn_MAP_RL_InformationLists_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_RL_InformationLists_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RL_InformationLists_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rl-AdditionInfoList at 26769 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rL-RemovalInformationList at 26770 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RL_InformationLists_specs_1 = {
	sizeof(struct RL_InformationLists),
	offsetof(struct RL_InformationLists, _asn_ctx),
	asn_MAP_RL_InformationLists_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RL_InformationLists_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RL_InformationLists = {
	"RL-InformationLists",
	"RL-InformationLists",
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
	asn_DEF_RL_InformationLists_tags_1,
	sizeof(asn_DEF_RL_InformationLists_tags_1)
		/sizeof(asn_DEF_RL_InformationLists_tags_1[0]), /* 1 */
	asn_DEF_RL_InformationLists_tags_1,	/* Same as above */
	sizeof(asn_DEF_RL_InformationLists_tags_1)
		/sizeof(asn_DEF_RL_InformationLists_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RL_InformationLists_1,
	2,	/* Elements count */
	&asn_SPC_RL_InformationLists_specs_1	/* Additional specs */
};

