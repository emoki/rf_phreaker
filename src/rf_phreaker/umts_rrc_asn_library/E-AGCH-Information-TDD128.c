/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/E-AGCH-Information-TDD128.h"

static asn_TYPE_member_t asn_MBR_E_AGCH_Information_TDD128_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_AGCH_Information_TDD128, rdi_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rdi-Indicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_AGCH_Information_TDD128, tpc_StepSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPC_StepSizeTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-StepSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_AGCH_Information_TDD128, e_AGCH_Set_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_AGCH_Set_Config_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-AGCH-Set-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_AGCH_Information_TDD128, e_AGCH_BLER_Target),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Bler_Target,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-AGCH-BLER-Target"
		},
};
static ber_tlv_tag_t asn_DEF_E_AGCH_Information_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_E_AGCH_Information_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rdi-Indicator at 17840 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tpc-StepSize at 17841 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e-AGCH-Set-Config at 17842 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* e-AGCH-BLER-Target at 17844 */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_AGCH_Information_TDD128_specs_1 = {
	sizeof(struct E_AGCH_Information_TDD128),
	offsetof(struct E_AGCH_Information_TDD128, _asn_ctx),
	asn_MAP_E_AGCH_Information_TDD128_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_AGCH_Information_TDD128 = {
	"E-AGCH-Information-TDD128",
	"E-AGCH-Information-TDD128",
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
	asn_DEF_E_AGCH_Information_TDD128_tags_1,
	sizeof(asn_DEF_E_AGCH_Information_TDD128_tags_1)
		/sizeof(asn_DEF_E_AGCH_Information_TDD128_tags_1[0]), /* 1 */
	asn_DEF_E_AGCH_Information_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_AGCH_Information_TDD128_tags_1)
		/sizeof(asn_DEF_E_AGCH_Information_TDD128_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_AGCH_Information_TDD128_1,
	4,	/* Elements count */
	&asn_SPC_E_AGCH_Information_TDD128_specs_1	/* Additional specs */
};

