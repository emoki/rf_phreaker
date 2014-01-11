/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RRCConnectionReject.h"

static asn_per_constraints_t asn_PER_type_RRCConnectionReject_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_14 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_14 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_14,
	sizeof(asn_DEF_nonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_14[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_14,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vaxyNonCriticalExtensions_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions, rrcConnectionReject_vaxyext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_vaxyext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-vaxyext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_vaxyNonCriticalExtensions_oms_12[] = { 1 };
static ber_tlv_tag_t asn_DEF_vaxyNonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_vaxyNonCriticalExtensions_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-vaxyext at 7200 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 7201 */
};
static asn_SEQUENCE_specifics_t asn_SPC_vaxyNonCriticalExtensions_specs_12 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions__vaxyNonCriticalExtensions, _asn_ctx),
	asn_MAP_vaxyNonCriticalExtensions_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_vaxyNonCriticalExtensions_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vaxyNonCriticalExtensions_12 = {
	"vaxyNonCriticalExtensions",
	"vaxyNonCriticalExtensions",
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
	asn_DEF_vaxyNonCriticalExtensions_tags_12,
	sizeof(asn_DEF_vaxyNonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_vaxyNonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_vaxyNonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_vaxyNonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_vaxyNonCriticalExtensions_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_vaxyNonCriticalExtensions_12,
	2,	/* Elements count */
	&asn_SPC_vaxyNonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v860NonCriticalExtensions_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions, rrcConnectionReject_v860ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_v860ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-v860ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions, vaxyNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_vaxyNonCriticalExtensions_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vaxyNonCriticalExtensions"
		},
};
static int asn_MAP_v860NonCriticalExtensions_oms_10[] = { 1 };
static ber_tlv_tag_t asn_DEF_v860NonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v860NonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-v860ext at 7198 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vaxyNonCriticalExtensions at 7200 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v860NonCriticalExtensions_specs_10 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions__v860NonCriticalExtensions, _asn_ctx),
	asn_MAP_v860NonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_v860NonCriticalExtensions_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v860NonCriticalExtensions_10 = {
	"v860NonCriticalExtensions",
	"v860NonCriticalExtensions",
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
	asn_DEF_v860NonCriticalExtensions_tags_10,
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_v860NonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v860NonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_v860NonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6f0NonCriticalExtensions_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions, rrcConnectionReject_v6f0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_v6f0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-v6f0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions, v860NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v860NonCriticalExtensions_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v860NonCriticalExtensions"
		},
};
static int asn_MAP_v6f0NonCriticalExtensions_oms_8[] = { 1 };
static ber_tlv_tag_t asn_DEF_v6f0NonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v6f0NonCriticalExtensions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-v6f0ext at 7196 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v860NonCriticalExtensions at 7198 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6f0NonCriticalExtensions_specs_8 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions__v6f0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6f0NonCriticalExtensions_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_v6f0NonCriticalExtensions_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6f0NonCriticalExtensions_8 = {
	"v6f0NonCriticalExtensions",
	"v6f0NonCriticalExtensions",
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
	asn_DEF_v6f0NonCriticalExtensions_tags_8,
	sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_v6f0NonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v6f0NonCriticalExtensions_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v6f0NonCriticalExtensions_8,
	2,	/* Elements count */
	&asn_SPC_v6f0NonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v690NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions, rrcConnectionReject_v690ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_v690ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-v690ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions, v6f0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v6f0NonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v6f0NonCriticalExtensions"
		},
};
static int asn_MAP_v690NonCriticalExtensions_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_v690NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v690NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-v690ext at 7194 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v6f0NonCriticalExtensions at 7196 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v690NonCriticalExtensions_specs_6 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions__v690NonCriticalExtensions, _asn_ctx),
	asn_MAP_v690NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v690NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v690NonCriticalExtensions_6 = {
	"v690NonCriticalExtensions",
	"v690NonCriticalExtensions",
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
	asn_DEF_v690NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v690NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v690NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v690NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_4[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions, rrcConnectionReject_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions, v690NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v690NonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v690NonCriticalExtensions"
		},
};
static int asn_MAP_laterNonCriticalExtensions_oms_4[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-r3-add-ext at 7192 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v690NonCriticalExtensions at 7194 */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_4 = {
	sizeof(struct RRCConnectionReject__r3__laterNonCriticalExtensions),
	offsetof(struct RRCConnectionReject__r3__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_4 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
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
	asn_DEF_laterNonCriticalExtensions_tags_4,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_r3_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__r3, rrcConnectionReject_r3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCConnectionReject_r3_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReject-r3"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReject__r3, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static int asn_MAP_r3_oms_2[] = { 1 };
static ber_tlv_tag_t asn_DEF_r3_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_r3_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReject-r3 at 7189 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* laterNonCriticalExtensions at 7192 */
};
static asn_SEQUENCE_specifics_t asn_SPC_r3_specs_2 = {
	sizeof(struct RRCConnectionReject__r3),
	offsetof(struct RRCConnectionReject__r3, _asn_ctx),
	asn_MAP_r3_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_r3_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_r3_2 = {
	"r3",
	"r3",
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
	asn_DEF_r3_tags_2,
	sizeof(asn_DEF_r3_tags_2)
		/sizeof(asn_DEF_r3_tags_2[0]) - 1, /* 1 */
	asn_DEF_r3_tags_2,	/* Same as above */
	sizeof(asn_DEF_r3_tags_2)
		/sizeof(asn_DEF_r3_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_r3_2,
	2,	/* Elements count */
	&asn_SPC_r3_specs_2	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_criticalExtensions_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensions_specs_18 = {
	sizeof(struct RRCConnectionReject__later_than_r3__criticalExtensions),
	offsetof(struct RRCConnectionReject__later_than_r3__criticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_18 = {
	"criticalExtensions",
	"criticalExtensions",
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
	asn_DEF_criticalExtensions_tags_18,
	sizeof(asn_DEF_criticalExtensions_tags_18)
		/sizeof(asn_DEF_criticalExtensions_tags_18[0]) - 1, /* 1 */
	asn_DEF_criticalExtensions_tags_18,	/* Same as above */
	sizeof(asn_DEF_criticalExtensions_tags_18)
		/sizeof(asn_DEF_criticalExtensions_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensions_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_later_than_r3_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__later_than_r3, initialUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InitialUE_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initialUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__later_than_r3, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject__later_than_r3, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_criticalExtensions_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"criticalExtensions"
		},
};
static ber_tlv_tag_t asn_DEF_later_than_r3_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_later_than_r3_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initialUE-Identity at 7209 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrc-TransactionIdentifier at 7210 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* criticalExtensions at 7211 */
};
static asn_SEQUENCE_specifics_t asn_SPC_later_than_r3_specs_15 = {
	sizeof(struct RRCConnectionReject__later_than_r3),
	offsetof(struct RRCConnectionReject__later_than_r3, _asn_ctx),
	asn_MAP_later_than_r3_tag2el_15,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_later_than_r3_15 = {
	"later-than-r3",
	"later-than-r3",
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
	asn_DEF_later_than_r3_tags_15,
	sizeof(asn_DEF_later_than_r3_tags_15)
		/sizeof(asn_DEF_later_than_r3_tags_15[0]) - 1, /* 1 */
	asn_DEF_later_than_r3_tags_15,	/* Same as above */
	sizeof(asn_DEF_later_than_r3_tags_15)
		/sizeof(asn_DEF_later_than_r3_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_later_than_r3_15,
	3,	/* Elements count */
	&asn_SPC_later_than_r3_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReject_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject, choice.r3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_r3_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"r3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReject, choice.later_than_r3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_later_than_r3_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"later-than-r3"
		},
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionReject_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* r3 at 7189 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* later-than-r3 at 7209 */
};
static asn_CHOICE_specifics_t asn_SPC_RRCConnectionReject_specs_1 = {
	sizeof(struct RRCConnectionReject),
	offsetof(struct RRCConnectionReject, _asn_ctx),
	offsetof(struct RRCConnectionReject, present),
	sizeof(((struct RRCConnectionReject *)0)->present),
	asn_MAP_RRCConnectionReject_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject = {
	"RRCConnectionReject",
	"RRCConnectionReject",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_RRCConnectionReject_constr_1,
	asn_MBR_RRCConnectionReject_1,
	2,	/* Elements count */
	&asn_SPC_RRCConnectionReject_specs_1	/* Additional specs */
};

