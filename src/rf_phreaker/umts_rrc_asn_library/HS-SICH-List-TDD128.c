/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HS-SICH-List-TDD128.h"

static int
memb_hS_SCCH_Index_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_hS_SCCH_Index_constr_4 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_Member_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_HS_SICH_List_TDD128_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_implicit_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct implicit, hS_SCCH_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_hS_SCCH_Index_constraint_3,
		&asn_PER_memb_hS_SCCH_Index_constr_4,
		0,
		"hS-SCCH-Index"
		},
};
static ber_tlv_tag_t asn_DEF_implicit_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_implicit_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* hS-SCCH-Index at 18760 */
};
static asn_SEQUENCE_specifics_t asn_SPC_implicit_specs_3 = {
	sizeof(struct implicit),
	offsetof(struct implicit, _asn_ctx),
	asn_MAP_implicit_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_implicit_3 = {
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
	asn_DEF_implicit_tags_3,
	sizeof(asn_DEF_implicit_tags_3)
		/sizeof(asn_DEF_implicit_tags_3[0]) - 1, /* 1 */
	asn_DEF_implicit_tags_3,	/* Same as above */
	sizeof(asn_DEF_implicit_tags_3)
		/sizeof(asn_DEF_implicit_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_implicit_3,
	1,	/* Elements count */
	&asn_SPC_implicit_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_explicit_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct explicit, hS_SICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SICH_Configuration_TDD128_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hS-SICH-Info"
		},
};
static ber_tlv_tag_t asn_DEF_explicit_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_explicit_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* hS-SICH-Info at 18764 */
};
static asn_SEQUENCE_specifics_t asn_SPC_explicit_specs_5 = {
	sizeof(struct explicit),
	offsetof(struct explicit, _asn_ctx),
	asn_MAP_explicit_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_explicit_5 = {
	"explicit",
	"explicit",
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
	asn_DEF_explicit_tags_5,
	sizeof(asn_DEF_explicit_tags_5)
		/sizeof(asn_DEF_explicit_tags_5[0]) - 1, /* 1 */
	asn_DEF_explicit_tags_5,	/* Same as above */
	sizeof(asn_DEF_explicit_tags_5)
		/sizeof(asn_DEF_explicit_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_explicit_5,
	1,	/* Elements count */
	&asn_SPC_explicit_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_List_TDD128__Member, choice.implicit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_implicit_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"implicit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SICH_List_TDD128__Member, choice.explicit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_explicit_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicit"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* implicit at 18761 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* explicit at 18764 */
};
static asn_CHOICE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct HS_SICH_List_TDD128__Member),
	offsetof(struct HS_SICH_List_TDD128__Member, _asn_ctx),
	offsetof(struct HS_SICH_List_TDD128__Member, present),
	sizeof(((struct HS_SICH_List_TDD128__Member *)0)->present),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"CHOICE",
	"CHOICE",
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
	&asn_PER_type_Member_constr_2,
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SICH_List_TDD128_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_HS_SICH_List_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_HS_SICH_List_TDD128_specs_1 = {
	sizeof(struct HS_SICH_List_TDD128),
	offsetof(struct HS_SICH_List_TDD128, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_HS_SICH_List_TDD128 = {
	"HS-SICH-List-TDD128",
	"HS-SICH-List-TDD128",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_HS_SICH_List_TDD128_tags_1,
	sizeof(asn_DEF_HS_SICH_List_TDD128_tags_1)
		/sizeof(asn_DEF_HS_SICH_List_TDD128_tags_1[0]), /* 1 */
	asn_DEF_HS_SICH_List_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SICH_List_TDD128_tags_1)
		/sizeof(asn_DEF_HS_SICH_List_TDD128_tags_1[0]), /* 1 */
	&asn_PER_type_HS_SICH_List_TDD128_constr_1,
	asn_MBR_HS_SICH_List_TDD128_1,
	1,	/* Single element */
	&asn_SPC_HS_SICH_List_TDD128_specs_1	/* Additional specs */
};

