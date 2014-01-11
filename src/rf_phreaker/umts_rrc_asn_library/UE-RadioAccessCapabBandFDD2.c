/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabBandFDD2.h"

static asn_TYPE_member_t asn_MBR_fddRF_Capability_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapabBandFDD2__fddRF_Capability, ue_PowerClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_PowerClassExt,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-PowerClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapabBandFDD2__fddRF_Capability, txRxFrequencySeparation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TxRxFrequencySeparation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"txRxFrequencySeparation"
		},
};
static ber_tlv_tag_t asn_DEF_fddRF_Capability_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fddRF_Capability_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-PowerClass at 13200 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* txRxFrequencySeparation at 13202 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fddRF_Capability_specs_3 = {
	sizeof(struct UE_RadioAccessCapabBandFDD2__fddRF_Capability),
	offsetof(struct UE_RadioAccessCapabBandFDD2__fddRF_Capability, _asn_ctx),
	asn_MAP_fddRF_Capability_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fddRF_Capability_3 = {
	"fddRF-Capability",
	"fddRF-Capability",
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
	asn_DEF_fddRF_Capability_tags_3,
	sizeof(asn_DEF_fddRF_Capability_tags_3)
		/sizeof(asn_DEF_fddRF_Capability_tags_3[0]) - 1, /* 1 */
	asn_DEF_fddRF_Capability_tags_3,	/* Same as above */
	sizeof(asn_DEF_fddRF_Capability_tags_3)
		/sizeof(asn_DEF_fddRF_Capability_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fddRF_Capability_3,
	2,	/* Elements count */
	&asn_SPC_fddRF_Capability_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabBandFDD2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapabBandFDD2, radioFrequencyBandFDD2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioFrequencyBandFDD2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioFrequencyBandFDD2"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapabBandFDD2, fddRF_Capability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_fddRF_Capability_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fddRF-Capability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_RadioAccessCapabBandFDD2, measurementCapability2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementCapabilityExt2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementCapability2"
		},
};
static int asn_MAP_UE_RadioAccessCapabBandFDD2_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapabBandFDD2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioFrequencyBandFDD2 at 13198 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fddRF-Capability at 13200 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measurementCapability2 at 13204 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabBandFDD2_specs_1 = {
	sizeof(struct UE_RadioAccessCapabBandFDD2),
	offsetof(struct UE_RadioAccessCapabBandFDD2, _asn_ctx),
	asn_MAP_UE_RadioAccessCapabBandFDD2_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapabBandFDD2_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabBandFDD2 = {
	"UE-RadioAccessCapabBandFDD2",
	"UE-RadioAccessCapabBandFDD2",
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
	asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabBandFDD2_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapabBandFDD2_1,
	3,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapabBandFDD2_specs_1	/* Additional specs */
};

