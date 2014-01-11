/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-MICHConfigurationInfo-v770ext.h"

static asn_per_constraints_t asn_PER_type_mode_constr_2 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd384, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShiftAndBurstType at 30702 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_3 = {
	sizeof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd384),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_3 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_3,
	sizeof(asn_DEF_tdd384_tags_3)
		/sizeof(asn_DEF_tdd384_tags_3[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_3,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_3)
		/sizeof(asn_DEF_tdd384_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_3,
	1,	/* Elements count */
	&asn_SPC_tdd384_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd768_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd768, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_VHCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
};
static ber_tlv_tag_t asn_DEF_tdd768_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd768_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShiftAndBurstType at 30708 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd768_specs_5 = {
	sizeof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd768),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd768, _asn_ctx),
	asn_MAP_tdd768_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd768_5 = {
	"tdd768",
	"tdd768",
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
	asn_DEF_tdd768_tags_5,
	sizeof(asn_DEF_tdd768_tags_5)
		/sizeof(asn_DEF_tdd768_tags_5[0]) - 1, /* 1 */
	asn_DEF_tdd768_tags_5,	/* Same as above */
	sizeof(asn_DEF_tdd768_tags_5)
		/sizeof(asn_DEF_tdd768_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd768_5,
	1,	/* Elements count */
	&asn_SPC_tdd768_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_7[] = {
	{ ATF_POINTER, 1, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd128, mbsfnSpecialTimeSlot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeSlotLCR_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbsfnSpecialTimeSlot"
		},
};
static int asn_MAP_tdd128_oms_7[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd128_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mbsfnSpecialTimeSlot at 30710 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_7 = {
	sizeof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd128),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_7 = {
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
	asn_DEF_tdd128_tags_7,
	sizeof(asn_DEF_tdd128_tags_7)
		/sizeof(asn_DEF_tdd128_tags_7[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_7,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_7)
		/sizeof(asn_DEF_tdd128_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_7,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mode_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd768_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd768"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mode_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 30702 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd768 at 30708 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128 at 30710 */
};
static asn_CHOICE_specifics_t asn_SPC_mode_specs_2 = {
	sizeof(struct MBMS_MICHConfigurationInfo_v770ext__mode),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode, _asn_ctx),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext__mode, present),
	sizeof(((struct MBMS_MICHConfigurationInfo_v770ext__mode *)0)->present),
	asn_MAP_mode_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mode_2 = {
	"mode",
	"mode",
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
	&asn_PER_type_mode_constr_2,
	asn_MBR_mode_2,
	3,	/* Elements count */
	&asn_SPC_mode_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_MICHConfigurationInfo_v770ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_v770ext, mode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mode_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mode"
		},
};
static ber_tlv_tag_t asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_MICHConfigurationInfo_v770ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mode at 30702 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_MICHConfigurationInfo_v770ext_specs_1 = {
	sizeof(struct MBMS_MICHConfigurationInfo_v770ext),
	offsetof(struct MBMS_MICHConfigurationInfo_v770ext, _asn_ctx),
	asn_MAP_MBMS_MICHConfigurationInfo_v770ext_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_MICHConfigurationInfo_v770ext = {
	"MBMS-MICHConfigurationInfo-v770ext",
	"MBMS-MICHConfigurationInfo-v770ext",
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
	asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1,
	sizeof(asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1)
		/sizeof(asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1[0]), /* 1 */
	asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1)
		/sizeof(asn_DEF_MBMS_MICHConfigurationInfo_v770ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_MICHConfigurationInfo_v770ext_1,
	1,	/* Elements count */
	&asn_SPC_MBMS_MICHConfigurationInfo_v770ext_specs_1	/* Additional specs */
};

