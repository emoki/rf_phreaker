/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DL-InformationPerSecondaryRL.h"

static asn_per_constraints_t asn_PER_type_e_RGCH_Info_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_e_RGCH_Info_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerSecondaryRL__e_RGCH_Info, choice.e_RGCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RGCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RGCH-Information"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerSecondaryRL__e_RGCH_Info, choice.releaseIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"releaseIndicator"
		},
};
static asn_TYPE_tag2member_t asn_MAP_e_RGCH_Info_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RGCH-Information at 11496 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* releaseIndicator at 11497 */
};
static asn_CHOICE_specifics_t asn_SPC_e_RGCH_Info_specs_7 = {
	sizeof(struct DL_InformationPerSecondaryRL__e_RGCH_Info),
	offsetof(struct DL_InformationPerSecondaryRL__e_RGCH_Info, _asn_ctx),
	offsetof(struct DL_InformationPerSecondaryRL__e_RGCH_Info, present),
	sizeof(((struct DL_InformationPerSecondaryRL__e_RGCH_Info *)0)->present),
	asn_MAP_e_RGCH_Info_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_RGCH_Info_7 = {
	"e-RGCH-Info",
	"e-RGCH-Info",
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
	&asn_PER_type_e_RGCH_Info_constr_7,
	asn_MBR_e_RGCH_Info_7,
	2,	/* Elements count */
	&asn_SPC_e_RGCH_Info_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DL_InformationPerSecondaryRL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerSecondaryRL, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCPICH-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_InformationPerSecondaryRL, cell_id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cell-id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_InformationPerSecondaryRL, dl_FDPCHInfoPerRL_SecULFreq),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_FDPCH_InfoPerRL_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-FDPCHInfoPerRL-SecULFreq"
		},
	{ ATF_POINTER, 3, offsetof(struct DL_InformationPerSecondaryRL, e_AGCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_AGCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-AGCH-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct DL_InformationPerSecondaryRL, e_HICH_Information),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_HICH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-HICH-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_InformationPerSecondaryRL, e_RGCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_e_RGCH_Info_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RGCH-Info"
		},
};
static int asn_MAP_DL_InformationPerSecondaryRL_oms_1[] = { 1, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_DL_InformationPerSecondaryRL_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_InformationPerSecondaryRL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* primaryCPICH-Info at 11490 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cell-id at 11491 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-FDPCHInfoPerRL-SecULFreq at 11492 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-AGCH-Information at 11493 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* e-HICH-Information at 11494 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* e-RGCH-Info at 11496 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_InformationPerSecondaryRL_specs_1 = {
	sizeof(struct DL_InformationPerSecondaryRL),
	offsetof(struct DL_InformationPerSecondaryRL, _asn_ctx),
	asn_MAP_DL_InformationPerSecondaryRL_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_DL_InformationPerSecondaryRL_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_InformationPerSecondaryRL = {
	"DL-InformationPerSecondaryRL",
	"DL-InformationPerSecondaryRL",
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
	asn_DEF_DL_InformationPerSecondaryRL_tags_1,
	sizeof(asn_DEF_DL_InformationPerSecondaryRL_tags_1)
		/sizeof(asn_DEF_DL_InformationPerSecondaryRL_tags_1[0]), /* 1 */
	asn_DEF_DL_InformationPerSecondaryRL_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_InformationPerSecondaryRL_tags_1)
		/sizeof(asn_DEF_DL_InformationPerSecondaryRL_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_InformationPerSecondaryRL_1,
	6,	/* Elements count */
	&asn_SPC_DL_InformationPerSecondaryRL_specs_1	/* Additional specs */
};

