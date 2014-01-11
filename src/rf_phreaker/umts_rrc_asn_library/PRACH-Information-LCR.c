/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PRACH-Information-LCR.h"

static asn_TYPE_member_t asn_MBR_PRACH_Information_LCR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Information_LCR, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_PRACH_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Information_LCR, prach_ChanCodes_list_LCR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_ChanCodes_List_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-ChanCodes-list-LCR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PRACH_Information_LCR, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
	{ ATF_POINTER, 1, offsetof(struct PRACH_Information_LCR, fpach_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FPACH_Info_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fpach-Info"
		},
};
static int asn_MAP_PRACH_Information_LCR_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_PRACH_Information_LCR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PRACH_Information_LCR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot at 19733 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-ChanCodes-list-LCR at 19734 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleShiftAndBurstType at 19735 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* fpach-Info at 19736 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PRACH_Information_LCR_specs_1 = {
	sizeof(struct PRACH_Information_LCR),
	offsetof(struct PRACH_Information_LCR, _asn_ctx),
	asn_MAP_PRACH_Information_LCR_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PRACH_Information_LCR_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_Information_LCR = {
	"PRACH-Information-LCR",
	"PRACH-Information-LCR",
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
	asn_DEF_PRACH_Information_LCR_tags_1,
	sizeof(asn_DEF_PRACH_Information_LCR_tags_1)
		/sizeof(asn_DEF_PRACH_Information_LCR_tags_1[0]), /* 1 */
	asn_DEF_PRACH_Information_LCR_tags_1,	/* Same as above */
	sizeof(asn_DEF_PRACH_Information_LCR_tags_1)
		/sizeof(asn_DEF_PRACH_Information_LCR_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PRACH_Information_LCR_1,
	4,	/* Elements count */
	&asn_SPC_PRACH_Information_LCR_specs_1	/* Additional specs */
};

