/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UL-ChannelRequirement-r5.h"

static asn_per_constraints_t asn_PER_type_UL_ChannelRequirement_r5_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UL_ChannelRequirement_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ChannelRequirement_r5, choice.ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_ChannelRequirement_r5, choice.dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
};
static asn_TYPE_tag2member_t asn_MAP_UL_ChannelRequirement_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 21388 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy at 21392 */
};
static asn_CHOICE_specifics_t asn_SPC_UL_ChannelRequirement_r5_specs_1 = {
	sizeof(struct UL_ChannelRequirement_r5),
	offsetof(struct UL_ChannelRequirement_r5, _asn_ctx),
	offsetof(struct UL_ChannelRequirement_r5, present),
	sizeof(((struct UL_ChannelRequirement_r5 *)0)->present),
	asn_MAP_UL_ChannelRequirement_r5_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_ChannelRequirement_r5 = {
	"UL-ChannelRequirement-r5",
	"UL-ChannelRequirement-r5",
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
	&asn_PER_type_UL_ChannelRequirement_r5_constr_1,
	asn_MBR_UL_ChannelRequirement_r5_1,
	2,	/* Elements count */
	&asn_SPC_UL_ChannelRequirement_r5_specs_1	/* Additional specs */
};

