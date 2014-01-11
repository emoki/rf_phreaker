/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PICH-Info-HCR-VHCR-r7.h"

static asn_per_constraints_t asn_PER_type_channelisationCode_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_channelisationCode_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info_HCR_VHCR_r7__channelisationCode, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_PICH_CCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info_HCR_VHCR_r7__channelisationCode, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD768_PICH_CCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd768"
		},
};
static asn_TYPE_tag2member_t asn_MAP_channelisationCode_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 19663 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd768 at 19665 */
};
static asn_CHOICE_specifics_t asn_SPC_channelisationCode_specs_2 = {
	sizeof(struct PICH_Info_HCR_VHCR_r7__channelisationCode),
	offsetof(struct PICH_Info_HCR_VHCR_r7__channelisationCode, _asn_ctx),
	offsetof(struct PICH_Info_HCR_VHCR_r7__channelisationCode, present),
	sizeof(((struct PICH_Info_HCR_VHCR_r7__channelisationCode *)0)->present),
	asn_MAP_channelisationCode_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelisationCode_2 = {
	"channelisationCode",
	"channelisationCode",
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
	&asn_PER_type_channelisationCode_constr_2,
	asn_MBR_channelisationCode_2,
	2,	/* Elements count */
	&asn_SPC_channelisationCode_specs_2	/* Additional specs */
};

static int asn_DFL_8_set_0(int set_value, void **sptr) {
	PagingIndicatorLength_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_9_set_1(int set_value, void **sptr) {
	N_GAP_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		*st = 1;
		return 0;
	} else {
		/* Test default value 1 */
		return (*st == 1);
	}
}
static int asn_DFL_10_set_2(int set_value, void **sptr) {
	N_PCH_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 2 */
		*st = 2;
		return 0;
	} else {
		/* Test default value 2 */
		return (*st == 2);
	}
}
static asn_TYPE_member_t asn_MBR_PICH_Info_HCR_VHCR_r7_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PICH_Info_HCR_VHCR_r7, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_channelisationCode_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
	{ ATF_POINTER, 1, offsetof(struct PICH_Info_HCR_VHCR_r7, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PICH_Info_HCR_VHCR_r7, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
	{ ATF_POINTER, 4, offsetof(struct PICH_Info_HCR_VHCR_r7, repetitionPeriodLengthOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepPerLengthOffset_PICH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodLengthOffset"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct PICH_Info_HCR_VHCR_r7, pagingIndicatorLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingIndicatorLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_8_set_0,	/* DEFAULT 0 */
		"pagingIndicatorLength"
		},
	{ ATF_POINTER, 2, offsetof(struct PICH_Info_HCR_VHCR_r7, n_GAP),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_GAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_9_set_1,	/* DEFAULT 1 */
		"n-GAP"
		},
	{ ATF_POINTER, 1, offsetof(struct PICH_Info_HCR_VHCR_r7, n_PCH),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_PCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_10_set_2,	/* DEFAULT 2 */
		"n-PCH"
		},
};
static int asn_MAP_PICH_Info_HCR_VHCR_r7_oms_1[] = { 0, 1, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PICH_Info_HCR_VHCR_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCode at 19663 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeslot at 19666 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType at 19667 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodLengthOffset at 19668 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pagingIndicatorLength at 19669 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n-GAP at 19670 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* n-PCH at 19671 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PICH_Info_HCR_VHCR_r7_specs_1 = {
	sizeof(struct PICH_Info_HCR_VHCR_r7),
	offsetof(struct PICH_Info_HCR_VHCR_r7, _asn_ctx),
	asn_MAP_PICH_Info_HCR_VHCR_r7_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PICH_Info_HCR_VHCR_r7_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PICH_Info_HCR_VHCR_r7 = {
	"PICH-Info-HCR-VHCR-r7",
	"PICH-Info-HCR-VHCR-r7",
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
	asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1,
	sizeof(asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1)
		/sizeof(asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1[0]), /* 1 */
	asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1)
		/sizeof(asn_DEF_PICH_Info_HCR_VHCR_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PICH_Info_HCR_VHCR_r7_1,
	7,	/* Elements count */
	&asn_SPC_PICH_Info_HCR_VHCR_r7_specs_1	/* Additional specs */
};

