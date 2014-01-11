/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/IntraFrequencyMeasurement-r7.h"

static asn_TYPE_member_t asn_MBR_IntraFrequencyMeasurement_r7_1[] = {
	{ ATF_POINTER, 5, offsetof(struct IntraFrequencyMeasurement_r7, intraFreqCellInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqCellInfoList"
		},
	{ ATF_POINTER, 4, offsetof(struct IntraFrequencyMeasurement_r7, intraFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct IntraFrequencyMeasurement_r7, intraFreqReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqReportingQuantity"
		},
	{ ATF_POINTER, 2, offsetof(struct IntraFrequencyMeasurement_r7, measurementValidity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementValidity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementValidity"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFrequencyMeasurement_r7, reportCriteria),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntraFreqReportCriteria_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportCriteria"
		},
};
static int asn_MAP_IntraFrequencyMeasurement_r7_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_IntraFrequencyMeasurement_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IntraFrequencyMeasurement_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqCellInfoList at 25224 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqMeasQuantity at 25225 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqReportingQuantity at 25226 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measurementValidity at 25227 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* reportCriteria at 25228 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntraFrequencyMeasurement_r7_specs_1 = {
	sizeof(struct IntraFrequencyMeasurement_r7),
	offsetof(struct IntraFrequencyMeasurement_r7, _asn_ctx),
	asn_MAP_IntraFrequencyMeasurement_r7_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_IntraFrequencyMeasurement_r7_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntraFrequencyMeasurement_r7 = {
	"IntraFrequencyMeasurement-r7",
	"IntraFrequencyMeasurement-r7",
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
	asn_DEF_IntraFrequencyMeasurement_r7_tags_1,
	sizeof(asn_DEF_IntraFrequencyMeasurement_r7_tags_1)
		/sizeof(asn_DEF_IntraFrequencyMeasurement_r7_tags_1[0]), /* 1 */
	asn_DEF_IntraFrequencyMeasurement_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFrequencyMeasurement_r7_tags_1)
		/sizeof(asn_DEF_IntraFrequencyMeasurement_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IntraFrequencyMeasurement_r7_1,
	5,	/* Elements count */
	&asn_SPC_IntraFrequencyMeasurement_r7_specs_1	/* Additional specs */
};

