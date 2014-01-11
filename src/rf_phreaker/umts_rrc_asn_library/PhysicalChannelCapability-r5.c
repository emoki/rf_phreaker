/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PhysicalChannelCapability-r5.h"

static asn_TYPE_member_t asn_MBR_fddPhysChCapability_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__fddPhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityFDD_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__fddPhysChCapability, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static ber_tlv_tag_t asn_DEF_fddPhysChCapability_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fddPhysChCapability_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability at 33034 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability at 33036 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fddPhysChCapability_specs_2 = {
	sizeof(struct PhysicalChannelCapability_r5__fddPhysChCapability),
	offsetof(struct PhysicalChannelCapability_r5__fddPhysChCapability, _asn_ctx),
	asn_MAP_fddPhysChCapability_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fddPhysChCapability_2 = {
	"fddPhysChCapability",
	"fddPhysChCapability",
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
	asn_DEF_fddPhysChCapability_tags_2,
	sizeof(asn_DEF_fddPhysChCapability_tags_2)
		/sizeof(asn_DEF_fddPhysChCapability_tags_2[0]) - 1, /* 1 */
	asn_DEF_fddPhysChCapability_tags_2,	/* Same as above */
	sizeof(asn_DEF_fddPhysChCapability_tags_2)
		/sizeof(asn_DEF_fddPhysChCapability_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fddPhysChCapability_2,
	2,	/* Elements count */
	&asn_SPC_fddPhysChCapability_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_PhysChCapability_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__tdd384_PhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityTDD_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__tdd384_PhysChCapability, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_PhysChCapability_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_PhysChCapability_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability at 33038 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability at 33040 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_PhysChCapability_specs_5 = {
	sizeof(struct PhysicalChannelCapability_r5__tdd384_PhysChCapability),
	offsetof(struct PhysicalChannelCapability_r5__tdd384_PhysChCapability, _asn_ctx),
	asn_MAP_tdd384_PhysChCapability_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_PhysChCapability_5 = {
	"tdd384-PhysChCapability",
	"tdd384-PhysChCapability",
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
	asn_DEF_tdd384_PhysChCapability_tags_5,
	sizeof(asn_DEF_tdd384_PhysChCapability_tags_5)
		/sizeof(asn_DEF_tdd384_PhysChCapability_tags_5[0]) - 1, /* 1 */
	asn_DEF_tdd384_PhysChCapability_tags_5,	/* Same as above */
	sizeof(asn_DEF_tdd384_PhysChCapability_tags_5)
		/sizeof(asn_DEF_tdd384_PhysChCapability_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_PhysChCapability_5,
	2,	/* Elements count */
	&asn_SPC_tdd384_PhysChCapability_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_PhysChCapability_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__tdd128_PhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityTDD_LCR_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_r5__tdd128_PhysChCapability, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static ber_tlv_tag_t asn_DEF_tdd128_PhysChCapability_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_PhysChCapability_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability at 33042 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability at 33044 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_PhysChCapability_specs_8 = {
	sizeof(struct PhysicalChannelCapability_r5__tdd128_PhysChCapability),
	offsetof(struct PhysicalChannelCapability_r5__tdd128_PhysChCapability, _asn_ctx),
	asn_MAP_tdd128_PhysChCapability_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_PhysChCapability_8 = {
	"tdd128-PhysChCapability",
	"tdd128-PhysChCapability",
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
	asn_DEF_tdd128_PhysChCapability_tags_8,
	sizeof(asn_DEF_tdd128_PhysChCapability_tags_8)
		/sizeof(asn_DEF_tdd128_PhysChCapability_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd128_PhysChCapability_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd128_PhysChCapability_tags_8)
		/sizeof(asn_DEF_tdd128_PhysChCapability_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_PhysChCapability_8,
	2,	/* Elements count */
	&asn_SPC_tdd128_PhysChCapability_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_r5_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PhysicalChannelCapability_r5, fddPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fddPhysChCapability_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fddPhysChCapability"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelCapability_r5, tdd384_PhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd384_PhysChCapability_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384-PhysChCapability"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelCapability_r5, tdd128_PhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128_PhysChCapability_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128-PhysChCapability"
		},
};
static int asn_MAP_PhysicalChannelCapability_r5_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_PhysicalChannelCapability_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapability_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fddPhysChCapability at 33034 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384-PhysChCapability at 33038 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128-PhysChCapability at 33042 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_r5_specs_1 = {
	sizeof(struct PhysicalChannelCapability_r5),
	offsetof(struct PhysicalChannelCapability_r5, _asn_ctx),
	asn_MAP_PhysicalChannelCapability_r5_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelCapability_r5_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_r5 = {
	"PhysicalChannelCapability-r5",
	"PhysicalChannelCapability-r5",
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
	asn_DEF_PhysicalChannelCapability_r5_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapability_r5_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_r5_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapability_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapability_r5_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_r5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelCapability_r5_1,
	3,	/* Elements count */
	&asn_SPC_PhysicalChannelCapability_r5_specs_1	/* Additional specs */
};

