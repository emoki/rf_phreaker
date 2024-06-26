/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-MCCH-ConfigurationInfo-r6.h"

static int
memb_accessInfoPeriodCoefficient_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_repetitionPeriodCoefficient_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_modificationPeriodCoefficient_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 7 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_accessInfoPeriodCoefficient_constr_2 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_repetitionPeriodCoefficient_constr_3 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_modificationPeriodCoefficient_constr_4 = {
	{ APC_CONSTRAINED,	 2,  2,  7,  10 }	/* (7..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MBMS_MCCH_ConfigurationInfo_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, accessInfoPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_accessInfoPeriodCoefficient_constraint_1,
		&asn_PER_memb_accessInfoPeriodCoefficient_constr_2,
		0,
		"accessInfoPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, repetitionPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_repetitionPeriodCoefficient_constraint_1,
		&asn_PER_memb_repetitionPeriodCoefficient_constr_3,
		0,
		"repetitionPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, modificationPeriodCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_modificationPeriodCoefficient_constraint_1,
		&asn_PER_memb_modificationPeriodCoefficient_constr_4,
		0,
		"modificationPeriodCoefficient"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, rlc_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_Info_MCCH_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, tctf_Presence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_TCTF_Presence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tctf-Presence"
		},
};
static int asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessInfoPeriodCoefficient at 30661 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* repetitionPeriodCoefficient at 30662 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* modificationPeriodCoefficient at 30663 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Info at 30664 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* tctf-Presence at 30665 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_MCCH_ConfigurationInfo_r6_specs_1 = {
	sizeof(struct MBMS_MCCH_ConfigurationInfo_r6),
	offsetof(struct MBMS_MCCH_ConfigurationInfo_r6, _asn_ctx),
	asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MBMS_MCCH_ConfigurationInfo_r6_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_MCCH_ConfigurationInfo_r6 = {
	"MBMS-MCCH-ConfigurationInfo-r6",
	"MBMS-MCCH-ConfigurationInfo-r6",
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
	asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1,
	sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MCCH_ConfigurationInfo_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_MCCH_ConfigurationInfo_r6_1,
	5,	/* Elements count */
	&asn_SPC_MBMS_MCCH_ConfigurationInfo_r6_specs_1	/* Additional specs */
};

