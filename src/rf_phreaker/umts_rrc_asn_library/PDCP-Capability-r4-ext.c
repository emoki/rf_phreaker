/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PDCP-Capability-r4-ext.h"

static int
memb_reverseCompressionDepth_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_reverseCompressionDepth_constr_6 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportForRfc3095_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_5_set_4(int set_value, void **sptr) {
	MaxROHC_ContextSessions_r4_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 4 */
		*st = 4;
		return 0;
	} else {
		/* Test default value 4 */
		return (*st == 4);
	}
}
static int asn_DFL_6_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_supported_4[] = {
	{ ATF_POINTER, 2, offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095__supported, maxROHC_ContextSessions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxROHC_ContextSessions_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_5_set_4,	/* DEFAULT 4 */
		"maxROHC-ContextSessions"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095__supported, reverseCompressionDepth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_reverseCompressionDepth_constraint_4,
		&asn_PER_memb_reverseCompressionDepth_constr_6,
		asn_DFL_6_set_0,	/* DEFAULT 0 */
		"reverseCompressionDepth"
		},
};
static int asn_MAP_supported_oms_4[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_supported_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_supported_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxROHC-ContextSessions at 12170 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reverseCompressionDepth at 12171 */
};
static asn_SEQUENCE_specifics_t asn_SPC_supported_specs_4 = {
	sizeof(struct PDCP_Capability_r4_ext__supportForRfc3095__supported),
	offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095__supported, _asn_ctx),
	asn_MAP_supported_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_supported_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supported_4 = {
	"supported",
	"supported",
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
	asn_DEF_supported_tags_4,
	sizeof(asn_DEF_supported_tags_4)
		/sizeof(asn_DEF_supported_tags_4[0]) - 1, /* 1 */
	asn_DEF_supported_tags_4,	/* Same as above */
	sizeof(asn_DEF_supported_tags_4)
		/sizeof(asn_DEF_supported_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_supported_4,
	2,	/* Elements count */
	&asn_SPC_supported_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_supportForRfc3095_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_supported_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_supportForRfc3095_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported at 12168 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported at 12170 */
};
static asn_CHOICE_specifics_t asn_SPC_supportForRfc3095_specs_2 = {
	sizeof(struct PDCP_Capability_r4_ext__supportForRfc3095),
	offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095, _asn_ctx),
	offsetof(struct PDCP_Capability_r4_ext__supportForRfc3095, present),
	sizeof(((struct PDCP_Capability_r4_ext__supportForRfc3095 *)0)->present),
	asn_MAP_supportForRfc3095_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForRfc3095_2 = {
	"supportForRfc3095",
	"supportForRfc3095",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_supportForRfc3095_constr_2,
	asn_MBR_supportForRfc3095_2,
	2,	/* Elements count */
	&asn_SPC_supportForRfc3095_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCP_Capability_r4_ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r4_ext, supportForRfc3095),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_supportForRfc3095_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095"
		},
};
static ber_tlv_tag_t asn_DEF_PDCP_Capability_r4_ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDCP_Capability_r4_ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportForRfc3095 at 12168 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Capability_r4_ext_specs_1 = {
	sizeof(struct PDCP_Capability_r4_ext),
	offsetof(struct PDCP_Capability_r4_ext, _asn_ctx),
	asn_MAP_PDCP_Capability_r4_ext_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Capability_r4_ext = {
	"PDCP-Capability-r4-ext",
	"PDCP-Capability-r4-ext",
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
	asn_DEF_PDCP_Capability_r4_ext_tags_1,
	sizeof(asn_DEF_PDCP_Capability_r4_ext_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r4_ext_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Capability_r4_ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Capability_r4_ext_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r4_ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Capability_r4_ext_1,
	1,	/* Elements count */
	&asn_SPC_PDCP_Capability_r4_ext_specs_1	/* Additional specs */
};

