/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/NeighCellCDMA2000-r11.h"

static int
memb_neighFreqInfoList_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_neighFreqInfoList_r11_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_neighFreqInfoList_r11_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_neighFreqInfoList_r11_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NeighCellsPerBandclassCDMA2000_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_neighFreqInfoList_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_neighFreqInfoList_r11_specs_3 = {
	sizeof(struct NeighCellCDMA2000_r11__neighFreqInfoList_r11),
	offsetof(struct NeighCellCDMA2000_r11__neighFreqInfoList_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_neighFreqInfoList_r11_3 = {
	"neighFreqInfoList-r11",
	"neighFreqInfoList-r11",
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
	asn_DEF_neighFreqInfoList_r11_tags_3,
	sizeof(asn_DEF_neighFreqInfoList_r11_tags_3)
		/sizeof(asn_DEF_neighFreqInfoList_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_neighFreqInfoList_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_neighFreqInfoList_r11_tags_3)
		/sizeof(asn_DEF_neighFreqInfoList_r11_tags_3[0]), /* 2 */
	&asn_PER_type_neighFreqInfoList_r11_constr_3,
	asn_MBR_neighFreqInfoList_r11_3,
	1,	/* Single element */
	&asn_SPC_neighFreqInfoList_r11_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NeighCellCDMA2000_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellCDMA2000_r11, bandClass),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandclassCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandClass"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NeighCellCDMA2000_r11, neighFreqInfoList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_neighFreqInfoList_r11_3,
		memb_neighFreqInfoList_r11_constraint_1,
		&asn_PER_memb_neighFreqInfoList_r11_constr_3,
		0,
		"neighFreqInfoList-r11"
		},
};
static ber_tlv_tag_t asn_DEF_NeighCellCDMA2000_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NeighCellCDMA2000_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandClass */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* neighFreqInfoList-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NeighCellCDMA2000_r11_specs_1 = {
	sizeof(struct NeighCellCDMA2000_r11),
	offsetof(struct NeighCellCDMA2000_r11, _asn_ctx),
	asn_MAP_NeighCellCDMA2000_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellCDMA2000_r11 = {
	"NeighCellCDMA2000-r11",
	"NeighCellCDMA2000-r11",
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
	asn_DEF_NeighCellCDMA2000_r11_tags_1,
	sizeof(asn_DEF_NeighCellCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_NeighCellCDMA2000_r11_tags_1[0]), /* 1 */
	asn_DEF_NeighCellCDMA2000_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighCellCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_NeighCellCDMA2000_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NeighCellCDMA2000_r11_1,
	2,	/* Elements count */
	&asn_SPC_NeighCellCDMA2000_r11_specs_1	/* Additional specs */
};

