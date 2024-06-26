/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RestrictedTrCH.h"

static asn_TYPE_member_t asn_MBR_RestrictedTrCH_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictedTrCH, dl_restrictedTrCh_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TrCH_Type,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-restrictedTrCh-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictedTrCH, restrictedDL_TrCH_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"restrictedDL-TrCH-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RestrictedTrCH, allowedTFIList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedTFI_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowedTFIList"
		},
};
static ber_tlv_tag_t asn_DEF_RestrictedTrCH_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RestrictedTrCH_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-restrictedTrCh-Type at 20258 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* restrictedDL-TrCH-Identity at 20259 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* allowedTFIList at 20261 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RestrictedTrCH_specs_1 = {
	sizeof(struct RestrictedTrCH),
	offsetof(struct RestrictedTrCH, _asn_ctx),
	asn_MAP_RestrictedTrCH_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RestrictedTrCH = {
	"RestrictedTrCH",
	"RestrictedTrCH",
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
	asn_DEF_RestrictedTrCH_tags_1,
	sizeof(asn_DEF_RestrictedTrCH_tags_1)
		/sizeof(asn_DEF_RestrictedTrCH_tags_1[0]), /* 1 */
	asn_DEF_RestrictedTrCH_tags_1,	/* Same as above */
	sizeof(asn_DEF_RestrictedTrCH_tags_1)
		/sizeof(asn_DEF_RestrictedTrCH_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RestrictedTrCH_1,
	3,	/* Elements count */
	&asn_SPC_RestrictedTrCH_specs_1	/* Additional specs */
};

