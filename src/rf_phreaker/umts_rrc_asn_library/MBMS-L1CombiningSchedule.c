/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule.h"

static asn_per_constraints_t asn_PER_type_MBMS_L1CombiningSchedule_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MBMS_L1CombiningSchedule_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_32),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_32,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_64),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_64,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_128),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_256),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_256,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_512),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_512,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_L1CombiningSchedule, choice.cycleLength_1024),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_L1CombiningSchedule_1024,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cycleLength-1024"
		},
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_L1CombiningSchedule_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cycleLength-32 at 30635 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cycleLength-64 at 30636 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cycleLength-128 at 30637 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cycleLength-256 at 30638 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cycleLength-512 at 30639 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* cycleLength-1024 at 30641 */
};
static asn_CHOICE_specifics_t asn_SPC_MBMS_L1CombiningSchedule_specs_1 = {
	sizeof(struct MBMS_L1CombiningSchedule),
	offsetof(struct MBMS_L1CombiningSchedule, _asn_ctx),
	offsetof(struct MBMS_L1CombiningSchedule, present),
	sizeof(((struct MBMS_L1CombiningSchedule *)0)->present),
	asn_MAP_MBMS_L1CombiningSchedule_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_L1CombiningSchedule = {
	"MBMS-L1CombiningSchedule",
	"MBMS-L1CombiningSchedule",
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
	&asn_PER_type_MBMS_L1CombiningSchedule_constr_1,
	asn_MBR_MBMS_L1CombiningSchedule_1,
	6,	/* Elements count */
	&asn_SPC_MBMS_L1CombiningSchedule_specs_1	/* Additional specs */
};

