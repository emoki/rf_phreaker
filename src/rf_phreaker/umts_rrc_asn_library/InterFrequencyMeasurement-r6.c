/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/InterFrequencyMeasurement-r6.h"

static asn_TYPE_member_t asn_MBR_InterFrequencyMeasurement_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFrequencyMeasurement_r6, interFreqCellInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCellInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqCellInfoList"
		},
	{ ATF_POINTER, 4, offsetof(struct InterFrequencyMeasurement_r6, interFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFrequencyMeasurement_r6, interFreqReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqReportingQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqReportingQuantity"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFrequencyMeasurement_r6, measurementValidity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementValidity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementValidity"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFrequencyMeasurement_r6, interFreqSetUpdate),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UE_AutonomousUpdateMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqSetUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFrequencyMeasurement_r6, reportCriteria),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InterFreqReportCriteria_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportCriteria"
		},
};
static int asn_MAP_InterFrequencyMeasurement_r6_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_InterFrequencyMeasurement_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InterFrequencyMeasurement_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCellInfoList at 24486 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqMeasQuantity at 24487 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interFreqReportingQuantity at 24488 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measurementValidity at 24489 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interFreqSetUpdate at 24490 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* reportCriteria at 24492 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InterFrequencyMeasurement_r6_specs_1 = {
	sizeof(struct InterFrequencyMeasurement_r6),
	offsetof(struct InterFrequencyMeasurement_r6, _asn_ctx),
	asn_MAP_InterFrequencyMeasurement_r6_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_InterFrequencyMeasurement_r6_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r6 = {
	"InterFrequencyMeasurement-r6",
	"InterFrequencyMeasurement-r6",
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
	asn_DEF_InterFrequencyMeasurement_r6_tags_1,
	sizeof(asn_DEF_InterFrequencyMeasurement_r6_tags_1)
		/sizeof(asn_DEF_InterFrequencyMeasurement_r6_tags_1[0]), /* 1 */
	asn_DEF_InterFrequencyMeasurement_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFrequencyMeasurement_r6_tags_1)
		/sizeof(asn_DEF_InterFrequencyMeasurement_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InterFrequencyMeasurement_r6_1,
	6,	/* Elements count */
	&asn_SPC_InterFrequencyMeasurement_r6_specs_1	/* Additional specs */
};

