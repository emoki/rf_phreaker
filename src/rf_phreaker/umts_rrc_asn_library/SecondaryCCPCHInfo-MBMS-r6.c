/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/SecondaryCCPCHInfo-MBMS-r6.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_2 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_7_set_0(int set_value, void **sptr) {
	TimingOffset_t *st = *sptr;
	
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
static asn_TYPE_member_t asn_MBR_fdd_3[] = {
	{ ATF_POINTER, 1, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd, secondaryScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondaryScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd, sttd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sttd-Indicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd, sf_AndCodeNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SF256_AndCodeNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sf-AndCodeNumber"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd, timingOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimingOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_7_set_0,	/* DEFAULT 0 */
		"timingOffset"
		},
};
static int asn_MAP_fdd_oms_3[] = { 0, 3 };
static ber_tlv_tag_t asn_DEF_fdd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryScramblingCode at 20606 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sttd-Indicator at 20607 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf-AndCodeNumber at 20608 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timingOffset at 20609 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_3 = {
	sizeof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_fdd_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
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
	4,	/* Elements count */
	&asn_SPC_fdd_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd384, commonTimeslotInfoMBMS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonTimeslotInfoMBMS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonTimeslotInfoMBMS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd384, downlinkTimeslotsCodes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownlinkTimeslotsCodes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkTimeslotsCodes"
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commonTimeslotInfoMBMS at 20612 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* downlinkTimeslotsCodes at 20614 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_8 = {
	sizeof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd384),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_8 = {
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
	asn_DEF_tdd384_tags_8,
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_8,
	2,	/* Elements count */
	&asn_SPC_tdd384_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd128, commonTimeslotInfoMBMS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonTimeslotInfoMBMS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonTimeslotInfoMBMS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd128, downlinkTimeslotsCodes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DownlinkTimeslotsCodes_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"downlinkTimeslotsCodes"
		},
};
static ber_tlv_tag_t asn_DEF_tdd128_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commonTimeslotInfoMBMS at 20616 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* downlinkTimeslotsCodes at 20618 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_11 = {
	sizeof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd128),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_11 = {
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
	asn_DEF_tdd128_tags_11,
	sizeof(asn_DEF_tdd128_tags_11)
		/sizeof(asn_DEF_tdd128_tags_11[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_11,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_11)
		/sizeof(asn_DEF_tdd128_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_11,
	2,	/* Elements count */
	&asn_SPC_tdd128_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd384_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 20606 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384 at 20612 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128 at 20616 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_2 = {
	sizeof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo, _asn_ctx),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo, present),
	sizeof(((struct SecondaryCCPCHInfo_MBMS_r6__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_2,
	3,	/* Count of tags in the map */
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
	3,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SecondaryCCPCHInfo_MBMS_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCCPCHInfo_MBMS_r6, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static ber_tlv_tag_t asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SecondaryCCPCHInfo_MBMS_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* modeSpecificInfo at 20610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SecondaryCCPCHInfo_MBMS_r6_specs_1 = {
	sizeof(struct SecondaryCCPCHInfo_MBMS_r6),
	offsetof(struct SecondaryCCPCHInfo_MBMS_r6, _asn_ctx),
	asn_MAP_SecondaryCCPCHInfo_MBMS_r6_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SecondaryCCPCHInfo_MBMS_r6 = {
	"SecondaryCCPCHInfo-MBMS-r6",
	"SecondaryCCPCHInfo-MBMS-r6",
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
	asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1,
	sizeof(asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1)
		/sizeof(asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1[0]), /* 1 */
	asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1)
		/sizeof(asn_DEF_SecondaryCCPCHInfo_MBMS_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SecondaryCCPCHInfo_MBMS_r6_1,
	1,	/* Elements count */
	&asn_SPC_SecondaryCCPCHInfo_MBMS_r6_specs_1	/* Additional specs */
};

