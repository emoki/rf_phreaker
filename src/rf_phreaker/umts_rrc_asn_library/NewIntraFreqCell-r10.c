/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCell-r10.h"

static int
memb_sNPLMonitorSetIndicator_TDD128_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_sNPLMonitorSetIndicator_TDD128_constr_7 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd128_6[] = {
	{ ATF_POINTER, 1, offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo__tdd128, sNPLMonitorSetIndicator_TDD128),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_sNPLMonitorSetIndicator_TDD128_constraint_6,
		&asn_PER_memb_sNPLMonitorSetIndicator_TDD128_constr_7,
		0,
		"sNPLMonitorSetIndicator-TDD128"
		},
};
static int asn_MAP_tdd128_oms_6[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd128_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* sNPLMonitorSetIndicator-TDD128 at 26299 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_6 = {
	sizeof(struct NewIntraFreqCell_r10__modeSpecificInfo__tdd128),
	offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_6 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_6,
	sizeof(asn_DEF_tdd128_tags_6)
		/sizeof(asn_DEF_tdd128_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_6)
		/sizeof(asn_DEF_tdd128_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_6,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo, choice.noInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* noInfo at 26297 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 26299 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_4 = {
	sizeof(struct NewIntraFreqCell_r10__modeSpecificInfo),
	offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo, _asn_ctx),
	offsetof(struct NewIntraFreqCell_r10__modeSpecificInfo, present),
	sizeof(((struct NewIntraFreqCell_r10__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_4 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_4,
	asn_MBR_modeSpecificInfo_4,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NewIntraFreqCell_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NewIntraFreqCell_r10, intraFreqCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NewIntraFreqCell_r10, cellInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellInfo_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct NewIntraFreqCell_r10, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static int asn_MAP_NewIntraFreqCell_r10_oms_1[] = { 0, 2 };
static ber_tlv_tag_t asn_DEF_NewIntraFreqCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NewIntraFreqCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqCellID at 26294 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellInfo at 26295 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* modeSpecificInfo at 26297 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NewIntraFreqCell_r10_specs_1 = {
	sizeof(struct NewIntraFreqCell_r10),
	offsetof(struct NewIntraFreqCell_r10, _asn_ctx),
	asn_MAP_NewIntraFreqCell_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NewIntraFreqCell_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NewIntraFreqCell_r10 = {
	"NewIntraFreqCell-r10",
	"NewIntraFreqCell-r10",
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
	asn_DEF_NewIntraFreqCell_r10_tags_1,
	sizeof(asn_DEF_NewIntraFreqCell_r10_tags_1)
		/sizeof(asn_DEF_NewIntraFreqCell_r10_tags_1[0]), /* 1 */
	asn_DEF_NewIntraFreqCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_NewIntraFreqCell_r10_tags_1)
		/sizeof(asn_DEF_NewIntraFreqCell_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NewIntraFreqCell_r10_1,
	3,	/* Elements count */
	&asn_SPC_NewIntraFreqCell_r10_specs_1	/* Additional specs */
};

