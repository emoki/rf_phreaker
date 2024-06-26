/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PagingRecord2-r5.h"

static int
memb_utran_GroupIdentity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_utran_GroupIdentity_constr_9 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utran_GroupIdentity_constr_9 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_PagingRecord2_r5_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cn_OriginatedPage_connectedMode_UE_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE, pagingCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE, pagingRecordTypeID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingRecordTypeID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingRecordTypeID"
		},
};
static ber_tlv_tag_t asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cn_OriginatedPage_connectedMode_UE_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingCause at 12140 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-DomainIdentity at 12141 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pagingRecordTypeID at 12143 */
};
static asn_SEQUENCE_specifics_t asn_SPC_cn_OriginatedPage_connectedMode_UE_specs_4 = {
	sizeof(struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE),
	offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE, _asn_ctx),
	asn_MAP_cn_OriginatedPage_connectedMode_UE_tag2el_4,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_OriginatedPage_connectedMode_UE_4 = {
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
	asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4,
	sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4)
		/sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4[0]) - 1, /* 1 */
	asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4,	/* Same as above */
	sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4)
		/sizeof(asn_DEF_cn_OriginatedPage_connectedMode_UE_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cn_OriginatedPage_connectedMode_UE_4,
	3,	/* Elements count */
	&asn_SPC_cn_OriginatedPage_connectedMode_UE_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_utran_SingleUE_Identity_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity, u_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"u-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity, cn_OriginatedPage_connectedMode_UE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_cn_OriginatedPage_connectedMode_UE_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-OriginatedPage-connectedMode-UE"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity, rrc_ConnectionReleaseInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_ConnectionReleaseInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-ConnectionReleaseInformation"
		},
};
static int asn_MAP_utran_SingleUE_Identity_oms_2[] = { 1 };
static ber_tlv_tag_t asn_DEF_utran_SingleUE_Identity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_utran_SingleUE_Identity_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* u-RNTI at 12138 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-OriginatedPage-connectedMode-UE at 12140 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rrc-ConnectionReleaseInformation at 12145 */
};
static asn_SEQUENCE_specifics_t asn_SPC_utran_SingleUE_Identity_specs_2 = {
	sizeof(struct PagingRecord2_r5__utran_SingleUE_Identity),
	offsetof(struct PagingRecord2_r5__utran_SingleUE_Identity, _asn_ctx),
	asn_MAP_utran_SingleUE_Identity_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_utran_SingleUE_Identity_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_utran_SingleUE_Identity_2 = {
	"utran-SingleUE-Identity",
	"utran-SingleUE-Identity",
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
	asn_DEF_utran_SingleUE_Identity_tags_2,
	sizeof(asn_DEF_utran_SingleUE_Identity_tags_2)
		/sizeof(asn_DEF_utran_SingleUE_Identity_tags_2[0]) - 1, /* 1 */
	asn_DEF_utran_SingleUE_Identity_tags_2,	/* Same as above */
	sizeof(asn_DEF_utran_SingleUE_Identity_tags_2)
		/sizeof(asn_DEF_utran_SingleUE_Identity_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_utran_SingleUE_Identity_2,
	3,	/* Elements count */
	&asn_SPC_utran_SingleUE_Identity_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_utran_GroupIdentity_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_GroupIdentityWithReleaseInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_utran_GroupIdentity_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_utran_GroupIdentity_specs_9 = {
	sizeof(struct PagingRecord2_r5__utran_GroupIdentity),
	offsetof(struct PagingRecord2_r5__utran_GroupIdentity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_utran_GroupIdentity_9 = {
	"utran-GroupIdentity",
	"utran-GroupIdentity",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_utran_GroupIdentity_tags_9,
	sizeof(asn_DEF_utran_GroupIdentity_tags_9)
		/sizeof(asn_DEF_utran_GroupIdentity_tags_9[0]) - 1, /* 1 */
	asn_DEF_utran_GroupIdentity_tags_9,	/* Same as above */
	sizeof(asn_DEF_utran_GroupIdentity_tags_9)
		/sizeof(asn_DEF_utran_GroupIdentity_tags_9[0]), /* 2 */
	&asn_PER_type_utran_GroupIdentity_constr_9,
	asn_MBR_utran_GroupIdentity_9,
	1,	/* Single element */
	&asn_SPC_utran_GroupIdentity_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PagingRecord2_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5, choice.utran_SingleUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_utran_SingleUE_Identity_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-SingleUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PagingRecord2_r5, choice.utran_GroupIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_utran_GroupIdentity_9,
		memb_utran_GroupIdentity_constraint_1,
		&asn_PER_memb_utran_GroupIdentity_constr_9,
		0,
		"utran-GroupIdentity"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PagingRecord2_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utran-SingleUE-Identity at 12138 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* utran-GroupIdentity at 12148 */
};
static asn_CHOICE_specifics_t asn_SPC_PagingRecord2_r5_specs_1 = {
	sizeof(struct PagingRecord2_r5),
	offsetof(struct PagingRecord2_r5, _asn_ctx),
	offsetof(struct PagingRecord2_r5, present),
	sizeof(((struct PagingRecord2_r5 *)0)->present),
	asn_MAP_PagingRecord2_r5_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PagingRecord2_r5 = {
	"PagingRecord2-r5",
	"PagingRecord2-r5",
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
	&asn_PER_type_PagingRecord2_r5_constr_1,
	asn_MBR_PagingRecord2_r5_1,
	2,	/* Elements count */
	&asn_SPC_PagingRecord2_r5_specs_1	/* Additional specs */
};

