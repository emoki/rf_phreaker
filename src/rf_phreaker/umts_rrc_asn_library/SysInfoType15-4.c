/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/SysInfoType15-4.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_8 = {
	sizeof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_8 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_8,
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v4b0NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions, sysInfoType15_4_v4b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType15_4_v4b0ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType15-4-v4b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_v4b0NonCriticalExtensions_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_v4b0NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v4b0NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType15-4-v4b0ext at 30268 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 30269 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v4b0NonCriticalExtensions_specs_6 = {
	sizeof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions),
	offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v4b0NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v4b0NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v4b0NonCriticalExtensions_6 = {
	"v4b0NonCriticalExtensions",
	"v4b0NonCriticalExtensions",
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
	asn_DEF_v4b0NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v4b0NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v4b0NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v4b0NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v3a0NonCriticalExtensions_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions, sysInfoType15_4_v3a0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType15_4_v3a0ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType15-4-v3a0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions, v4b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v4b0NonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v4b0NonCriticalExtensions"
		},
};
static int asn_MAP_v3a0NonCriticalExtensions_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_v3a0NonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v3a0NonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType15-4-v3a0ext at 30265 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v4b0NonCriticalExtensions at 30268 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v3a0NonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType15_4__v3a0NonCriticalExtensions),
	offsetof(struct SysInfoType15_4__v3a0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v3a0NonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_v3a0NonCriticalExtensions_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v3a0NonCriticalExtensions_4 = {
	"v3a0NonCriticalExtensions",
	"v3a0NonCriticalExtensions",
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
	asn_DEF_v3a0NonCriticalExtensions_tags_4,
	sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_v3a0NonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v3a0NonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_v3a0NonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType15_4_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_4, ue_positioning_OTDOA_CipherParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_CipherParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-OTDOA-CipherParameters"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_4, ue_positioning_OTDOA_AssistanceData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_OTDOA_AssistanceData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-OTDOA-AssistanceData"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_4, v3a0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_v3a0NonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v3a0NonCriticalExtensions"
		},
};
static int asn_MAP_SysInfoType15_4_oms_1[] = { 0, 2 };
static ber_tlv_tag_t asn_DEF_SysInfoType15_4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType15_4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-positioning-OTDOA-CipherParameters at 30262 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-positioning-OTDOA-AssistanceData at 30263 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v3a0NonCriticalExtensions at 30265 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType15_4_specs_1 = {
	sizeof(struct SysInfoType15_4),
	offsetof(struct SysInfoType15_4, _asn_ctx),
	asn_MAP_SysInfoType15_4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType15_4_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType15_4 = {
	"SysInfoType15-4",
	"SysInfoType15-4",
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
	asn_DEF_SysInfoType15_4_tags_1,
	sizeof(asn_DEF_SysInfoType15_4_tags_1)
		/sizeof(asn_DEF_SysInfoType15_4_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType15_4_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType15_4_tags_1)
		/sizeof(asn_DEF_SysInfoType15_4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType15_4_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType15_4_specs_1	/* Additional specs */
};

