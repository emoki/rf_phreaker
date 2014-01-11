/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PrimaryCCPCH-InfoPostTDD-LCR-r4.h"

static asn_TYPE_member_t asn_MBR_PrimaryCCPCH_InfoPostTDD_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_InfoPostTDD_LCR_r4, tstd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tstd-Indicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_InfoPostTDD_LCR_r4, cellParametersID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellParametersID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellParametersID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrimaryCCPCH_InfoPostTDD_LCR_r4, sctd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sctd-Indicator"
		},
};
static ber_tlv_tag_t asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PrimaryCCPCH_InfoPostTDD_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tstd-Indicator at 19957 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellParametersID at 19958 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sctd-Indicator at 19959 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PrimaryCCPCH_InfoPostTDD_LCR_r4_specs_1 = {
	sizeof(struct PrimaryCCPCH_InfoPostTDD_LCR_r4),
	offsetof(struct PrimaryCCPCH_InfoPostTDD_LCR_r4, _asn_ctx),
	asn_MAP_PrimaryCCPCH_InfoPostTDD_LCR_r4_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4 = {
	"PrimaryCCPCH-InfoPostTDD-LCR-r4",
	"PrimaryCCPCH-InfoPostTDD-LCR-r4",
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
	asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1,
	sizeof(asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1)
		/sizeof(asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1)
		/sizeof(asn_DEF_PrimaryCCPCH_InfoPostTDD_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PrimaryCCPCH_InfoPostTDD_LCR_r4_1,
	3,	/* Elements count */
	&asn_SPC_PrimaryCCPCH_InfoPostTDD_LCR_r4_specs_1	/* Additional specs */
};

