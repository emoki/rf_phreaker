/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PICH-ForHSDPASupportedPaging-TDD128.h"

static asn_per_constraints_t asn_PER_type_PICH_ForHSDPASupportedPaging_TDD128_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_implicit_2[] = {
	{ ATF_POINTER, 1, offsetof(struct PICH_ForHSDPASupportedPaging_TDD128__implicit, occurrenceSequenceNumberOfPICH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OccurrenceSequenceNumberOfPICH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"occurrenceSequenceNumberOfPICH"
		},
};
static int asn_MAP_implicit_oms_2[] = { 0 };
static ber_tlv_tag_t asn_DEF_implicit_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_implicit_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* occurrenceSequenceNumberOfPICH at 19639 */
};
static asn_SEQUENCE_specifics_t asn_SPC_implicit_specs_2 = {
	sizeof(struct PICH_ForHSDPASupportedPaging_TDD128__implicit),
	offsetof(struct PICH_ForHSDPASupportedPaging_TDD128__implicit, _asn_ctx),
	asn_MAP_implicit_tag2el_2,
	1,	/* Count of tags in the map */
	asn_MAP_implicit_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_implicit_2 = {
	"implicit",
	"implicit",
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
	asn_DEF_implicit_tags_2,
	sizeof(asn_DEF_implicit_tags_2)
		/sizeof(asn_DEF_implicit_tags_2[0]) - 1, /* 1 */
	asn_DEF_implicit_tags_2,	/* Same as above */
	sizeof(asn_DEF_implicit_tags_2)
		/sizeof(asn_DEF_implicit_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_implicit_2,
	1,	/* Elements count */
	&asn_SPC_implicit_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PICH_ForHSDPASupportedPaging_TDD128_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_ForHSDPASupportedPaging_TDD128, choice.implicit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_implicit_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"implicit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_ForHSDPASupportedPaging_TDD128, choice.explicit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PICH_Info_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicit"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PICH_ForHSDPASupportedPaging_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* implicit at 19639 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicit at 19642 */
};
static asn_CHOICE_specifics_t asn_SPC_PICH_ForHSDPASupportedPaging_TDD128_specs_1 = {
	sizeof(struct PICH_ForHSDPASupportedPaging_TDD128),
	offsetof(struct PICH_ForHSDPASupportedPaging_TDD128, _asn_ctx),
	offsetof(struct PICH_ForHSDPASupportedPaging_TDD128, present),
	sizeof(((struct PICH_ForHSDPASupportedPaging_TDD128 *)0)->present),
	asn_MAP_PICH_ForHSDPASupportedPaging_TDD128_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PICH_ForHSDPASupportedPaging_TDD128 = {
	"PICH-ForHSDPASupportedPaging-TDD128",
	"PICH-ForHSDPASupportedPaging-TDD128",
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
	&asn_PER_type_PICH_ForHSDPASupportedPaging_TDD128_constr_1,
	asn_MBR_PICH_ForHSDPASupportedPaging_TDD128_1,
	2,	/* Elements count */
	&asn_SPC_PICH_ForHSDPASupportedPaging_TDD128_specs_1	/* Additional specs */
};

