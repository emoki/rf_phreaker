/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MeasuredResultsOnRACHinterFreq.h"

static int
memb_interFreqCellIndication_SIB11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
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
memb_interFreqCellIndication_SIB12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_interFreqCellIndication_SIB11_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_interFreqCellIndication_SIB12_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MeasuredResultsOnRACHinterFreq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasuredResultsOnRACHinterFreq, interFreqCellIndication_SIB11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_interFreqCellIndication_SIB11_constraint_1,
		&asn_PER_memb_interFreqCellIndication_SIB11_constr_2,
		0,
		"interFreqCellIndication-SIB11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasuredResultsOnRACHinterFreq, interFreqCellIndication_SIB12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_interFreqCellIndication_SIB12_constraint_1,
		&asn_PER_memb_interFreqCellIndication_SIB12_constr_3,
		0,
		"interFreqCellIndication-SIB12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasuredResultsOnRACHinterFreq, interFreqRACHRepCellsList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqRACHRepCellsList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqRACHRepCellsList"
		},
};
static ber_tlv_tag_t asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasuredResultsOnRACHinterFreq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCellIndication-SIB11 at 25566 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqCellIndication-SIB12 at 25567 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* interFreqRACHRepCellsList at 25569 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasuredResultsOnRACHinterFreq_specs_1 = {
	sizeof(struct MeasuredResultsOnRACHinterFreq),
	offsetof(struct MeasuredResultsOnRACHinterFreq, _asn_ctx),
	asn_MAP_MeasuredResultsOnRACHinterFreq_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasuredResultsOnRACHinterFreq = {
	"MeasuredResultsOnRACHinterFreq",
	"MeasuredResultsOnRACHinterFreq",
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
	asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1,
	sizeof(asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1)
		/sizeof(asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1[0]), /* 1 */
	asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1)
		/sizeof(asn_DEF_MeasuredResultsOnRACHinterFreq_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasuredResultsOnRACHinterFreq_1,
	3,	/* Elements count */
	&asn_SPC_MeasuredResultsOnRACHinterFreq_specs_1	/* Additional specs */
};

