/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/SysInfoType18.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_8 = {
	sizeof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_v860NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions, sysInfoType18_v860ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType18_v860ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType18-v860ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_v860NonCriticalExtensions_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_v860NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v860NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType18-v860ext at 30399 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 30400 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v860NonCriticalExtensions_specs_6 = {
	sizeof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions),
	offsetof(struct SysInfoType18__v6b0NonCriticalExtensions__v860NonCriticalExtensions, _asn_ctx),
	asn_MAP_v860NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v860NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v860NonCriticalExtensions_6 = {
	"v860NonCriticalExtensions",
	"v860NonCriticalExtensions",
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
	asn_DEF_v860NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v860NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v860NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v860NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6b0NonCriticalExtensions_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType18__v6b0NonCriticalExtensions, sysInfoType18_v6b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType18_v6b0ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType18-v6b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType18__v6b0NonCriticalExtensions, v860NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v860NonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v860NonCriticalExtensions"
		},
};
static int asn_MAP_v6b0NonCriticalExtensions_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_v6b0NonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v6b0NonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType18-v6b0ext at 30397 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v860NonCriticalExtensions at 30399 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6b0NonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType18__v6b0NonCriticalExtensions),
	offsetof(struct SysInfoType18__v6b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6b0NonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_v6b0NonCriticalExtensions_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6b0NonCriticalExtensions_4 = {
	"v6b0NonCriticalExtensions",
	"v6b0NonCriticalExtensions",
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
	asn_DEF_v6b0NonCriticalExtensions_tags_4,
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_v6b0NonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v6b0NonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_v6b0NonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType18_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SysInfoType18, idleModePLMNIdentities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentitiesOfNeighbourCells,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"idleModePLMNIdentities"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType18, connectedModePLMNIdentities),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentitiesOfNeighbourCells,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connectedModePLMNIdentities"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType18, v6b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_v6b0NonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v6b0NonCriticalExtensions"
		},
};
static int asn_MAP_SysInfoType18_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_SysInfoType18_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType18_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idleModePLMNIdentities at 30393 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connectedModePLMNIdentities at 30394 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v6b0NonCriticalExtensions at 30397 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType18_specs_1 = {
	sizeof(struct SysInfoType18),
	offsetof(struct SysInfoType18, _asn_ctx),
	asn_MAP_SysInfoType18_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType18_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType18 = {
	"SysInfoType18",
	"SysInfoType18",
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
	asn_DEF_SysInfoType18_tags_1,
	sizeof(asn_DEF_SysInfoType18_tags_1)
		/sizeof(asn_DEF_SysInfoType18_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType18_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType18_tags_1)
		/sizeof(asn_DEF_SysInfoType18_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType18_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType18_specs_1	/* Additional specs */
};

