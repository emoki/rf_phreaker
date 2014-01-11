/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapability-r6.h"

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapability_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, accessStratumReleaseIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessStratumReleaseIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accessStratumReleaseIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_r6, dl_CapabilityWithSimultaneousHS_DSCHConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CapabilityWithSimultaneousHS_DSCHConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CapabilityWithSimultaneousHS-DSCHConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, pdcp_Capability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Capability_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, rlc_Capability),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Capability_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, transportChannelCapability),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportChannelCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, rf_Capability),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RF_Capability_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rf-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, physicalChannelCapability),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelCapability_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, ue_MultiModeRAT_Capability),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_MultiModeRAT_Capability_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-MultiModeRAT-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, securityCapability),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"securityCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapability_r6, ue_positioning_Capability),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_Capability_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-Capability"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapability_r6, measurementCapability),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCapability_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementCapability"
		},
};
static int asn_MAP_UE_RadioAccessCapability_r6_oms_1[] = { 1, 10 };
static ber_tlv_tag_t asn_DEF_UE_RadioAccessCapability_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapability_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessStratumReleaseIndicator at 33178 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CapabilityWithSimultaneousHS-DSCHConfig at 33180 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcp-Capability at 33181 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Capability at 33182 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* transportChannelCapability at 33183 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rf-Capability at 33184 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* physicalChannelCapability at 33185 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ue-MultiModeRAT-Capability at 33186 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* securityCapability at 33187 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ue-positioning-Capability at 33188 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* measurementCapability at 33189 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapability_r6_specs_1 = {
	sizeof(struct UE_RadioAccessCapability_r6),
	offsetof(struct UE_RadioAccessCapability_r6, _asn_ctx),
	asn_MAP_UE_RadioAccessCapability_r6_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapability_r6_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_r6 = {
	"UE-RadioAccessCapability-r6",
	"UE-RadioAccessCapability-r6",
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
	asn_DEF_UE_RadioAccessCapability_r6_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapability_r6_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_r6_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapability_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapability_r6_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapability_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapability_r6_1,
	11,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapability_r6_specs_1	/* Additional specs */
};

