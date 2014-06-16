/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/RLC-Config.h"

static asn_per_constraints_t asn_PER_type_RLC_Config_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_am_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__am, ul_AM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AM-RLC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__am, dl_AM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AM-RLC"
		},
};
static ber_tlv_tag_t asn_DEF_am_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_am_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-AM-RLC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-AM-RLC */
};
static asn_SEQUENCE_specifics_t asn_SPC_am_specs_2 = {
	sizeof(struct RLC_Config__am),
	offsetof(struct RLC_Config__am, _asn_ctx),
	asn_MAP_am_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_am_2 = {
	"am",
	"am",
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
	asn_DEF_am_tags_2,
	sizeof(asn_DEF_am_tags_2)
		/sizeof(asn_DEF_am_tags_2[0]) - 1, /* 1 */
	asn_DEF_am_tags_2,	/* Same as above */
	sizeof(asn_DEF_am_tags_2)
		/sizeof(asn_DEF_am_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_am_2,
	2,	/* Elements count */
	&asn_SPC_am_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Bi_Directional_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__um_Bi_Directional, ul_UM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_UM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-UM-RLC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__um_Bi_Directional, dl_UM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_UM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-UM-RLC"
		},
};
static ber_tlv_tag_t asn_DEF_um_Bi_Directional_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_um_Bi_Directional_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-UM-RLC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-UM-RLC */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Bi_Directional_specs_5 = {
	sizeof(struct RLC_Config__um_Bi_Directional),
	offsetof(struct RLC_Config__um_Bi_Directional, _asn_ctx),
	asn_MAP_um_Bi_Directional_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Bi_Directional_5 = {
	"um-Bi-Directional",
	"um-Bi-Directional",
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
	asn_DEF_um_Bi_Directional_tags_5,
	sizeof(asn_DEF_um_Bi_Directional_tags_5)
		/sizeof(asn_DEF_um_Bi_Directional_tags_5[0]) - 1, /* 1 */
	asn_DEF_um_Bi_Directional_tags_5,	/* Same as above */
	sizeof(asn_DEF_um_Bi_Directional_tags_5)
		/sizeof(asn_DEF_um_Bi_Directional_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_um_Bi_Directional_5,
	2,	/* Elements count */
	&asn_SPC_um_Bi_Directional_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Uni_Directional_UL_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__um_Uni_Directional_UL, ul_UM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_UM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-UM-RLC"
		},
};
static ber_tlv_tag_t asn_DEF_um_Uni_Directional_UL_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_um_Uni_Directional_UL_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ul-UM-RLC */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Uni_Directional_UL_specs_8 = {
	sizeof(struct RLC_Config__um_Uni_Directional_UL),
	offsetof(struct RLC_Config__um_Uni_Directional_UL, _asn_ctx),
	asn_MAP_um_Uni_Directional_UL_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Uni_Directional_UL_8 = {
	"um-Uni-Directional-UL",
	"um-Uni-Directional-UL",
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
	asn_DEF_um_Uni_Directional_UL_tags_8,
	sizeof(asn_DEF_um_Uni_Directional_UL_tags_8)
		/sizeof(asn_DEF_um_Uni_Directional_UL_tags_8[0]) - 1, /* 1 */
	asn_DEF_um_Uni_Directional_UL_tags_8,	/* Same as above */
	sizeof(asn_DEF_um_Uni_Directional_UL_tags_8)
		/sizeof(asn_DEF_um_Uni_Directional_UL_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_um_Uni_Directional_UL_8,
	1,	/* Elements count */
	&asn_SPC_um_Uni_Directional_UL_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_um_Uni_Directional_DL_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config__um_Uni_Directional_DL, dl_UM_RLC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_UM_RLC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-UM-RLC"
		},
};
static ber_tlv_tag_t asn_DEF_um_Uni_Directional_DL_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_um_Uni_Directional_DL_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dl-UM-RLC */
};
static asn_SEQUENCE_specifics_t asn_SPC_um_Uni_Directional_DL_specs_10 = {
	sizeof(struct RLC_Config__um_Uni_Directional_DL),
	offsetof(struct RLC_Config__um_Uni_Directional_DL, _asn_ctx),
	asn_MAP_um_Uni_Directional_DL_tag2el_10,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_um_Uni_Directional_DL_10 = {
	"um-Uni-Directional-DL",
	"um-Uni-Directional-DL",
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
	asn_DEF_um_Uni_Directional_DL_tags_10,
	sizeof(asn_DEF_um_Uni_Directional_DL_tags_10)
		/sizeof(asn_DEF_um_Uni_Directional_DL_tags_10[0]) - 1, /* 1 */
	asn_DEF_um_Uni_Directional_DL_tags_10,	/* Same as above */
	sizeof(asn_DEF_um_Uni_Directional_DL_tags_10)
		/sizeof(asn_DEF_um_Uni_Directional_DL_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_um_Uni_Directional_DL_10,
	1,	/* Elements count */
	&asn_SPC_um_Uni_Directional_DL_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RLC_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config, choice.am),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_am_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"am"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config, choice.um_Bi_Directional),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_um_Bi_Directional_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"um-Bi-Directional"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config, choice.um_Uni_Directional_UL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_um_Uni_Directional_UL_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"um-Uni-Directional-UL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Config, choice.um_Uni_Directional_DL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_um_Uni_Directional_DL_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"um-Uni-Directional-DL"
		},
};
static asn_TYPE_tag2member_t asn_MAP_RLC_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* am */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* um-Bi-Directional */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* um-Uni-Directional-UL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* um-Uni-Directional-DL */
};
static asn_CHOICE_specifics_t asn_SPC_RLC_Config_specs_1 = {
	sizeof(struct RLC_Config),
	offsetof(struct RLC_Config, _asn_ctx),
	offsetof(struct RLC_Config, present),
	sizeof(((struct RLC_Config *)0)->present),
	asn_MAP_RLC_Config_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Config = {
	"RLC-Config",
	"RLC-Config",
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
	&asn_PER_type_RLC_Config_constr_1,
	asn_MBR_RLC_Config_1,
	4,	/* Elements count */
	&asn_SPC_RLC_Config_specs_1	/* Additional specs */
};

