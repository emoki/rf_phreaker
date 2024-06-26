/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-TrCHInformation-SIB5.h"

static int
memb_transpCh_Identity_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_transpCh_Identity_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MBMS_TrCHInformation_SIB5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_TrCHInformation_SIB5, transpCh_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_transpCh_Identity_constraint_1,
		&asn_PER_memb_transpCh_Identity_constr_2,
		0,
		"transpCh-Identity"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_TrCHInformation_SIB5, rbInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PTM_RBInformation_CList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rbInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_TrCHInformation_SIB5, msch_ConfigurationInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MSCH_ConfigurationInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msch-ConfigurationInfo"
		},
};
static int asn_MAP_MBMS_TrCHInformation_SIB5_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_MBMS_TrCHInformation_SIB5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_TrCHInformation_SIB5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transpCh-Identity at 31035 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rbInformation at 31036 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* msch-ConfigurationInfo at 31037 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_TrCHInformation_SIB5_specs_1 = {
	sizeof(struct MBMS_TrCHInformation_SIB5),
	offsetof(struct MBMS_TrCHInformation_SIB5, _asn_ctx),
	asn_MAP_MBMS_TrCHInformation_SIB5_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_TrCHInformation_SIB5_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_TrCHInformation_SIB5 = {
	"MBMS-TrCHInformation-SIB5",
	"MBMS-TrCHInformation-SIB5",
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
	asn_DEF_MBMS_TrCHInformation_SIB5_tags_1,
	sizeof(asn_DEF_MBMS_TrCHInformation_SIB5_tags_1)
		/sizeof(asn_DEF_MBMS_TrCHInformation_SIB5_tags_1[0]), /* 1 */
	asn_DEF_MBMS_TrCHInformation_SIB5_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_TrCHInformation_SIB5_tags_1)
		/sizeof(asn_DEF_MBMS_TrCHInformation_SIB5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_TrCHInformation_SIB5_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_TrCHInformation_SIB5_specs_1	/* Additional specs */
};

