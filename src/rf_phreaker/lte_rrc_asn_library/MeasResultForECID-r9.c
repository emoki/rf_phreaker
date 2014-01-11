/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/MeasResultForECID-r9.h"

static int
memb_ue_RxTxTimeDiffResult_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_currentSFN_r9_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ue_RxTxTimeDiffResult_r9_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_currentSFN_r9_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MeasResultForECID_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultForECID_r9, ue_RxTxTimeDiffResult_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ue_RxTxTimeDiffResult_r9_constraint_1,
		&asn_PER_memb_ue_RxTxTimeDiffResult_r9_constr_2,
		0,
		"ue-RxTxTimeDiffResult-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultForECID_r9, currentSFN_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_currentSFN_r9_constraint_1,
		&asn_PER_memb_currentSFN_r9_constr_3,
		0,
		"currentSFN-r9"
		},
};
static ber_tlv_tag_t asn_DEF_MeasResultForECID_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultForECID_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RxTxTimeDiffResult-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* currentSFN-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultForECID_r9_specs_1 = {
	sizeof(struct MeasResultForECID_r9),
	offsetof(struct MeasResultForECID_r9, _asn_ctx),
	asn_MAP_MeasResultForECID_r9_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultForECID_r9 = {
	"MeasResultForECID-r9",
	"MeasResultForECID-r9",
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
	asn_DEF_MeasResultForECID_r9_tags_1,
	sizeof(asn_DEF_MeasResultForECID_r9_tags_1)
		/sizeof(asn_DEF_MeasResultForECID_r9_tags_1[0]), /* 1 */
	asn_DEF_MeasResultForECID_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultForECID_r9_tags_1)
		/sizeof(asn_DEF_MeasResultForECID_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultForECID_r9_1,
	2,	/* Elements count */
	&asn_SPC_MeasResultForECID_r9_specs_1	/* Additional specs */
};

