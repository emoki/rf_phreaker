/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CellAccessRestriction.h"

static asn_TYPE_member_t asn_MBR_CellAccessRestriction_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRestriction, cellBarred),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CellBarred,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellBarred"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRestriction, cellReservedForOperatorUse),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReservedIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReservedForOperatorUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAccessRestriction, cellReservationExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReservedIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReservationExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct CellAccessRestriction, accessClassBarredList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccessClassBarredList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"accessClassBarredList"
		},
};
static int asn_MAP_CellAccessRestriction_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_CellAccessRestriction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellAccessRestriction_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBarred at 10982 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReservedForOperatorUse at 10983 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellReservationExtension at 10984 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* accessClassBarredList at 10987 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellAccessRestriction_specs_1 = {
	sizeof(struct CellAccessRestriction),
	offsetof(struct CellAccessRestriction, _asn_ctx),
	asn_MAP_CellAccessRestriction_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CellAccessRestriction_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellAccessRestriction = {
	"CellAccessRestriction",
	"CellAccessRestriction",
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
	asn_DEF_CellAccessRestriction_tags_1,
	sizeof(asn_DEF_CellAccessRestriction_tags_1)
		/sizeof(asn_DEF_CellAccessRestriction_tags_1[0]), /* 1 */
	asn_DEF_CellAccessRestriction_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellAccessRestriction_tags_1)
		/sizeof(asn_DEF_CellAccessRestriction_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellAccessRestriction_1,
	4,	/* Elements count */
	&asn_SPC_CellAccessRestriction_specs_1	/* Additional specs */
};

