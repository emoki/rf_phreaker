/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PagingPermissionWithAccessControlList.h"

static asn_TYPE_member_t asn_MBR_PagingPermissionWithAccessControlList_1[] = {
	{ ATF_POINTER, 5, offsetof(struct PagingPermissionWithAccessControlList, pagingPermissionWithAccessControlParametersForOperator1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingPermissionWithAccessControlParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingPermissionWithAccessControlParametersForOperator1"
		},
	{ ATF_POINTER, 4, offsetof(struct PagingPermissionWithAccessControlList, pagingPermissionWithAccessControlParametersForOperator2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingPermissionWithAccessControlParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingPermissionWithAccessControlParametersForOperator2"
		},
	{ ATF_POINTER, 3, offsetof(struct PagingPermissionWithAccessControlList, pagingPermissionWithAccessControlParametersForOperator3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingPermissionWithAccessControlParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingPermissionWithAccessControlParametersForOperator3"
		},
	{ ATF_POINTER, 2, offsetof(struct PagingPermissionWithAccessControlList, pagingPermissionWithAccessControlParametersForOperator4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingPermissionWithAccessControlParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingPermissionWithAccessControlParametersForOperator4"
		},
	{ ATF_POINTER, 1, offsetof(struct PagingPermissionWithAccessControlList, pagingPermissionWithAccessControlParametersForOperator5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingPermissionWithAccessControlParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pagingPermissionWithAccessControlParametersForOperator5"
		},
};
static int asn_MAP_PagingPermissionWithAccessControlList_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_PagingPermissionWithAccessControlList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PagingPermissionWithAccessControlList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingPermissionWithAccessControlParametersForOperator1 at 10897 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pagingPermissionWithAccessControlParametersForOperator2 at 10899 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pagingPermissionWithAccessControlParametersForOperator3 at 10901 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pagingPermissionWithAccessControlParametersForOperator4 at 10903 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* pagingPermissionWithAccessControlParametersForOperator5 at 10905 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PagingPermissionWithAccessControlList_specs_1 = {
	sizeof(struct PagingPermissionWithAccessControlList),
	offsetof(struct PagingPermissionWithAccessControlList, _asn_ctx),
	asn_MAP_PagingPermissionWithAccessControlList_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_PagingPermissionWithAccessControlList_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PagingPermissionWithAccessControlList = {
	"PagingPermissionWithAccessControlList",
	"PagingPermissionWithAccessControlList",
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
	asn_DEF_PagingPermissionWithAccessControlList_tags_1,
	sizeof(asn_DEF_PagingPermissionWithAccessControlList_tags_1)
		/sizeof(asn_DEF_PagingPermissionWithAccessControlList_tags_1[0]), /* 1 */
	asn_DEF_PagingPermissionWithAccessControlList_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingPermissionWithAccessControlList_tags_1)
		/sizeof(asn_DEF_PagingPermissionWithAccessControlList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PagingPermissionWithAccessControlList_1,
	5,	/* Elements count */
	&asn_SPC_PagingPermissionWithAccessControlList_specs_1	/* Additional specs */
};

