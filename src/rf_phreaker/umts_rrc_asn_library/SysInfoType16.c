/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/SysInfoType16.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_7 = {
	sizeof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_7 = {
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
	asn_DEF_nonCriticalExtensions_tags_7,
	sizeof(asn_DEF_nonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_7[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_7,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_7)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v920NonCriticalExtensions_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions, sysInfoType16_v920ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType16_v920ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType16-v920ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_v920NonCriticalExtensions_oms_5[] = { 1 };
static ber_tlv_tag_t asn_DEF_v920NonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v920NonCriticalExtensions_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType16-v920ext at 30335 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 30336 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v920NonCriticalExtensions_specs_5 = {
	sizeof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions),
	offsetof(struct SysInfoType16__v770NonCriticalExtensions__v920NonCriticalExtensions, _asn_ctx),
	asn_MAP_v920NonCriticalExtensions_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_v920NonCriticalExtensions_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v920NonCriticalExtensions_5 = {
	"v920NonCriticalExtensions",
	"v920NonCriticalExtensions",
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
	asn_DEF_v920NonCriticalExtensions_tags_5,
	sizeof(asn_DEF_v920NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_v920NonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_v920NonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_v920NonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_v920NonCriticalExtensions_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v920NonCriticalExtensions_5,
	2,	/* Elements count */
	&asn_SPC_v920NonCriticalExtensions_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType16__v770NonCriticalExtensions, sysInfoType16_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType16_v770ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType16-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType16__v770NonCriticalExtensions, v920NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v920NonCriticalExtensions_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v920NonCriticalExtensions"
		},
};
static int asn_MAP_v770NonCriticalExtensions_oms_3[] = { 1 };
static ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType16-v770ext at 30333 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v920NonCriticalExtensions at 30335 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_3 = {
	sizeof(struct SysInfoType16__v770NonCriticalExtensions),
	offsetof(struct SysInfoType16__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_3 = {
	"v770NonCriticalExtensions",
	"v770NonCriticalExtensions",
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
	asn_DEF_v770NonCriticalExtensions_tags_3,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_3[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_3,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_3)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v770NonCriticalExtensions_3,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType16, preDefinedRadioConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PreDefRadioConfiguration,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preDefinedRadioConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType16, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v770NonCriticalExtensions"
		},
};
static int asn_MAP_SysInfoType16_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_SysInfoType16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preDefinedRadioConfiguration at 30330 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions at 30333 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType16_specs_1 = {
	sizeof(struct SysInfoType16),
	offsetof(struct SysInfoType16, _asn_ctx),
	asn_MAP_SysInfoType16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SysInfoType16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType16 = {
	"SysInfoType16",
	"SysInfoType16",
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
	asn_DEF_SysInfoType16_tags_1,
	sizeof(asn_DEF_SysInfoType16_tags_1)
		/sizeof(asn_DEF_SysInfoType16_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType16_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType16_tags_1)
		/sizeof(asn_DEF_SysInfoType16_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType16_1,
	2,	/* Elements count */
	&asn_SPC_SysInfoType16_specs_1	/* Additional specs */
};

