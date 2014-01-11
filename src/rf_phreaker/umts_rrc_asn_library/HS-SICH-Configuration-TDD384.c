/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HS-SICH-Configuration-TDD384.h"

static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode__ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftLong,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShift"
		},
};
static ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift at 18826 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_6 = {
	sizeof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode__ueSpecificMidamble),
	offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode__ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_6 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
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
	asn_DEF_ueSpecificMidamble_tags_6,
	sizeof(asn_DEF_ueSpecificMidamble_tags_6)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_6[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_6,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_6)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ueSpecificMidamble_6,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueSpecificMidamble"
		},
};
static asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble at 18823 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueSpecificMidamble at 18826 */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_4 = {
	sizeof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode),
	offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode, _asn_ctx),
	offsetof(struct HS_SICH_Configuration_TDD384__midambleAllocationMode, present),
	sizeof(((struct HS_SICH_Configuration_TDD384__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_4 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
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
	&asn_PER_type_midambleAllocationMode_constr_4,
	asn_MBR_midambleAllocationMode_4,
	2,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SICH_Configuration_TDD384_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleAllocationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_Configuration_TDD384, midambleconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleConfigurationBurstType1and3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleconfiguration"
		},
};
static ber_tlv_tag_t asn_DEF_HS_SICH_Configuration_TDD384_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HS_SICH_Configuration_TDD384_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotNumber at 18820 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisationCode at 18821 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleAllocationMode at 18823 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* midambleconfiguration at 18829 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_SICH_Configuration_TDD384_specs_1 = {
	sizeof(struct HS_SICH_Configuration_TDD384),
	offsetof(struct HS_SICH_Configuration_TDD384, _asn_ctx),
	asn_MAP_HS_SICH_Configuration_TDD384_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_SICH_Configuration_TDD384 = {
	"HS-SICH-Configuration-TDD384",
	"HS-SICH-Configuration-TDD384",
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
	asn_DEF_HS_SICH_Configuration_TDD384_tags_1,
	sizeof(asn_DEF_HS_SICH_Configuration_TDD384_tags_1)
		/sizeof(asn_DEF_HS_SICH_Configuration_TDD384_tags_1[0]), /* 1 */
	asn_DEF_HS_SICH_Configuration_TDD384_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SICH_Configuration_TDD384_tags_1)
		/sizeof(asn_DEF_HS_SICH_Configuration_TDD384_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_SICH_Configuration_TDD384_1,
	4,	/* Elements count */
	&asn_SPC_HS_SICH_Configuration_TDD384_specs_1	/* Additional specs */
};

