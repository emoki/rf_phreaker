/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PhysicalChannelCapabilityInfo-v770ext.h"

static asn_TYPE_member_t asn_MBR_tddPhysChCapability_768_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_768, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityInfoTDD_768,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_768, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static ber_tlv_tag_t asn_DEF_tddPhysChCapability_768_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tddPhysChCapability_768_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability at 12248 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability at 12250 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tddPhysChCapability_768_specs_2 = {
	sizeof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_768),
	offsetof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_768, _asn_ctx),
	asn_MAP_tddPhysChCapability_768_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddPhysChCapability_768_2 = {
	"tddPhysChCapability-768",
	"tddPhysChCapability-768",
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
	asn_DEF_tddPhysChCapability_768_tags_2,
	sizeof(asn_DEF_tddPhysChCapability_768_tags_2)
		/sizeof(asn_DEF_tddPhysChCapability_768_tags_2[0]) - 1, /* 1 */
	asn_DEF_tddPhysChCapability_768_tags_2,	/* Same as above */
	sizeof(asn_DEF_tddPhysChCapability_768_tags_2)
		/sizeof(asn_DEF_tddPhysChCapability_768_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tddPhysChCapability_768_2,
	2,	/* Elements count */
	&asn_SPC_tddPhysChCapability_768_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddPhysChCapability_128_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_128, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityInfoTDD_128_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplinkPhysChCapability"
		},
};
static ber_tlv_tag_t asn_DEF_tddPhysChCapability_128_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tddPhysChCapability_128_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uplinkPhysChCapability at 12253 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tddPhysChCapability_128_specs_5 = {
	sizeof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_128),
	offsetof(struct PhysicalChannelCapabilityInfo_v770ext__tddPhysChCapability_128, _asn_ctx),
	asn_MAP_tddPhysChCapability_128_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddPhysChCapability_128_5 = {
	"tddPhysChCapability-128",
	"tddPhysChCapability-128",
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
	asn_DEF_tddPhysChCapability_128_tags_5,
	sizeof(asn_DEF_tddPhysChCapability_128_tags_5)
		/sizeof(asn_DEF_tddPhysChCapability_128_tags_5[0]) - 1, /* 1 */
	asn_DEF_tddPhysChCapability_128_tags_5,	/* Same as above */
	sizeof(asn_DEF_tddPhysChCapability_128_tags_5)
		/sizeof(asn_DEF_tddPhysChCapability_128_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tddPhysChCapability_128_5,
	1,	/* Elements count */
	&asn_SPC_tddPhysChCapability_128_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelCapabilityInfo_v770ext_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelCapabilityInfo_v770ext, tddPhysChCapability_768),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tddPhysChCapability_768_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tddPhysChCapability-768"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelCapabilityInfo_v770ext, tddPhysChCapability_128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tddPhysChCapability_128_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tddPhysChCapability-128"
		},
};
static int asn_MAP_PhysicalChannelCapabilityInfo_v770ext_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapabilityInfo_v770ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tddPhysChCapability-768 at 12248 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tddPhysChCapability-128 at 12253 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapabilityInfo_v770ext_specs_1 = {
	sizeof(struct PhysicalChannelCapabilityInfo_v770ext),
	offsetof(struct PhysicalChannelCapabilityInfo_v770ext, _asn_ctx),
	asn_MAP_PhysicalChannelCapabilityInfo_v770ext_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelCapabilityInfo_v770ext_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapabilityInfo_v770ext = {
	"PhysicalChannelCapabilityInfo-v770ext",
	"PhysicalChannelCapabilityInfo-v770ext",
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
	asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapabilityInfo_v770ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelCapabilityInfo_v770ext_1,
	2,	/* Elements count */
	&asn_SPC_PhysicalChannelCapabilityInfo_v770ext_specs_1	/* Additional specs */
};

