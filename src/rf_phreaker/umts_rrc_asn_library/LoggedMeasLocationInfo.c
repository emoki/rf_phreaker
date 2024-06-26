/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasLocationInfo.h"

static asn_per_constraints_t asn_PER_type_LoggedMeasLocationInfo_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LoggedMeasLocationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasLocationInfo, choice.ellipsoidPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPoint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasLocationInfo, choice.ellipsoidPointAltitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointAltitude"
		},
};
static asn_TYPE_tag2member_t asn_MAP_LoggedMeasLocationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ellipsoidPoint at 25357 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ellipsoidPointAltitude at 25359 */
};
static asn_CHOICE_specifics_t asn_SPC_LoggedMeasLocationInfo_specs_1 = {
	sizeof(struct LoggedMeasLocationInfo),
	offsetof(struct LoggedMeasLocationInfo, _asn_ctx),
	offsetof(struct LoggedMeasLocationInfo, present),
	sizeof(((struct LoggedMeasLocationInfo *)0)->present),
	asn_MAP_LoggedMeasLocationInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasLocationInfo = {
	"LoggedMeasLocationInfo",
	"LoggedMeasLocationInfo",
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
	&asn_PER_type_LoggedMeasLocationInfo_constr_1,
	asn_MBR_LoggedMeasLocationInfo_1,
	2,	/* Elements count */
	&asn_SPC_LoggedMeasLocationInfo_specs_1	/* Additional specs */
};

