/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PhysicalChannelCapability-v920ext.h"

static asn_TYPE_member_t asn_MBR_fddPhysChCapability_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_v920ext__fddPhysChCapability, downlinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PhysChCapabilityFDD_v920ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkPhysChCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_v920ext__fddPhysChCapability, uplinkPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_PhysChCapabilityFDD_v920ext,
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
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkPhysChCapability at 12231 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkPhysChCapability at 12233 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fddPhysChCapability_specs_2 = {
	sizeof(struct PhysicalChannelCapability_v920ext__fddPhysChCapability),
	offsetof(struct PhysicalChannelCapability_v920ext__fddPhysChCapability, _asn_ctx),
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

static asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_v920ext_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelCapability_v920ext, fddPhysChCapability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fddPhysChCapability_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fddPhysChCapability"
		},
};
static int asn_MAP_PhysicalChannelCapability_v920ext_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_PhysicalChannelCapability_v920ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapability_v920ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* fddPhysChCapability at 12231 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_v920ext_specs_1 = {
	sizeof(struct PhysicalChannelCapability_v920ext),
	offsetof(struct PhysicalChannelCapability_v920ext, _asn_ctx),
	asn_MAP_PhysicalChannelCapability_v920ext_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelCapability_v920ext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_v920ext = {
	"PhysicalChannelCapability-v920ext",
	"PhysicalChannelCapability-v920ext",
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
	asn_DEF_PhysicalChannelCapability_v920ext_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapability_v920ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_v920ext_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapability_v920ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapability_v920ext_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_v920ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelCapability_v920ext_1,
	1,	/* Elements count */
	&asn_SPC_PhysicalChannelCapability_v920ext_specs_1	/* Additional specs */
};

