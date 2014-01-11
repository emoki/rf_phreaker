/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DL-AddReconfTransChInformation-r4.h"

static asn_per_constraints_t asn_PER_type_tfs_SignallingMode_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tfs_SignallingMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode, choice.explicit_config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TransportFormatSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicit-config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode, choice.sameAsULTrCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sameAsULTrCH"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tfs_SignallingMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicit-config at 15107 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sameAsULTrCH at 15109 */
};
static asn_CHOICE_specifics_t asn_SPC_tfs_SignallingMode_specs_4 = {
	sizeof(struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode),
	offsetof(struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode, _asn_ctx),
	offsetof(struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode, present),
	sizeof(((struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode *)0)->present),
	asn_MAP_tfs_SignallingMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tfs_SignallingMode_4 = {
	"tfs-SignallingMode",
	"tfs-SignallingMode",
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
	&asn_PER_type_tfs_SignallingMode_constr_4,
	asn_MBR_tfs_SignallingMode_4,
	2,	/* Elements count */
	&asn_SPC_tfs_SignallingMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_AddReconfTransChInformation_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r4, dl_TransportChannelType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TrCH_Type,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-TransportChannelType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r4, dl_transportChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-transportChannelIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AddReconfTransChInformation_r4, tfs_SignallingMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tfs_SignallingMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfs-SignallingMode"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_AddReconfTransChInformation_r4, dch_QualityTarget),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QualityTarget,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dch-QualityTarget"
		},
};
static int asn_MAP_DL_AddReconfTransChInformation_r4_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_DL_AddReconfTransChInformation_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_AddReconfTransChInformation_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-TransportChannelType at 15104 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-transportChannelIdentity at 15105 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tfs-SignallingMode at 15107 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* dch-QualityTarget at 15110 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_AddReconfTransChInformation_r4_specs_1 = {
	sizeof(struct DL_AddReconfTransChInformation_r4),
	offsetof(struct DL_AddReconfTransChInformation_r4, _asn_ctx),
	asn_MAP_DL_AddReconfTransChInformation_r4_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DL_AddReconfTransChInformation_r4_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInformation_r4 = {
	"DL-AddReconfTransChInformation-r4",
	"DL-AddReconfTransChInformation-r4",
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
	asn_DEF_DL_AddReconfTransChInformation_r4_tags_1,
	sizeof(asn_DEF_DL_AddReconfTransChInformation_r4_tags_1)
		/sizeof(asn_DEF_DL_AddReconfTransChInformation_r4_tags_1[0]), /* 1 */
	asn_DEF_DL_AddReconfTransChInformation_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_AddReconfTransChInformation_r4_tags_1)
		/sizeof(asn_DEF_DL_AddReconfTransChInformation_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_AddReconfTransChInformation_r4_1,
	4,	/* Elements count */
	&asn_SPC_DL_AddReconfTransChInformation_r4_specs_1	/* Additional specs */
};

