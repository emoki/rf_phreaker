/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/Event2a.h"

static asn_TYPE_member_t asn_MBR_Event2a_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event2a, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Threshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event2a, usedFreqW),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_W,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"usedFreqW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event2a, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HysteresisInterFreq,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event2a, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeToTrigger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeToTrigger"
		},
	{ ATF_POINTER, 2, offsetof(struct Event2a, reportingCellStatus),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReportingCellStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingCellStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct Event2a, nonUsedFreqParameterList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NonUsedFreqParameterList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonUsedFreqParameterList"
		},
};
static int asn_MAP_Event2a_oms_1[] = { 4, 5 };
static ber_tlv_tag_t asn_DEF_Event2a_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event2a_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy at 23287 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* usedFreqW at 23288 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis at 23289 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeToTrigger at 23290 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportingCellStatus at 23291 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* nonUsedFreqParameterList at 23292 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event2a_specs_1 = {
	sizeof(struct Event2a),
	offsetof(struct Event2a, _asn_ctx),
	asn_MAP_Event2a_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_Event2a_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event2a = {
	"Event2a",
	"Event2a",
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
	asn_DEF_Event2a_tags_1,
	sizeof(asn_DEF_Event2a_tags_1)
		/sizeof(asn_DEF_Event2a_tags_1[0]), /* 1 */
	asn_DEF_Event2a_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event2a_tags_1)
		/sizeof(asn_DEF_Event2a_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event2a_1,
	6,	/* Elements count */
	&asn_SPC_Event2a_specs_1	/* Additional specs */
};

