/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/SystemInformationBlockType13-r9.h"

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType13_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType13_r9, mbsfn_AreaInfoList_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_AreaInfoList_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbsfn-AreaInfoList-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType13_r9, notificationConfig_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_NotificationConfig_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notificationConfig-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType13_r9, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
};
static int asn_MAP_SystemInformationBlockType13_r9_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType13_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType13_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaInfoList-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* notificationConfig-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* lateNonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType13_r9_specs_1 = {
	sizeof(struct SystemInformationBlockType13_r9),
	offsetof(struct SystemInformationBlockType13_r9, _asn_ctx),
	asn_MAP_SystemInformationBlockType13_r9_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType13_r9_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType13_r9 = {
	"SystemInformationBlockType13-r9",
	"SystemInformationBlockType13-r9",
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
	asn_DEF_SystemInformationBlockType13_r9_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType13_r9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType13_r9_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType13_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType13_r9_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType13_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType13_r9_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType13_r9_specs_1	/* Additional specs */
};

