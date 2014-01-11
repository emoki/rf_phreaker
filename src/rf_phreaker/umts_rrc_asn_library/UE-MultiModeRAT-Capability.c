/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-MultiModeRAT-Capability.h"

static asn_TYPE_member_t asn_MBR_UE_MultiModeRAT_Capability_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_MultiModeRAT_Capability, multiRAT_CapabilityList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiRAT_Capability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiRAT-CapabilityList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_MultiModeRAT_Capability, multiModeCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiModeCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiModeCapability"
		},
};
static ber_tlv_tag_t asn_DEF_UE_MultiModeRAT_Capability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_MultiModeRAT_Capability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* multiRAT-CapabilityList at 13070 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* multiModeCapability at 13072 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_MultiModeRAT_Capability_specs_1 = {
	sizeof(struct UE_MultiModeRAT_Capability),
	offsetof(struct UE_MultiModeRAT_Capability, _asn_ctx),
	asn_MAP_UE_MultiModeRAT_Capability_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_MultiModeRAT_Capability = {
	"UE-MultiModeRAT-Capability",
	"UE-MultiModeRAT-Capability",
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
	asn_DEF_UE_MultiModeRAT_Capability_tags_1,
	sizeof(asn_DEF_UE_MultiModeRAT_Capability_tags_1)
		/sizeof(asn_DEF_UE_MultiModeRAT_Capability_tags_1[0]), /* 1 */
	asn_DEF_UE_MultiModeRAT_Capability_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_MultiModeRAT_Capability_tags_1)
		/sizeof(asn_DEF_UE_MultiModeRAT_Capability_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_MultiModeRAT_Capability_1,
	2,	/* Elements count */
	&asn_SPC_UE_MultiModeRAT_Capability_specs_1	/* Additional specs */
};

