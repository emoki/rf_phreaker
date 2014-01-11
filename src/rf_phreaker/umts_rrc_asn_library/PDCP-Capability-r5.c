/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PDCP-Capability-r5.h"

static int
memb_reverseCompressionDepth_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_supportForRfc2507_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_reverseCompressionDepth_constr_10 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportForRfc3095_constr_6 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_supportForRfc2507_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5__supportForRfc2507, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5__supportForRfc2507, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxHcContextSpace_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_supportForRfc2507_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported at 32987 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported at 32989 */
};
static asn_CHOICE_specifics_t asn_SPC_supportForRfc2507_specs_3 = {
	sizeof(struct PDCP_Capability_r5__supportForRfc2507),
	offsetof(struct PDCP_Capability_r5__supportForRfc2507, _asn_ctx),
	offsetof(struct PDCP_Capability_r5__supportForRfc2507, present),
	sizeof(((struct PDCP_Capability_r5__supportForRfc2507 *)0)->present),
	asn_MAP_supportForRfc2507_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForRfc2507_3 = {
	"supportForRfc2507",
	"supportForRfc2507",
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
	&asn_PER_type_supportForRfc2507_constr_3,
	asn_MBR_supportForRfc2507_3,
	2,	/* Elements count */
	&asn_SPC_supportForRfc2507_specs_3	/* Additional specs */
};

static int asn_DFL_9_set_4(int set_value, void **sptr) {
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
static int asn_DFL_10_set_0(int set_value, void **sptr) {
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
static asn_TYPE_member_t asn_MBR_supported_8[] = {
	{ ATF_POINTER, 2, offsetof(struct PDCP_Capability_r5__supportForRfc3095__supported, maxROHC_ContextSessions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxROHC_ContextSessions_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_9_set_4,	/* DEFAULT 4 */
		"maxROHC-ContextSessions"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct PDCP_Capability_r5__supportForRfc3095__supported, reverseCompressionDepth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_reverseCompressionDepth_constraint_8,
		&asn_PER_memb_reverseCompressionDepth_constr_10,
		asn_DFL_10_set_0,	/* DEFAULT 0 */
		"reverseCompressionDepth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5__supportForRfc3095__supported, supportForRfc3095ContextRelocation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095ContextRelocation"
		},
};
static int asn_MAP_supported_oms_8[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_supported_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_supported_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxROHC-ContextSessions at 32993 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reverseCompressionDepth at 32994 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportForRfc3095ContextRelocation at 32995 */
};
static asn_SEQUENCE_specifics_t asn_SPC_supported_specs_8 = {
	sizeof(struct PDCP_Capability_r5__supportForRfc3095__supported),
	offsetof(struct PDCP_Capability_r5__supportForRfc3095__supported, _asn_ctx),
	asn_MAP_supported_tag2el_8,
	3,	/* Count of tags in the map */
	asn_MAP_supported_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supported_8 = {
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
	asn_DEF_supported_tags_8,
	sizeof(asn_DEF_supported_tags_8)
		/sizeof(asn_DEF_supported_tags_8[0]) - 1, /* 1 */
	asn_DEF_supported_tags_8,	/* Same as above */
	sizeof(asn_DEF_supported_tags_8)
		/sizeof(asn_DEF_supported_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_supported_8,
	3,	/* Elements count */
	&asn_SPC_supported_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_supportForRfc3095_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5__supportForRfc3095, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5__supportForRfc3095, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_supported_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_supportForRfc3095_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported at 32991 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported at 32993 */
};
static asn_CHOICE_specifics_t asn_SPC_supportForRfc3095_specs_6 = {
	sizeof(struct PDCP_Capability_r5__supportForRfc3095),
	offsetof(struct PDCP_Capability_r5__supportForRfc3095, _asn_ctx),
	offsetof(struct PDCP_Capability_r5__supportForRfc3095, present),
	sizeof(((struct PDCP_Capability_r5__supportForRfc3095 *)0)->present),
	asn_MAP_supportForRfc3095_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForRfc3095_6 = {
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
	&asn_PER_type_supportForRfc3095_constr_6,
	asn_MBR_supportForRfc3095_6,
	2,	/* Elements count */
	&asn_SPC_supportForRfc3095_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCP_Capability_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5, losslessSRNS_RelocationSupport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"losslessSRNS-RelocationSupport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5, supportForRfc2507),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_supportForRfc2507_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc2507"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r5, supportForRfc3095),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_supportForRfc3095_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095"
		},
};
static ber_tlv_tag_t asn_DEF_PDCP_Capability_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDCP_Capability_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* losslessSRNS-RelocationSupport at 32985 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportForRfc2507 at 32987 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportForRfc3095 at 32991 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Capability_r5_specs_1 = {
	sizeof(struct PDCP_Capability_r5),
	offsetof(struct PDCP_Capability_r5, _asn_ctx),
	asn_MAP_PDCP_Capability_r5_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Capability_r5 = {
	"PDCP-Capability-r5",
	"PDCP-Capability-r5",
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
	asn_DEF_PDCP_Capability_r5_tags_1,
	sizeof(asn_DEF_PDCP_Capability_r5_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r5_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Capability_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Capability_r5_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Capability_r5_1,
	3,	/* Elements count */
	&asn_SPC_PDCP_Capability_r5_specs_1	/* Additional specs */
};

