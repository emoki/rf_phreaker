/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PLMN-Type.h"

static asn_per_constraints_t asn_PER_type_PLMN_Type_constr_1 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_gsm_MAP_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-Identity"
		},
};
static ber_tlv_tag_t asn_DEF_gsm_MAP_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_gsm_MAP_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* plmn-Identity at 10933 */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_MAP_specs_2 = {
	sizeof(struct PLMN_Type__gsm_MAP),
	offsetof(struct PLMN_Type__gsm_MAP, _asn_ctx),
	asn_MAP_gsm_MAP_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_MAP_2 = {
	"gsm-MAP",
	"gsm-MAP",
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
	asn_DEF_gsm_MAP_tags_2,
	sizeof(asn_DEF_gsm_MAP_tags_2)
		/sizeof(asn_DEF_gsm_MAP_tags_2[0]) - 1, /* 1 */
	asn_DEF_gsm_MAP_tags_2,	/* Same as above */
	sizeof(asn_DEF_gsm_MAP_tags_2)
		/sizeof(asn_DEF_gsm_MAP_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_gsm_MAP_2,
	1,	/* Elements count */
	&asn_SPC_gsm_MAP_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ansi_41_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__ansi_41, p_REV),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_REV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-REV"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__ansi_41, min_P_REV),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Min_P_REV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"min-P-REV"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__ansi_41, sid),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__ansi_41, nid),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nid"
		},
};
static ber_tlv_tag_t asn_DEF_ansi_41_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ansi_41_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p-REV at 10935 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* min-P-REV at 10936 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sid at 10937 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nid at 10939 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ansi_41_specs_4 = {
	sizeof(struct PLMN_Type__ansi_41),
	offsetof(struct PLMN_Type__ansi_41, _asn_ctx),
	asn_MAP_ansi_41_tag2el_4,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ansi_41_4 = {
	"ansi-41",
	"ansi-41",
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
	asn_DEF_ansi_41_tags_4,
	sizeof(asn_DEF_ansi_41_tags_4)
		/sizeof(asn_DEF_ansi_41_tags_4[0]) - 1, /* 1 */
	asn_DEF_ansi_41_tags_4,	/* Same as above */
	sizeof(asn_DEF_ansi_41_tags_4)
		/sizeof(asn_DEF_ansi_41_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ansi_41_4,
	4,	/* Elements count */
	&asn_SPC_ansi_41_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_gsm_MAP_and_ANSI_41_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, p_REV),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_REV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-REV"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, min_P_REV),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Min_P_REV,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"min-P-REV"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, sid),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, nid),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nid"
		},
};
static ber_tlv_tag_t asn_DEF_gsm_MAP_and_ANSI_41_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_gsm_MAP_and_ANSI_41_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity at 10941 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* p-REV at 10942 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* min-P-REV at 10943 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sid at 10944 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nid at 10946 */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_MAP_and_ANSI_41_specs_9 = {
	sizeof(struct PLMN_Type__gsm_MAP_and_ANSI_41),
	offsetof(struct PLMN_Type__gsm_MAP_and_ANSI_41, _asn_ctx),
	asn_MAP_gsm_MAP_and_ANSI_41_tag2el_9,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_MAP_and_ANSI_41_9 = {
	"gsm-MAP-and-ANSI-41",
	"gsm-MAP-and-ANSI-41",
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
	asn_DEF_gsm_MAP_and_ANSI_41_tags_9,
	sizeof(asn_DEF_gsm_MAP_and_ANSI_41_tags_9)
		/sizeof(asn_DEF_gsm_MAP_and_ANSI_41_tags_9[0]) - 1, /* 1 */
	asn_DEF_gsm_MAP_and_ANSI_41_tags_9,	/* Same as above */
	sizeof(asn_DEF_gsm_MAP_and_ANSI_41_tags_9)
		/sizeof(asn_DEF_gsm_MAP_and_ANSI_41_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_gsm_MAP_and_ANSI_41_9,
	5,	/* Elements count */
	&asn_SPC_gsm_MAP_and_ANSI_41_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PLMN_Type_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type, choice.gsm_MAP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_gsm_MAP_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-MAP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type, choice.ansi_41),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ansi_41_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ansi-41"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type, choice.gsm_MAP_and_ANSI_41),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_gsm_MAP_and_ANSI_41_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-MAP-and-ANSI-41"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_Type, choice.spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spare"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PLMN_Type_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm-MAP at 10933 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ansi-41 at 10935 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gsm-MAP-and-ANSI-41 at 10941 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare at 10947 */
};
static asn_CHOICE_specifics_t asn_SPC_PLMN_Type_specs_1 = {
	sizeof(struct PLMN_Type),
	offsetof(struct PLMN_Type, _asn_ctx),
	offsetof(struct PLMN_Type, present),
	sizeof(((struct PLMN_Type *)0)->present),
	asn_MAP_PLMN_Type_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_Type = {
	"PLMN-Type",
	"PLMN-Type",
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
	&asn_PER_type_PLMN_Type_constr_1,
	asn_MBR_PLMN_Type_1,
	4,	/* Elements count */
	&asn_SPC_PLMN_Type_specs_1	/* Additional specs */
};

