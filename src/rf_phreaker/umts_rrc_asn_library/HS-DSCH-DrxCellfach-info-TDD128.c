/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HS-DSCH-DrxCellfach-info-TDD128.h"

static asn_TYPE_member_t asn_MBR_HS_DSCH_DrxCellfach_info_TDD128_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_DrxCellfach_info_TDD128, t_321),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_321,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-321"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_DrxCellfach_info_TDD128, hs_dsch_DrxCycleFach),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_DSCH_DrxCycleFach,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-dsch-DrxCycleFach"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_DrxCellfach_info_TDD128, hs_dsch_DrxBurstFach),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_DSCH_DrxBurstFach,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-dsch-DrxBurstFach"
		},
};
static ber_tlv_tag_t asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HS_DSCH_DrxCellfach_info_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-321 at 18420 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hs-dsch-DrxCycleFach at 18421 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* hs-dsch-DrxBurstFach at 18423 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_DSCH_DrxCellfach_info_TDD128_specs_1 = {
	sizeof(struct HS_DSCH_DrxCellfach_info_TDD128),
	offsetof(struct HS_DSCH_DrxCellfach_info_TDD128, _asn_ctx),
	asn_MAP_HS_DSCH_DrxCellfach_info_TDD128_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_DSCH_DrxCellfach_info_TDD128 = {
	"HS-DSCH-DrxCellfach-info-TDD128",
	"HS-DSCH-DrxCellfach-info-TDD128",
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
	asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1,
	sizeof(asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1)
		/sizeof(asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1[0]), /* 1 */
	asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1)
		/sizeof(asn_DEF_HS_DSCH_DrxCellfach_info_TDD128_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_DSCH_DrxCellfach_info_TDD128_1,
	3,	/* Elements count */
	&asn_SPC_HS_DSCH_DrxCellfach_info_TDD128_specs_1	/* Additional specs */
};

