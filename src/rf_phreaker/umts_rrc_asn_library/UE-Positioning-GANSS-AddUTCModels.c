/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-AddUTCModels.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_AddUTCModels_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_GANSS_AddUTCModels, utcModel1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel1"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_GANSS_AddUTCModels, utcModel2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel2"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GANSS_AddUTCModels, utcModel3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCmodelSet3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModel3"
		},
};
static int asn_MAP_UE_Positioning_GANSS_AddUTCModels_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_AddUTCModels_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utcModel1 at 27455 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utcModel2 at 27456 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* utcModel3 at 27457 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_AddUTCModels_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_AddUTCModels),
	offsetof(struct UE_Positioning_GANSS_AddUTCModels, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_AddUTCModels_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GANSS_AddUTCModels_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AddUTCModels = {
	"UE-Positioning-GANSS-AddUTCModels",
	"UE-Positioning-GANSS-AddUTCModels",
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
	asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AddUTCModels_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GANSS_AddUTCModels_1,
	3,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_AddUTCModels_specs_1	/* Additional specs */
};

