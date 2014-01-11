/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/GANSSMeasurementParameters-v860ext.h"

static int
memb_ganssIntegerCodePhaseExt_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 64 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ganssIntegerCodePhaseExt_constr_3 = {
	{ APC_CONSTRAINED,	 6,  6,  64,  127 }	/* (64..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_GANSSMeasurementParameters_v860ext_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_POINTER, 1, offsetof(struct GANSSMeasurementParameters_v860ext__Member, ganssIntegerCodePhaseExt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganssIntegerCodePhaseExt_constraint_2,
		&asn_PER_memb_ganssIntegerCodePhaseExt_constr_3,
		0,
		"ganssIntegerCodePhaseExt"
		},
};
static int asn_MAP_Member_oms_2[] = { 0 };
static ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ganssIntegerCodePhaseExt at 23712 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct GANSSMeasurementParameters_v860ext__Member),
	offsetof(struct GANSSMeasurementParameters_v860ext__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	1,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	1,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GANSSMeasurementParameters_v860ext_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_GANSSMeasurementParameters_v860ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_GANSSMeasurementParameters_v860ext_specs_1 = {
	sizeof(struct GANSSMeasurementParameters_v860ext),
	offsetof(struct GANSSMeasurementParameters_v860ext, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_GANSSMeasurementParameters_v860ext = {
	"GANSSMeasurementParameters-v860ext",
	"GANSSMeasurementParameters-v860ext",
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
	asn_DEF_GANSSMeasurementParameters_v860ext_tags_1,
	sizeof(asn_DEF_GANSSMeasurementParameters_v860ext_tags_1)
		/sizeof(asn_DEF_GANSSMeasurementParameters_v860ext_tags_1[0]), /* 1 */
	asn_DEF_GANSSMeasurementParameters_v860ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSMeasurementParameters_v860ext_tags_1)
		/sizeof(asn_DEF_GANSSMeasurementParameters_v860ext_tags_1[0]), /* 1 */
	&asn_PER_type_GANSSMeasurementParameters_v860ext_constr_1,
	asn_MBR_GANSSMeasurementParameters_v860ext_1,
	1,	/* Single element */
	&asn_SPC_GANSSMeasurementParameters_v860ext_specs_1	/* Additional specs */
};

