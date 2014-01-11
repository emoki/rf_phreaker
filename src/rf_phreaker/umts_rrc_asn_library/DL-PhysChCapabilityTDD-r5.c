/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityTDD-r5.h"

static asn_per_constraints_t asn_PER_type_tdd384_hspdsch_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_hspdsch_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch, choice.unsupported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unsupported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_hspdsch_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supported at 32758 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unsupported at 32759 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd384_hspdsch_specs_7 = {
	sizeof(struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch),
	offsetof(struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch, _asn_ctx),
	offsetof(struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch, present),
	sizeof(((struct DL_PhysChCapabilityTDD_r5__tdd384_hspdsch *)0)->present),
	asn_MAP_tdd384_hspdsch_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_hspdsch_7 = {
	"tdd384-hspdsch",
	"tdd384-hspdsch",
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
	&asn_PER_type_tdd384_hspdsch_constr_7,
	asn_MBR_tdd384_hspdsch_7,
	2,	/* Elements count */
	&asn_SPC_tdd384_hspdsch_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_PhysChCapabilityTDD_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, maxTS_PerFrame),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxTS_PerFrame,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxTS-PerFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, maxPhysChPerFrame),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxPhysChPerFrame,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxPhysChPerFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, minimumSF),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinimumSF_DL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minimumSF"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, supportOfPDSCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfPDSCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, maxPhysChPerTS),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxPhysChPerTS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxPhysChPerTS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityTDD_r5, tdd384_hspdsch),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd384_hspdsch_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384-hspdsch"
		},
};
static ber_tlv_tag_t asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_PhysChCapabilityTDD_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxTS-PerFrame at 32752 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxPhysChPerFrame at 32753 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* minimumSF at 32754 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* supportOfPDSCH at 32755 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxPhysChPerTS at 32756 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* tdd384-hspdsch at 32758 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_PhysChCapabilityTDD_r5_specs_1 = {
	sizeof(struct DL_PhysChCapabilityTDD_r5),
	offsetof(struct DL_PhysChCapabilityTDD_r5, _asn_ctx),
	asn_MAP_DL_PhysChCapabilityTDD_r5_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityTDD_r5 = {
	"DL-PhysChCapabilityTDD-r5",
	"DL-PhysChCapabilityTDD-r5",
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
	asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1,
	sizeof(asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1[0]), /* 1 */
	asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityTDD_r5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_PhysChCapabilityTDD_r5_1,
	6,	/* Elements count */
	&asn_SPC_DL_PhysChCapabilityTDD_r5_specs_1	/* Additional specs */
};

