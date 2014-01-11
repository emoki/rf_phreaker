/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-TDD128-MultiCarrier.h"

static int
memb_ueSpecificMidamble_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_midambleConfiguration_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ueSpecificMidamble_constr_9 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_6 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_10 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_midambleAllocationMode_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode, choice.commonMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ueSpecificMidamble_constraint_6,
		&asn_PER_memb_ueSpecificMidamble_constr_9,
		0,
		"ueSpecificMidamble"
		},
};
static asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble at 18718 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonMidamble at 18719 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ueSpecificMidamble at 18720 */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_6 = {
	sizeof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode),
	offsetof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode, _asn_ctx),
	offsetof(struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode, present),
	sizeof(((struct HS_SCCH_TDD128_MultiCarrier__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_6,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_6 = {
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
	&asn_PER_type_midambleAllocationMode_constr_6,
	asn_MBR_midambleAllocationMode_6,
	3,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SCCH_TDD128_MultiCarrier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, uarfcn_HS_SCCH_Rx),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UARFCN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uarfcn-HS-SCCH-Rx"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, firstChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_ChannelisationCode_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstChannelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, secondChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_ChannelisationCode_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondChannelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleAllocationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleConfiguration_constraint_1,
		&asn_PER_memb_midambleConfiguration_constr_10,
		0,
		"midambleConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, bler_target),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Bler_Target,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bler-target"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_TDD128_MultiCarrier, hs_sich_configuration),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SICH_Configuration_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-sich-configuration"
		},
};
static ber_tlv_tag_t asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HS_SCCH_TDD128_MultiCarrier_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uarfcn-HS-SCCH-Rx at 18713 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeslotNumber at 18714 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* firstChannelisationCode at 18715 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* secondChannelisationCode at 18716 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* midambleAllocationMode at 18718 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* midambleConfiguration at 18723 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* bler-target at 18724 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* hs-sich-configuration at 18726 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_SCCH_TDD128_MultiCarrier_specs_1 = {
	sizeof(struct HS_SCCH_TDD128_MultiCarrier),
	offsetof(struct HS_SCCH_TDD128_MultiCarrier, _asn_ctx),
	asn_MAP_HS_SCCH_TDD128_MultiCarrier_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_SCCH_TDD128_MultiCarrier = {
	"HS-SCCH-TDD128-MultiCarrier",
	"HS-SCCH-TDD128-MultiCarrier",
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
	asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1,
	sizeof(asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1)
		/sizeof(asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1[0]), /* 1 */
	asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1)
		/sizeof(asn_DEF_HS_SCCH_TDD128_MultiCarrier_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_SCCH_TDD128_MultiCarrier_1,
	8,	/* Elements count */
	&asn_SPC_HS_SCCH_TDD128_MultiCarrier_specs_1	/* Additional specs */
};

