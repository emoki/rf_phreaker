/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportingQuantityForRACH.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__fdd, intraFreqRepQuantityRACH_FDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqRepQuantityRACH_FDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqRepQuantityRACH-FDD"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* intraFreqRepQuantityRACH-FDD at 25179 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__fdd),
	offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
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
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_4,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__tdd, intraFreqRepQuantityRACH_TDDList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqRepQuantityRACH_TDDList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqRepQuantityRACH-TDDList"
		},
};
static ber_tlv_tag_t asn_DEF_tdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* intraFreqRepQuantityRACH-TDDList at 25182 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_6 = {
	sizeof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__tdd),
	offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_6 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_6,
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_6,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 25179 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 25182 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo),
	offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo, _asn_ctx),
	offsetof(struct IntraFreqReportingQuantityForRACH__modeSpecificInfo, present),
	sizeof(((struct IntraFreqReportingQuantityForRACH__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
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
	&asn_PER_type_modeSpecificInfo_constr_3,
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_IntraFreqReportingQuantityForRACH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH, sfn_SFN_OTD_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SFN_SFN_OTD_Type,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sfn-SFN-OTD-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportingQuantityForRACH, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static ber_tlv_tag_t asn_DEF_IntraFreqReportingQuantityForRACH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IntraFreqReportingQuantityForRACH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfn-SFN-OTD-Type at 25175 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* modeSpecificInfo at 25179 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntraFreqReportingQuantityForRACH_specs_1 = {
	sizeof(struct IntraFreqReportingQuantityForRACH),
	offsetof(struct IntraFreqReportingQuantityForRACH, _asn_ctx),
	asn_MAP_IntraFreqReportingQuantityForRACH_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingQuantityForRACH = {
	"IntraFreqReportingQuantityForRACH",
	"IntraFreqReportingQuantityForRACH",
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
	asn_DEF_IntraFreqReportingQuantityForRACH_tags_1,
	sizeof(asn_DEF_IntraFreqReportingQuantityForRACH_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingQuantityForRACH_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqReportingQuantityForRACH_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqReportingQuantityForRACH_tags_1)
		/sizeof(asn_DEF_IntraFreqReportingQuantityForRACH_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IntraFreqReportingQuantityForRACH_1,
	2,	/* Elements count */
	&asn_SPC_IntraFreqReportingQuantityForRACH_specs_1	/* Additional specs */
};

