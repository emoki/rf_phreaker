/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PagingRecord.h"

static asn_per_constraints_t asn_PER_type_PagingRecord_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cn_Identity_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__cn_Identity, pagingCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__cn_Identity, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__cn_Identity, cn_pagedUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CN_PagedUE_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-pagedUE-Identity"
		},
};
static ber_tlv_tag_t asn_DEF_cn_Identity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cn_Identity_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingCause at 12122 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-DomainIdentity at 12123 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cn-pagedUE-Identity at 12125 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cn_Identity_specs_2 = {
	sizeof(struct PagingRecord__cn_Identity),
	offsetof(struct PagingRecord__cn_Identity, _asn_ctx),
	asn_MAP_cn_Identity_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Identity_2 = {
	"cn-Identity",
	"cn-Identity",
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
	asn_DEF_cn_Identity_tags_2,
	sizeof(asn_DEF_cn_Identity_tags_2)
		/sizeof(asn_DEF_cn_Identity_tags_2[0]) - 1, /* 1 */
	asn_DEF_cn_Identity_tags_2,	/* Same as above */
	sizeof(asn_DEF_cn_Identity_tags_2)
		/sizeof(asn_DEF_cn_Identity_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cn_Identity_2,
	3,	/* Elements count */
	&asn_SPC_cn_Identity_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cn_OriginatedPage_connectedMode_UE_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__utran_Identity__cn_OriginatedPage_connectedMode_UE, pagingCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__utran_Identity__cn_OriginatedPage_connectedMode_UE, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__utran_Identity__cn_OriginatedPage_connectedMode_UE, pagingRecordTypeID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingRecordTypeID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingRecordTypeID"
		},
};
static ber_tlv_tag_t asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cn_OriginatedPage_connectedMode_UE_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingCause at 12129 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-DomainIdentity at 12130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pagingRecordTypeID at 12132 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cn_OriginatedPage_connectedMode_UE_specs_8 = {
	sizeof(struct PagingRecord__utran_Identity__cn_OriginatedPage_connectedMode_UE),
	offsetof(struct PagingRecord__utran_Identity__cn_OriginatedPage_connectedMode_UE, _asn_ctx),
	asn_MAP_cn_OriginatedPage_connectedMode_UE_tag2el_8,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_OriginatedPage_connectedMode_UE_8 = {
	"cn-OriginatedPage-connectedMode-UE",
	"cn-OriginatedPage-connectedMode-UE",
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
	asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8,
	sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8)
		/sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8[0]) - 1, /* 1 */
	asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8,	/* Same as above */
	sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8)
		/sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cn_OriginatedPage_connectedMode_UE_8,
	3,	/* Elements count */
	&asn_SPC_cn_OriginatedPage_connectedMode_UE_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_utran_Identity_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord__utran_Identity, u_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"u-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingRecord__utran_Identity, cn_OriginatedPage_connectedMode_UE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cn_OriginatedPage_connectedMode_UE_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-OriginatedPage-connectedMode-UE"
		},
};
static int asn_MAP_utran_Identity_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_utran_Identity_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_utran_Identity_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* u-RNTI at 12127 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cn-OriginatedPage-connectedMode-UE at 12129 */
};
static asn_SEQUENCE_specifics_t asn_SPC_utran_Identity_specs_6 = {
	sizeof(struct PagingRecord__utran_Identity),
	offsetof(struct PagingRecord__utran_Identity, _asn_ctx),
	asn_MAP_utran_Identity_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_utran_Identity_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_utran_Identity_6 = {
	"utran-Identity",
	"utran-Identity",
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
	asn_DEF_utran_Identity_tags_6,
	sizeof(asn_DEF_utran_Identity_tags_6)
		/sizeof(asn_DEF_utran_Identity_tags_6[0]) - 1, /* 1 */
	asn_DEF_utran_Identity_tags_6,	/* Same as above */
	sizeof(asn_DEF_utran_Identity_tags_6)
		/sizeof(asn_DEF_utran_Identity_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_utran_Identity_6,
	2,	/* Elements count */
	&asn_SPC_utran_Identity_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PagingRecord_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord, choice.cn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cn_Identity_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord, choice.utran_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_utran_Identity_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-Identity"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PagingRecord_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cn-Identity at 12122 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utran-Identity at 12127 */
};
static asn_CHOICE_specifics_t asn_SPC_PagingRecord_specs_1 = {
	sizeof(struct PagingRecord),
	offsetof(struct PagingRecord, _asn_ctx),
	offsetof(struct PagingRecord, present),
	sizeof(((struct PagingRecord *)0)->present),
	asn_MAP_PagingRecord_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PagingRecord = {
	"PagingRecord",
	"PagingRecord",
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
	&asn_PER_type_PagingRecord_constr_1,
	asn_MBR_PagingRecord_1,
	2,	/* Elements count */
	&asn_SPC_PagingRecord_specs_1	/* Additional specs */
};

