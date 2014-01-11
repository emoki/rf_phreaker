/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RL-AdditionInformation-r8.h"

static asn_per_constraints_t asn_PER_type_dl_dpchInfo_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dl_dpchInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RL_AdditionInformation_r8__dl_dpchInfo, choice.dl_DPCH_InfoPerRL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_DL_DPCH_InfoPerRL_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DPCH-InfoPerRL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RL_AdditionInformation_r8__dl_dpchInfo, choice.dl_FDPCH_InfoPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_FDPCH_InfoPerRL_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-FDPCH-InfoPerRL"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dl_dpchInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-DPCH-InfoPerRL at 20301 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-FDPCH-InfoPerRL at 20303 */
};
static asn_CHOICE_specifics_t asn_SPC_dl_dpchInfo_specs_4 = {
	sizeof(struct RL_AdditionInformation_r8__dl_dpchInfo),
	offsetof(struct RL_AdditionInformation_r8__dl_dpchInfo, _asn_ctx),
	offsetof(struct RL_AdditionInformation_r8__dl_dpchInfo, present),
	sizeof(((struct RL_AdditionInformation_r8__dl_dpchInfo *)0)->present),
	asn_MAP_dl_dpchInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_dpchInfo_4 = {
	"dl-dpchInfo",
	"dl-dpchInfo",
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
	&asn_PER_type_dl_dpchInfo_constr_4,
	asn_MBR_dl_dpchInfo_4,
	2,	/* Elements count */
	&asn_SPC_dl_dpchInfo_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RL_AdditionInformation_r8_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RL_AdditionInformation_r8, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCPICH-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct RL_AdditionInformation_r8, cell_Id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cell-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RL_AdditionInformation_r8, dl_dpchInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dl_dpchInfo_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-dpchInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct RL_AdditionInformation_r8, e_HICH_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_HICH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-HICH-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct RL_AdditionInformation_r8, e_RGCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RGCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RGCH-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct RL_AdditionInformation_r8, targetCellPreconfigInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargetCellPreconfigInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetCellPreconfigInfo"
		},
};
static int asn_MAP_RL_AdditionInformation_r8_oms_1[] = { 1, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_RL_AdditionInformation_r8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RL_AdditionInformation_r8_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* primaryCPICH-Info at 20298 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cell-Id at 20299 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-dpchInfo at 20301 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-HICH-Information at 20304 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* e-RGCH-Information at 20305 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* targetCellPreconfigInfo at 20306 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RL_AdditionInformation_r8_specs_1 = {
	sizeof(struct RL_AdditionInformation_r8),
	offsetof(struct RL_AdditionInformation_r8, _asn_ctx),
	asn_MAP_RL_AdditionInformation_r8_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_RL_AdditionInformation_r8_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RL_AdditionInformation_r8 = {
	"RL-AdditionInformation-r8",
	"RL-AdditionInformation-r8",
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
	asn_DEF_RL_AdditionInformation_r8_tags_1,
	sizeof(asn_DEF_RL_AdditionInformation_r8_tags_1)
		/sizeof(asn_DEF_RL_AdditionInformation_r8_tags_1[0]), /* 1 */
	asn_DEF_RL_AdditionInformation_r8_tags_1,	/* Same as above */
	sizeof(asn_DEF_RL_AdditionInformation_r8_tags_1)
		/sizeof(asn_DEF_RL_AdditionInformation_r8_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RL_AdditionInformation_r8_1,
	6,	/* Elements count */
	&asn_SPC_RL_AdditionInformation_r8_specs_1	/* Additional specs */
};

