/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CSGCellInfo.h"

static int
memb_numberOfPSCs_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 512)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_numberOfPSCs_constr_5 = {
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (1..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGCellInfo__modeSpecificInfo__fdd, startPSC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"startPSC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSGCellInfo__modeSpecificInfo__fdd, numberOfPSCs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfPSCs_constraint_3,
		&asn_PER_memb_numberOfPSCs_constr_5,
		0,
		"numberOfPSCs"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startPSC at 22814 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* numberOfPSCs at 22815 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_3 = {
	sizeof(struct CSGCellInfo__modeSpecificInfo__fdd),
	offsetof(struct CSGCellInfo__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_3 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_3,
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_3,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_3)
		/sizeof(asn_DEF_fdd_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_3,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGCellInfo__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSGCellInfo__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 22814 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 22817 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_2 = {
	sizeof(struct CSGCellInfo__modeSpecificInfo),
	offsetof(struct CSGCellInfo__modeSpecificInfo, _asn_ctx),
	offsetof(struct CSGCellInfo__modeSpecificInfo, present),
	sizeof(((struct CSGCellInfo__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_2 = {
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
	&asn_PER_type_modeSpecificInfo_constr_2,
	asn_MBR_modeSpecificInfo_2,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CSGCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGCellInfo, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static ber_tlv_tag_t asn_DEF_CSGCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSGCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modeSpecificInfo at 22816 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSGCellInfo_specs_1 = {
	sizeof(struct CSGCellInfo),
	offsetof(struct CSGCellInfo, _asn_ctx),
	asn_MAP_CSGCellInfo_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSGCellInfo = {
	"CSGCellInfo",
	"CSGCellInfo",
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
	asn_DEF_CSGCellInfo_tags_1,
	sizeof(asn_DEF_CSGCellInfo_tags_1)
		/sizeof(asn_DEF_CSGCellInfo_tags_1[0]), /* 1 */
	asn_DEF_CSGCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSGCellInfo_tags_1)
		/sizeof(asn_DEF_CSGCellInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSGCellInfo_1,
	1,	/* Elements count */
	&asn_SPC_CSGCellInfo_specs_1	/* Additional specs */
};

