/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PDCP-InfoReconfig.h"

static int
memb_dummy_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_dummy_constr_3 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PDCP_InfoReconfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_InfoReconfig, pdcp_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDCP_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdcp-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_InfoReconfig, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_dummy_constraint_1,
		&asn_PER_memb_dummy_constr_3,
		0,
		"dummy"
		},
};
static ber_tlv_tag_t asn_DEF_PDCP_InfoReconfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDCP_InfoReconfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcp-Info at 13915 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy at 13918 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_InfoReconfig_specs_1 = {
	sizeof(struct PDCP_InfoReconfig),
	offsetof(struct PDCP_InfoReconfig, _asn_ctx),
	asn_MAP_PDCP_InfoReconfig_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_InfoReconfig = {
	"PDCP-InfoReconfig",
	"PDCP-InfoReconfig",
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
	asn_DEF_PDCP_InfoReconfig_tags_1,
	sizeof(asn_DEF_PDCP_InfoReconfig_tags_1)
		/sizeof(asn_DEF_PDCP_InfoReconfig_tags_1[0]), /* 1 */
	asn_DEF_PDCP_InfoReconfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_InfoReconfig_tags_1)
		/sizeof(asn_DEF_PDCP_InfoReconfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_InfoReconfig_1,
	2,	/* Elements count */
	&asn_SPC_PDCP_InfoReconfig_specs_1	/* Additional specs */
};

