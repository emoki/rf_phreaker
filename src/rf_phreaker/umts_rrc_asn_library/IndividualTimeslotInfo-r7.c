/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/IndividualTimeslotInfo-r7.h"

static asn_TYPE_member_t asn_MBR_IndividualTimeslotInfo_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_r7, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_r7, tfci_Existence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfci-Existence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualTimeslotInfo_r7, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
};
static ber_tlv_tag_t asn_DEF_IndividualTimeslotInfo_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IndividualTimeslotInfo_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotNumber at 18889 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tfci-Existence at 18890 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* midambleShiftAndBurstType at 18892 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IndividualTimeslotInfo_r7_specs_1 = {
	sizeof(struct IndividualTimeslotInfo_r7),
	offsetof(struct IndividualTimeslotInfo_r7, _asn_ctx),
	asn_MAP_IndividualTimeslotInfo_r7_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IndividualTimeslotInfo_r7 = {
	"IndividualTimeslotInfo-r7",
	"IndividualTimeslotInfo-r7",
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
	asn_DEF_IndividualTimeslotInfo_r7_tags_1,
	sizeof(asn_DEF_IndividualTimeslotInfo_r7_tags_1)
		/sizeof(asn_DEF_IndividualTimeslotInfo_r7_tags_1[0]), /* 1 */
	asn_DEF_IndividualTimeslotInfo_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndividualTimeslotInfo_r7_tags_1)
		/sizeof(asn_DEF_IndividualTimeslotInfo_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IndividualTimeslotInfo_r7_1,
	3,	/* Elements count */
	&asn_SPC_IndividualTimeslotInfo_r7_specs_1	/* Additional specs */
};

