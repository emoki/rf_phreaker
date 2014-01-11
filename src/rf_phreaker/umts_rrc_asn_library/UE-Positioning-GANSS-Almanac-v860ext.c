/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-Almanac-v860ext.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_Almanac_v860ext_1[] = {
	{ ATF_POINTER, 5, offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, alm_keplerianNAVAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_NAVKeplerianSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianNAVAlmanac"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, alm_keplerianReducedAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_ReducedKeplerianSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianReducedAlmanac"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, alm_keplerianMidiAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_MidiAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianMidiAlmanac"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, alm_keplerianGLONASS),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_GlonassAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianGLONASS"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, alm_ecefSBASAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_ECEFsbasAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-ecefSBASAlmanac"
		},
};
static int asn_MAP_UE_Positioning_GANSS_Almanac_v860ext_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_Almanac_v860ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* alm-keplerianNAVAlmanac at 27467 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* alm-keplerianReducedAlmanac at 27468 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* alm-keplerianMidiAlmanac at 27469 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alm-keplerianGLONASS at 27470 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* alm-ecefSBASAlmanac at 27471 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_Almanac_v860ext_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_Almanac_v860ext),
	offsetof(struct UE_Positioning_GANSS_Almanac_v860ext, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_Almanac_v860ext_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GANSS_Almanac_v860ext_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_Almanac_v860ext = {
	"UE-Positioning-GANSS-Almanac-v860ext",
	"UE-Positioning-GANSS-Almanac-v860ext",
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
	asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_v860ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GANSS_Almanac_v860ext_1,
	5,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_Almanac_v860ext_specs_1	/* Additional specs */
};

