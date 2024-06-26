/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-ReportingQuantity-r4.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_ReportingQuantity_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r4, methodType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_MethodType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"methodType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r4, positioningMethod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningMethod,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positioningMethod"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_ReportingQuantity_r4, horizontalAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_Accuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horizontalAccuracy"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_ReportingQuantity_r4, verticalAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_Accuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"verticalAccuracy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r4, gps_TimingOfCellWanted),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gps-TimingOfCellWanted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r4, additionalAssistanceDataReq),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalAssistanceDataReq"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_ReportingQuantity_r4, environmentCharacterisation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EnvironmentCharacterisation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"environmentCharacterisation"
		},
};
static int asn_MAP_UE_Positioning_ReportingQuantity_r4_oms_1[] = { 2, 3, 6 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_ReportingQuantity_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* methodType at 28545 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* positioningMethod at 28546 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* horizontalAccuracy at 28547 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* verticalAccuracy at 28548 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gps-TimingOfCellWanted at 28549 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* additionalAssistanceDataReq at 28550 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* environmentCharacterisation at 28551 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_ReportingQuantity_r4_specs_1 = {
	sizeof(struct UE_Positioning_ReportingQuantity_r4),
	offsetof(struct UE_Positioning_ReportingQuantity_r4, _asn_ctx),
	asn_MAP_UE_Positioning_ReportingQuantity_r4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_ReportingQuantity_r4_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_ReportingQuantity_r4 = {
	"UE-Positioning-ReportingQuantity-r4",
	"UE-Positioning-ReportingQuantity-r4",
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
	asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1,
	sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1)
		/sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1)
		/sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_ReportingQuantity_r4_1,
	7,	/* Elements count */
	&asn_SPC_UE_Positioning_ReportingQuantity_r4_specs_1	/* Additional specs */
};

