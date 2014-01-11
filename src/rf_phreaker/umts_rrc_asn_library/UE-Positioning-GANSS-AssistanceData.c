/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-AssistanceData.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_AssistanceData_1[] = {
	{ ATF_POINTER, 4, offsetof(struct UE_Positioning_GANSS_AssistanceData, ue_positioning_GANSS_ReferenceTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_ReferenceTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-GANSS-ReferenceTime"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_GANSS_AssistanceData, uePositioningGanssReferencePosition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceLocationGANSS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssReferencePosition"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_GANSS_AssistanceData, uePositioningGanssIonosphericModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_IonosphericModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssIonosphericModel"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GANSS_AssistanceData, ganssGenericDataList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSGenericDataList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssGenericDataList"
		},
};
static int asn_MAP_UE_Positioning_GANSS_AssistanceData_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_AssistanceData_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-positioning-GANSS-ReferenceTime at 27524 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uePositioningGanssReferencePosition at 27525 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uePositioningGanssIonosphericModel at 27526 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ganssGenericDataList at 27527 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_AssistanceData_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_AssistanceData),
	offsetof(struct UE_Positioning_GANSS_AssistanceData, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_AssistanceData_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GANSS_AssistanceData_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AssistanceData = {
	"UE-Positioning-GANSS-AssistanceData",
	"UE-Positioning-GANSS-AssistanceData",
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
	asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GANSS_AssistanceData_1,
	4,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_AssistanceData_specs_1	/* Additional specs */
};

