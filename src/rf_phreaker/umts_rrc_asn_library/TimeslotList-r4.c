/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/TimeslotList-r4.h"

static int
memb_tdd384_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 14)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_tdd128_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_tdd384_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  14 }	/* (SIZE(1..14)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd128_constr_4 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tdd384_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  14 }	/* (SIZE(1..14)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tdd128_constr_4 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_TimeslotList_r4_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_tdd384_specs_2 = {
	sizeof(struct TimeslotList_r4__tdd384),
	offsetof(struct TimeslotList_r4__tdd384, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_2 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_2,
	sizeof(asn_DEF_tdd384_tags_2)
		/sizeof(asn_DEF_tdd384_tags_2[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_2,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_2)
		/sizeof(asn_DEF_tdd384_tags_2[0]), /* 2 */
	&asn_PER_type_tdd384_constr_2,
	asn_MBR_tdd384_2,
	1,	/* Single element */
	&asn_SPC_tdd384_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_tdd128_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_tdd128_specs_4 = {
	sizeof(struct TimeslotList_r4__tdd128),
	offsetof(struct TimeslotList_r4__tdd128, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_4 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_4,
	sizeof(asn_DEF_tdd128_tags_4)
		/sizeof(asn_DEF_tdd128_tags_4[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_4,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_4)
		/sizeof(asn_DEF_tdd128_tags_4[0]), /* 2 */
	&asn_PER_type_tdd128_constr_4,
	asn_MBR_tdd128_4,
	1,	/* Single element */
	&asn_SPC_tdd128_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TimeslotList_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TimeslotList_r4, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_2,
		memb_tdd384_constraint_1,
		&asn_PER_memb_tdd384_constr_2,
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TimeslotList_r4, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_4,
		memb_tdd128_constraint_1,
		&asn_PER_memb_tdd128_constr_4,
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_TimeslotList_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 21145 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 21148 */
};
static asn_CHOICE_specifics_t asn_SPC_TimeslotList_r4_specs_1 = {
	sizeof(struct TimeslotList_r4),
	offsetof(struct TimeslotList_r4, _asn_ctx),
	offsetof(struct TimeslotList_r4, present),
	sizeof(((struct TimeslotList_r4 *)0)->present),
	asn_MAP_TimeslotList_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TimeslotList_r4 = {
	"TimeslotList-r4",
	"TimeslotList-r4",
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
	&asn_PER_type_TimeslotList_r4_constr_1,
	asn_MBR_TimeslotList_r4_1,
	2,	/* Elements count */
	&asn_SPC_TimeslotList_r4_specs_1	/* Additional specs */
};

