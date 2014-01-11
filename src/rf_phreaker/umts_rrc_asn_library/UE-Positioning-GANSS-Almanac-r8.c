/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-GANSS-Almanac-r8.h"

static int
memb_ganss_wk_number_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ganss_wk_number_constr_2 = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_Almanac_r8_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GANSS_Almanac_r8, ganss_wk_number),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganss_wk_number_constraint_1,
		&asn_PER_memb_ganss_wk_number_constr_2,
		0,
		"ganss-wk-number"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_keplerianParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_keplerianParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianParameters"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_keplerianNAVAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_NAVKeplerianSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianNAVAlmanac"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_keplerianReducedAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_ReducedKeplerianSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianReducedAlmanac"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_keplerianMidiAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_MidiAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianMidiAlmanac"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_keplerianGLONASS),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_GlonassAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-keplerianGLONASS"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GANSS_Almanac_r8, alm_ecefSBASAlmanac),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ALM_ECEFsbasAlmanacSet,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"alm-ecefSBASAlmanac"
		},
};
static int asn_MAP_UE_Positioning_GANSS_Almanac_r8_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_Almanac_r8_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganss-wk-number at 27475 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* alm-keplerianParameters at 27476 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* alm-keplerianNAVAlmanac at 27477 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* alm-keplerianReducedAlmanac at 27478 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* alm-keplerianMidiAlmanac at 27479 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* alm-keplerianGLONASS at 27480 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* alm-ecefSBASAlmanac at 27481 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_Almanac_r8_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_Almanac_r8),
	offsetof(struct UE_Positioning_GANSS_Almanac_r8, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_Almanac_r8_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GANSS_Almanac_r8_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_Almanac_r8 = {
	"UE-Positioning-GANSS-Almanac-r8",
	"UE-Positioning-GANSS-Almanac-r8",
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
	asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_Almanac_r8_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GANSS_Almanac_r8_1,
	7,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_Almanac_r8_specs_1	/* Additional specs */
};

