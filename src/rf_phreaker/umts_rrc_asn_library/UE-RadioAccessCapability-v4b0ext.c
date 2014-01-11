/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapability-v4b0ext.h"

static asn_TYPE_member_t asn_MBR_tdd_CapabilityExt_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v4b0ext__tdd_CapabilityExt, rf_Capability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Capability_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rf-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v4b0ext__tdd_CapabilityExt, physicalChannelCapability_LCR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelCapability_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelCapability-LCR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v4b0ext__tdd_CapabilityExt, measurementCapability_r4_ext),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCapability_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementCapability-r4-ext"
		},
};
static ber_tlv_tag_t asn_DEF_tdd_CapabilityExt_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_CapabilityExt_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rf-Capability at 13290 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physicalChannelCapability-LCR at 13291 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measurementCapability-r4-ext at 13293 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_CapabilityExt_specs_3 = {
	sizeof(struct UE_RadioAccessCapability_v4b0ext__tdd_CapabilityExt),
	offsetof(struct UE_RadioAccessCapability_v4b0ext__tdd_CapabilityExt, _asn_ctx),
	asn_MAP_tdd_CapabilityExt_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_CapabilityExt_3 = {
	"tdd-CapabilityExt",
	"tdd-CapabilityExt",
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
	asn_DEF_tdd_CapabilityExt_tags_3,
	sizeof(asn_DEF_tdd_CapabilityExt_tags_3)
		/sizeof(asn_DEF_tdd_CapabilityExt_tags_3[0]) - 1, /* 1 */
	asn_DEF_tdd_CapabilityExt_tags_3,	/* Same as above */
	sizeof(asn_DEF_tdd_CapabilityExt_tags_3)
		/sizeof(asn_DEF_tdd_CapabilityExt_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_CapabilityExt_3,
	3,	/* Elements count */
	&asn_SPC_tdd_CapabilityExt_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_v4b0ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_v4b0ext, pdcp_Capability_r4_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Capability_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Capability-r4-ext"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioAccessCapability_v4b0ext, tdd_CapabilityExt),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_CapabilityExt_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-CapabilityExt"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_v4b0ext, accessStratumReleaseIndicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessStratumReleaseIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accessStratumReleaseIndicator"
		},
};
static int asn_MAP_UE_RadioAccessCapability_v4b0ext_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapability_v4b0ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-Capability-r4-ext at 13288 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd-CapabilityExt at 13290 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* accessStratumReleaseIndicator at 13295 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_v4b0ext_specs_1 = {
	sizeof(struct UE_RadioAccessCapability_v4b0ext),
	offsetof(struct UE_RadioAccessCapability_v4b0ext, _asn_ctx),
	asn_MAP_UE_RadioAccessCapability_v4b0ext_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapability_v4b0ext_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v4b0ext = {
	"UE-RadioAccessCapability-v4b0ext",
	"UE-RadioAccessCapability-v4b0ext",
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
	asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_v4b0ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapability_v4b0ext_1,
	3,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapability_v4b0ext_specs_1	/* Additional specs */
};

