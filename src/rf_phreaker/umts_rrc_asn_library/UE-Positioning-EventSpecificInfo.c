/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-EventSpecificInfo.h"

static asn_per_constraints_t asn_PER_type_UE_Positioning_EventSpecificInfo_constr_1 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UE_Positioning_EventSpecificInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7a),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdPositionChange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e7a"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7b),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdSFN_SFN_Change,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e7b"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_EventSpecificInfo, choice.e7c),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThresholdSFN_GPS_TOW,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e7c"
		},
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_EventSpecificInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e7a at 27441 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e7b at 27442 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* e7c at 27444 */
};
static asn_CHOICE_specifics_t asn_SPC_UE_Positioning_EventSpecificInfo_specs_1 = {
	sizeof(struct UE_Positioning_EventSpecificInfo),
	offsetof(struct UE_Positioning_EventSpecificInfo, _asn_ctx),
	offsetof(struct UE_Positioning_EventSpecificInfo, present),
	sizeof(((struct UE_Positioning_EventSpecificInfo *)0)->present),
	asn_MAP_UE_Positioning_EventSpecificInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_EventSpecificInfo = {
	"UE-Positioning-EventSpecificInfo",
	"UE-Positioning-EventSpecificInfo",
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
	&asn_PER_type_UE_Positioning_EventSpecificInfo_constr_1,
	asn_MBR_UE_Positioning_EventSpecificInfo_1,
	3,	/* Elements count */
	&asn_SPC_UE_Positioning_EventSpecificInfo_specs_1	/* Additional specs */
};

