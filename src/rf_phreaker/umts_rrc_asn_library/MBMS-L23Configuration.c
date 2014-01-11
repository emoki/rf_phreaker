/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-L23Configuration.h"

static asn_per_constraints_t asn_PER_type_MBMS_L23Configuration_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sameAsCurrent_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L23Configuration__sameAsCurrent, currentCell_SCCPCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SCCPCHIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"currentCell-SCCPCH"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_L23Configuration__sameAsCurrent, msch_ConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MSCH_ConfigurationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msch-ConfigurationInfo"
		},
};
static int asn_MAP_sameAsCurrent_oms_2[] = { 1 };
static ber_tlv_tag_t asn_DEF_sameAsCurrent_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_sameAsCurrent_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* currentCell-SCCPCH at 30647 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* msch-ConfigurationInfo at 30648 */
};
static asn_SEQUENCE_specifics_t asn_SPC_sameAsCurrent_specs_2 = {
	sizeof(struct MBMS_L23Configuration__sameAsCurrent),
	offsetof(struct MBMS_L23Configuration__sameAsCurrent, _asn_ctx),
	asn_MAP_sameAsCurrent_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_sameAsCurrent_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sameAsCurrent_2 = {
	"sameAsCurrent",
	"sameAsCurrent",
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
	asn_DEF_sameAsCurrent_tags_2,
	sizeof(asn_DEF_sameAsCurrent_tags_2)
		/sizeof(asn_DEF_sameAsCurrent_tags_2[0]) - 1, /* 1 */
	asn_DEF_sameAsCurrent_tags_2,	/* Same as above */
	sizeof(asn_DEF_sameAsCurrent_tags_2)
		/sizeof(asn_DEF_sameAsCurrent_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_sameAsCurrent_2,
	2,	/* Elements count */
	&asn_SPC_sameAsCurrent_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_different_5[] = {
	{ ATF_POINTER, 1, offsetof(struct MBMS_L23Configuration__different, transpCh_InfoCommonForAllTrCh),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CommonCCTrChIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transpCh-InfoCommonForAllTrCh"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L23Configuration__different, transpCHInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_TrCHInformation_NeighbList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transpCHInformation"
		},
};
static int asn_MAP_different_oms_5[] = { 0 };
static ber_tlv_tag_t asn_DEF_different_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_different_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transpCh-InfoCommonForAllTrCh at 30653 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* transpCHInformation at 30655 */
};
static asn_SEQUENCE_specifics_t asn_SPC_different_specs_5 = {
	sizeof(struct MBMS_L23Configuration__different),
	offsetof(struct MBMS_L23Configuration__different, _asn_ctx),
	asn_MAP_different_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_different_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_different_5 = {
	"different",
	"different",
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
	asn_DEF_different_tags_5,
	sizeof(asn_DEF_different_tags_5)
		/sizeof(asn_DEF_different_tags_5[0]) - 1, /* 1 */
	asn_DEF_different_tags_5,	/* Same as above */
	sizeof(asn_DEF_different_tags_5)
		/sizeof(asn_DEF_different_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_different_5,
	2,	/* Elements count */
	&asn_SPC_different_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_L23Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L23Configuration, choice.sameAsCurrent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_sameAsCurrent_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sameAsCurrent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L23Configuration, choice.different),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_different_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"different"
		},
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_L23Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sameAsCurrent at 30647 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* different at 30653 */
};
static asn_CHOICE_specifics_t asn_SPC_MBMS_L23Configuration_specs_1 = {
	sizeof(struct MBMS_L23Configuration),
	offsetof(struct MBMS_L23Configuration, _asn_ctx),
	offsetof(struct MBMS_L23Configuration, present),
	sizeof(((struct MBMS_L23Configuration *)0)->present),
	asn_MAP_MBMS_L23Configuration_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_L23Configuration = {
	"MBMS-L23Configuration",
	"MBMS-L23Configuration",
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
	&asn_PER_type_MBMS_L23Configuration_constr_1,
	asn_MBR_MBMS_L23Configuration_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_L23Configuration_specs_1	/* Additional specs */
};

