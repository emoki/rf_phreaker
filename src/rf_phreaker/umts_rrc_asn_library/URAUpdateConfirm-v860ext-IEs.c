/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/URAUpdateConfirm-v860ext-IEs.h"

static asn_TYPE_member_t asn_MBR_URAUpdateConfirm_v860ext_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct URAUpdateConfirm_v860ext_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct URAUpdateConfirm_v860ext_IEs, newPrimary_E_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newPrimary-E-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct URAUpdateConfirm_v860ext_IEs, defaultConfigForCellFACH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigForCellFACH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigForCellFACH"
		},
};
static int asn_MAP_URAUpdateConfirm_v860ext_IEs_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_URAUpdateConfirm_v860ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* new-H-RNTI at 10014 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* newPrimary-E-RNTI at 10015 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* defaultConfigForCellFACH at 10017 */
};
static asn_SEQUENCE_specifics_t asn_SPC_URAUpdateConfirm_v860ext_IEs_specs_1 = {
	sizeof(struct URAUpdateConfirm_v860ext_IEs),
	offsetof(struct URAUpdateConfirm_v860ext_IEs, _asn_ctx),
	asn_MAP_URAUpdateConfirm_v860ext_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_URAUpdateConfirm_v860ext_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_URAUpdateConfirm_v860ext_IEs = {
	"URAUpdateConfirm-v860ext-IEs",
	"URAUpdateConfirm-v860ext-IEs",
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
	asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1,
	sizeof(asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1)
		/sizeof(asn_DEF_URAUpdateConfirm_v860ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_URAUpdateConfirm_v860ext_IEs_1,
	3,	/* Elements count */
	&asn_SPC_URAUpdateConfirm_v860ext_IEs_specs_1	/* Additional specs */
};

