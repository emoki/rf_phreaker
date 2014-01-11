/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PhysicalChannelReconfigurationComplete.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_12 = {
	sizeof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_12 = {
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
	asn_DEF_nonCriticalExtensions_tags_12,
	sizeof(asn_DEF_nonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions, physicalChannelReconfigurationComplete_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalChannelReconfigurationComplete_v770ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelReconfigurationComplete-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_v770NonCriticalExtensions_oms_10[] = { 1 };
static ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalChannelReconfigurationComplete-v770ext at 4655 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 4656 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_10 = {
	sizeof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions),
	offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_10 = {
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
	asn_DEF_v770NonCriticalExtensions_tags_10,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v770NonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_8[] = {
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions, physicalChannelReconfigurationComplete_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalChannelReconfigurationComplete-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v770NonCriticalExtensions"
		},
};
static int asn_MAP_laterNonCriticalExtensions_oms_8[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physicalChannelReconfigurationComplete-r3-add-ext at 4652 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions at 4655 */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_8 = {
	sizeof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions),
	offsetof(struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_8 = {
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
	asn_DEF_laterNonCriticalExtensions_tags_8,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_8,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelReconfigurationComplete_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelReconfigurationComplete, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalChannelReconfigurationComplete, ul_IntegProtActivationInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtActivationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-IntegProtActivationInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalChannelReconfigurationComplete, ul_TimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TimingAdvance"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalChannelReconfigurationComplete, count_C_ActivationTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"count-C-ActivationTime"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalChannelReconfigurationComplete, dummy),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_ActivationTimeInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalChannelReconfigurationComplete, ul_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CounterSynchronisationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalChannelReconfigurationComplete, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static int asn_MAP_PhysicalChannelReconfigurationComplete_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_PhysicalChannelReconfigurationComplete_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelReconfigurationComplete_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 4640 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-IntegProtActivationInfo at 4641 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-TimingAdvance at 4643 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* count-C-ActivationTime at 4645 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dummy at 4648 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ul-CounterSynchronisationInfo at 4649 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* laterNonCriticalExtensions at 4652 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelReconfigurationComplete_specs_1 = {
	sizeof(struct PhysicalChannelReconfigurationComplete),
	offsetof(struct PhysicalChannelReconfigurationComplete, _asn_ctx),
	asn_MAP_PhysicalChannelReconfigurationComplete_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PhysicalChannelReconfigurationComplete_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfigurationComplete = {
	"PhysicalChannelReconfigurationComplete",
	"PhysicalChannelReconfigurationComplete",
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
	asn_DEF_PhysicalChannelReconfigurationComplete_tags_1,
	sizeof(asn_DEF_PhysicalChannelReconfigurationComplete_tags_1)
		/sizeof(asn_DEF_PhysicalChannelReconfigurationComplete_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelReconfigurationComplete_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelReconfigurationComplete_tags_1)
		/sizeof(asn_DEF_PhysicalChannelReconfigurationComplete_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelReconfigurationComplete_1,
	7,	/* Elements count */
	&asn_SPC_PhysicalChannelReconfigurationComplete_specs_1	/* Additional specs */
};

