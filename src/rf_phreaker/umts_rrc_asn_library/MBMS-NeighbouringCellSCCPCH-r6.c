/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-NeighbouringCellSCCPCH-r6.h"

static asn_per_constraints_t asn_PER_type_layer1Combining_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining__fdd, softComb_TimingOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SoftComb_TimingOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"softComb-TimingOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining__fdd, mbms_L1CombiningTransmTimeDiff),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningTransmTimeDiff,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-L1CombiningTransmTimeDiff"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining__fdd, mbms_L1CombiningSchedule),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-L1CombiningSchedule"
		},
};
static int asn_MAP_fdd_oms_5[] = { 2 };
static ber_tlv_tag_t asn_DEF_fdd_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* softComb-TimingOffset at 30783 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-L1CombiningTransmTimeDiff at 30784 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mbms-L1CombiningSchedule at 30785 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_5 = {
	sizeof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining__fdd),
	offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_5,
	3,	/* Count of tags in the map */
	asn_MAP_fdd_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_5 = {
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
	asn_DEF_fdd_tags_5,
	sizeof(asn_DEF_fdd_tags_5)
		/sizeof(asn_DEF_fdd_tags_5[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_5,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_5)
		/sizeof(asn_DEF_fdd_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_5,
	3,	/* Elements count */
	&asn_SPC_fdd_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_layer1Combining_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_layer1Combining_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 30783 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 30787 */
};
static asn_CHOICE_specifics_t asn_SPC_layer1Combining_specs_4 = {
	sizeof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining),
	offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining, _asn_ctx),
	offsetof(struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining, present),
	sizeof(((struct MBMS_NeighbouringCellSCCPCH_r6__layer1Combining *)0)->present),
	asn_MAP_layer1Combining_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_layer1Combining_4 = {
	"layer1Combining",
	"layer1Combining",
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
	&asn_PER_type_layer1Combining_constr_4,
	asn_MBR_layer1Combining_4,
	2,	/* Elements count */
	&asn_SPC_layer1Combining_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_NeighbouringCellSCCPCH_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6, secondaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_CommonPhyChIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondaryCCPCH-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6, secondaryCCPCHPwrOffsetDiff),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SCCPCHPwrOffsetDiff,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondaryCCPCHPwrOffsetDiff"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6, layer1Combining),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_layer1Combining_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"layer1Combining"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_NeighbouringCellSCCPCH_r6, mbms_L23Configuration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MBMS_L23Configuration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-L23Configuration"
		},
};
static int asn_MAP_MBMS_NeighbouringCellSCCPCH_r6_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_NeighbouringCellSCCPCH_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryCCPCH-Info at 30779 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* secondaryCCPCHPwrOffsetDiff at 30780 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* layer1Combining at 30786 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mbms-L23Configuration at 30790 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_NeighbouringCellSCCPCH_r6_specs_1 = {
	sizeof(struct MBMS_NeighbouringCellSCCPCH_r6),
	offsetof(struct MBMS_NeighbouringCellSCCPCH_r6, _asn_ctx),
	asn_MAP_MBMS_NeighbouringCellSCCPCH_r6_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MBMS_NeighbouringCellSCCPCH_r6_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_NeighbouringCellSCCPCH_r6 = {
	"MBMS-NeighbouringCellSCCPCH-r6",
	"MBMS-NeighbouringCellSCCPCH-r6",
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
	asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1,
	sizeof(asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1)
		/sizeof(asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1)
		/sizeof(asn_DEF_MBMS_NeighbouringCellSCCPCH_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_NeighbouringCellSCCPCH_r6_1,
	4,	/* Elements count */
	&asn_SPC_MBMS_NeighbouringCellSCCPCH_r6_specs_1	/* Additional specs */
};

