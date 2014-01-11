/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UL-DPCHpowerControlInfoForCommonEDCH.h"

static asn_TYPE_member_t asn_MBR_UL_DPCHpowerControlInfoForCommonEDCH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCHpowerControlInfoForCommonEDCH, powerControlAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerControlAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerControlAlgorithm"
		},
	{ ATF_POINTER, 3, offsetof(struct UL_DPCHpowerControlInfoForCommonEDCH, deltaACK),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaACK"
		},
	{ ATF_POINTER, 2, offsetof(struct UL_DPCHpowerControlInfoForCommonEDCH, deltaNACK),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaNACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaNACK"
		},
	{ ATF_POINTER, 1, offsetof(struct UL_DPCHpowerControlInfoForCommonEDCH, ack_NACK_repetition_factor),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ACK_NACK_repetitionFactor,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ack-NACK-repetition-factor"
		},
};
static int asn_MAP_UL_DPCHpowerControlInfoForCommonEDCH_oms_1[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UL_DPCHpowerControlInfoForCommonEDCH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerControlAlgorithm at 21770 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaACK at 21771 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaNACK at 21772 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ack-NACK-repetition-factor at 21773 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_DPCHpowerControlInfoForCommonEDCH_specs_1 = {
	sizeof(struct UL_DPCHpowerControlInfoForCommonEDCH),
	offsetof(struct UL_DPCHpowerControlInfoForCommonEDCH, _asn_ctx),
	asn_MAP_UL_DPCHpowerControlInfoForCommonEDCH_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UL_DPCHpowerControlInfoForCommonEDCH_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH = {
	"UL-DPCHpowerControlInfoForCommonEDCH",
	"UL-DPCHpowerControlInfoForCommonEDCH",
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
	asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1,
	sizeof(asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1)
		/sizeof(asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1[0]), /* 1 */
	asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1)
		/sizeof(asn_DEF_UL_DPCHpowerControlInfoForCommonEDCH_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_DPCHpowerControlInfoForCommonEDCH_1,
	4,	/* Elements count */
	&asn_SPC_UL_DPCHpowerControlInfoForCommonEDCH_specs_1	/* Additional specs */
};

