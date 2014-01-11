/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-IdleTimersAndConstants.h"

static asn_TYPE_member_t asn_MBR_UE_IdleTimersAndConstants_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_IdleTimersAndConstants, t_300),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_300,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-300"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_IdleTimersAndConstants, n_300),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_300,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"n-300"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_IdleTimersAndConstants, t_312),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_312,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-312"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_IdleTimersAndConstants, n_312),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_N_312,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"n-312"
		},
};
static ber_tlv_tag_t asn_DEF_UE_IdleTimersAndConstants_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_IdleTimersAndConstants_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-300 at 13051 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n-300 at 13052 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-312 at 13053 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* n-312 at 13057 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_IdleTimersAndConstants_specs_1 = {
	sizeof(struct UE_IdleTimersAndConstants),
	offsetof(struct UE_IdleTimersAndConstants, _asn_ctx),
	asn_MAP_UE_IdleTimersAndConstants_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_IdleTimersAndConstants = {
	"UE-IdleTimersAndConstants",
	"UE-IdleTimersAndConstants",
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
	asn_DEF_UE_IdleTimersAndConstants_tags_1,
	sizeof(asn_DEF_UE_IdleTimersAndConstants_tags_1)
		/sizeof(asn_DEF_UE_IdleTimersAndConstants_tags_1[0]), /* 1 */
	asn_DEF_UE_IdleTimersAndConstants_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_IdleTimersAndConstants_tags_1)
		/sizeof(asn_DEF_UE_IdleTimersAndConstants_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_IdleTimersAndConstants_1,
	4,	/* Elements count */
	&asn_SPC_UE_IdleTimersAndConstants_specs_1	/* Additional specs */
};

