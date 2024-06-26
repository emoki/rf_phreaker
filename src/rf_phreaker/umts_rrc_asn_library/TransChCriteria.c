/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/TransChCriteria.h"

static int
memb_eventSpecificParameters_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_eventSpecificParameters_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_eventSpecificParameters_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_eventSpecificParameters_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TrafficVolumeEventParam,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_eventSpecificParameters_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_eventSpecificParameters_specs_3 = {
	sizeof(struct TransChCriteria__eventSpecificParameters),
	offsetof(struct TransChCriteria__eventSpecificParameters, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eventSpecificParameters_3 = {
	"eventSpecificParameters",
	"eventSpecificParameters",
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
	asn_DEF_eventSpecificParameters_tags_3,
	sizeof(asn_DEF_eventSpecificParameters_tags_3)
		/sizeof(asn_DEF_eventSpecificParameters_tags_3[0]) - 1, /* 1 */
	asn_DEF_eventSpecificParameters_tags_3,	/* Same as above */
	sizeof(asn_DEF_eventSpecificParameters_tags_3)
		/sizeof(asn_DEF_eventSpecificParameters_tags_3[0]), /* 2 */
	&asn_PER_type_eventSpecificParameters_constr_3,
	asn_MBR_eventSpecificParameters_3,
	1,	/* Single element */
	&asn_SPC_eventSpecificParameters_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TransChCriteria_1[] = {
	{ ATF_POINTER, 2, offsetof(struct TransChCriteria, ul_transportChannelID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_TrCH_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-transportChannelID"
		},
	{ ATF_POINTER, 1, offsetof(struct TransChCriteria, eventSpecificParameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eventSpecificParameters_3,
		memb_eventSpecificParameters_constraint_1,
		&asn_PER_memb_eventSpecificParameters_constr_3,
		0,
		"eventSpecificParameters"
		},
};
static int asn_MAP_TransChCriteria_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_TransChCriteria_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TransChCriteria_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-transportChannelID at 27111 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventSpecificParameters at 27113 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TransChCriteria_specs_1 = {
	sizeof(struct TransChCriteria),
	offsetof(struct TransChCriteria, _asn_ctx),
	asn_MAP_TransChCriteria_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TransChCriteria_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TransChCriteria = {
	"TransChCriteria",
	"TransChCriteria",
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
	asn_DEF_TransChCriteria_tags_1,
	sizeof(asn_DEF_TransChCriteria_tags_1)
		/sizeof(asn_DEF_TransChCriteria_tags_1[0]), /* 1 */
	asn_DEF_TransChCriteria_tags_1,	/* Same as above */
	sizeof(asn_DEF_TransChCriteria_tags_1)
		/sizeof(asn_DEF_TransChCriteria_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TransChCriteria_1,
	2,	/* Elements count */
	&asn_SPC_TransChCriteria_specs_1	/* Additional specs */
};

