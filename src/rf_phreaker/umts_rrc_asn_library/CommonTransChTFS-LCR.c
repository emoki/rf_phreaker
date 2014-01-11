/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CommonTransChTFS-LCR.h"

static asn_per_constraints_t asn_PER_type_tti_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tti_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.tti5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.tti10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.tti20),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.tti40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.tti80),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR__tti, choice.dynamic),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList_DynamicTTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dynamic"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tti_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti5 at 15003 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tti10 at 15004 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tti20 at 15005 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tti40 at 15006 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tti80 at 15007 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dynamic at 15009 */
};
static asn_CHOICE_specifics_t asn_SPC_tti_specs_2 = {
	sizeof(struct CommonTransChTFS_LCR__tti),
	offsetof(struct CommonTransChTFS_LCR__tti, _asn_ctx),
	offsetof(struct CommonTransChTFS_LCR__tti, present),
	sizeof(((struct CommonTransChTFS_LCR__tti *)0)->present),
	asn_MAP_tti_tag2el_2,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tti_2 = {
	"tti",
	"tti",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_tti_constr_2,
	asn_MBR_tti_2,
	6,	/* Elements count */
	&asn_SPC_tti_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CommonTransChTFS_LCR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR, tti),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tti_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS_LCR, semistaticTF_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemistaticTF_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"semistaticTF-Information"
		},
};
static ber_tlv_tag_t asn_DEF_CommonTransChTFS_LCR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CommonTransChTFS_LCR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti at 15003 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* semistaticTF-Information at 15011 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CommonTransChTFS_LCR_specs_1 = {
	sizeof(struct CommonTransChTFS_LCR),
	offsetof(struct CommonTransChTFS_LCR, _asn_ctx),
	asn_MAP_CommonTransChTFS_LCR_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CommonTransChTFS_LCR = {
	"CommonTransChTFS-LCR",
	"CommonTransChTFS-LCR",
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
	asn_DEF_CommonTransChTFS_LCR_tags_1,
	sizeof(asn_DEF_CommonTransChTFS_LCR_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_LCR_tags_1[0]), /* 1 */
	asn_DEF_CommonTransChTFS_LCR_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonTransChTFS_LCR_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_LCR_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CommonTransChTFS_LCR_1,
	2,	/* Elements count */
	&asn_SPC_CommonTransChTFS_LCR_specs_1	/* Additional specs */
};

