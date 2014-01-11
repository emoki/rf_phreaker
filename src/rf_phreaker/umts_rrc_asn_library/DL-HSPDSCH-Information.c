/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information.h"

static asn_per_constraints_t asn_PER_type_tdd_constr_5 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_6[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd384, dl_HSPDSCH_TS_Configuration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_TS_Configuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-TS-Configuration"
		},
};
static int asn_MAP_tdd384_oms_6[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd384_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-HSPDSCH-TS-Configuration at 16961 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_6 = {
	sizeof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd384),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_tdd384_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_6 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_6,
	sizeof(asn_DEF_tdd384_tags_6)
		/sizeof(asn_DEF_tdd384_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_6)
		/sizeof(asn_DEF_tdd384_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_6,
	1,	/* Elements count */
	&asn_SPC_tdd384_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_8[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd128, hs_PDSCH_Midamble_Configuration_tdd128),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_PDSCH_Midamble_Configuration_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-PDSCH-Midamble-Configuration-tdd128"
		},
};
static int asn_MAP_tdd128_oms_8[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd128_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* hs-PDSCH-Midamble-Configuration-tdd128 at 16965 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_8 = {
	sizeof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd128),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_8 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_8,
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_8,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 16961 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 16965 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd_specs_5 = {
	sizeof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd, _asn_ctx),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo__tdd, present),
	sizeof(((struct DL_HSPDSCH_Information__modeSpecificInfo__tdd *)0)->present),
	asn_MAP_tdd_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_5 = {
	"tdd",
	"tdd",
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
	&asn_PER_type_tdd_constr_5,
	asn_MBR_tdd_5,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd at 16962 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fdd at 16968 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_4 = {
	sizeof(struct DL_HSPDSCH_Information__modeSpecificInfo),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo, _asn_ctx),
	offsetof(struct DL_HSPDSCH_Information__modeSpecificInfo, present),
	sizeof(((struct DL_HSPDSCH_Information__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_4 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_4,
	asn_MBR_modeSpecificInfo_4,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_HSPDSCH_Information_1[] = {
	{ ATF_POINTER, 2, offsetof(struct DL_HSPDSCH_Information, hs_scch_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SCCH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-scch-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_HSPDSCH_Information, measurement_feedback_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Measurement_Feedback_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurement-feedback-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_HSPDSCH_Information, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static int asn_MAP_DL_HSPDSCH_Information_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_DL_HSPDSCH_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_HSPDSCH_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hs-scch-Info at 16956 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurement-feedback-Info at 16957 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* modeSpecificInfo at 16967 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_HSPDSCH_Information_specs_1 = {
	sizeof(struct DL_HSPDSCH_Information),
	offsetof(struct DL_HSPDSCH_Information, _asn_ctx),
	asn_MAP_DL_HSPDSCH_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DL_HSPDSCH_Information_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_Information = {
	"DL-HSPDSCH-Information",
	"DL-HSPDSCH-Information",
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
	asn_DEF_DL_HSPDSCH_Information_tags_1,
	sizeof(asn_DEF_DL_HSPDSCH_Information_tags_1)
		/sizeof(asn_DEF_DL_HSPDSCH_Information_tags_1[0]), /* 1 */
	asn_DEF_DL_HSPDSCH_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_HSPDSCH_Information_tags_1)
		/sizeof(asn_DEF_DL_HSPDSCH_Information_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_HSPDSCH_Information_1,
	3,	/* Elements count */
	&asn_SPC_DL_HSPDSCH_Information_specs_1	/* Additional specs */
};

