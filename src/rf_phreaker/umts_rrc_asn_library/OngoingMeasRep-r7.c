/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/OngoingMeasRep-r7.h"

static asn_TYPE_member_t asn_MBR_OngoingMeasRep_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OngoingMeasRep_r7, measurementIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OngoingMeasRep_r7, measurementCommandWithType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasurementCommandWithType_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementCommandWithType"
		},
	{ ATF_POINTER, 2, offsetof(struct OngoingMeasRep_r7, measurementReportingMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementReportingMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementReportingMode"
		},
	{ ATF_POINTER, 1, offsetof(struct OngoingMeasRep_r7, additionalMeasurementID_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalMeasurementID_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalMeasurementID-List"
		},
};
static int asn_MAP_OngoingMeasRep_r7_oms_1[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_OngoingMeasRep_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_OngoingMeasRep_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurementIdentity at 32918 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurementCommandWithType at 32919 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurementReportingMode at 32920 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* additionalMeasurementID-List at 32921 */
};
static asn_SEQUENCE_specifics_t asn_SPC_OngoingMeasRep_r7_specs_1 = {
	sizeof(struct OngoingMeasRep_r7),
	offsetof(struct OngoingMeasRep_r7, _asn_ctx),
	asn_MAP_OngoingMeasRep_r7_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_OngoingMeasRep_r7_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OngoingMeasRep_r7 = {
	"OngoingMeasRep-r7",
	"OngoingMeasRep-r7",
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
	asn_DEF_OngoingMeasRep_r7_tags_1,
	sizeof(asn_DEF_OngoingMeasRep_r7_tags_1)
		/sizeof(asn_DEF_OngoingMeasRep_r7_tags_1[0]), /* 1 */
	asn_DEF_OngoingMeasRep_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_OngoingMeasRep_r7_tags_1)
		/sizeof(asn_DEF_OngoingMeasRep_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OngoingMeasRep_r7_1,
	4,	/* Elements count */
	&asn_SPC_OngoingMeasRep_r7_specs_1	/* Additional specs */
};

