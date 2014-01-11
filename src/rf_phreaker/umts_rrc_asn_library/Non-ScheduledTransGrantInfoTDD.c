/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/Non-ScheduledTransGrantInfoTDD.h"

static int
memb_timeslotResourceRelatedInfo_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 13)) {
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
memb_powerResourceRelatedInfo_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_ueSpecificMidamble_constraint_20(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
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
memb_midambleConfiguration_constraint_17(asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_signatureSequenceGroupIndex_constraint_17(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
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
memb_n_E_UCCH_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_n_E_HICH_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 4 && value <= 15)) {
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
memb_timeslotResourceRelatedInfo_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5)) {
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
memb_powerResourceRelatedInfo_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_sfnNum_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_timeslotResourceRelatedInfo_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  13,  13 }	/* (SIZE(13..13)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_powerResourceRelatedInfo_constr_4 = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ueSpecificMidamble_constr_22 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_20 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_23 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_signatureSequenceGroupIndex_constr_24 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_E_UCCH_constr_9 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_E_HICH_constr_10 = {
	{ APC_CONSTRAINED,	 4,  4,  4,  15 }	/* (4..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeslotResourceRelatedInfo_constr_11 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_powerResourceRelatedInfo_constr_12 = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sfnNum_constr_14 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_Non_ScheduledTransGrantInfoTDD_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tdd384_768_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, timeslotResourceRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_timeslotResourceRelatedInfo_constraint_2,
		&asn_PER_memb_timeslotResourceRelatedInfo_constr_3,
		0,
		"timeslotResourceRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, powerResourceRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_powerResourceRelatedInfo_constraint_2,
		&asn_PER_memb_powerResourceRelatedInfo_constr_4,
		0,
		"powerResourceRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 1, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, repetitionPeriodAndLength),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepetitionPeriodAndLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodAndLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, codeResourceInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"codeResourceInfo"
		},
};
static int asn_MAP_tdd384_768_oms_2[] = { 3 };
static ber_tlv_tag_t asn_DEF_tdd384_768_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_768_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotResourceRelatedInfo at 19307 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerResourceRelatedInfo at 19308 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime at 19309 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodAndLength at 19310 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* codeResourceInfo at 19312 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_768_specs_2 = {
	sizeof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768),
	offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd384_768, _asn_ctx),
	asn_MAP_tdd384_768_tag2el_2,
	5,	/* Count of tags in the map */
	asn_MAP_tdd384_768_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_768_2 = {
	"tdd384-768",
	"tdd384-768",
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
	asn_DEF_tdd384_768_tags_2,
	sizeof(asn_DEF_tdd384_768_tags_2)
		/sizeof(asn_DEF_tdd384_768_tags_2[0]) - 1, /* 1 */
	asn_DEF_tdd384_768_tags_2,	/* Same as above */
	sizeof(asn_DEF_tdd384_768_tags_2)
		/sizeof(asn_DEF_tdd384_768_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_768_2,
	5,	/* Elements count */
	&asn_SPC_tdd384_768_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ueSpecificMidamble_constraint_20,
		&asn_PER_memb_ueSpecificMidamble_constr_22,
		0,
		"ueSpecificMidamble"
		},
};
static asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble at 19326 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueSpecificMidamble at 19327 */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_20 = {
	sizeof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode),
	offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode, _asn_ctx),
	offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode, present),
	sizeof(((struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info__midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_20,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_20 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
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
	&asn_PER_type_midambleAllocationMode_constr_20,
	asn_MBR_midambleAllocationMode_20,
	2,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_e_HICH_Info_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, timeslotNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, channelisation_Code),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_ChannelisationCode_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisation-Code"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleAllocationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleConfiguration_constraint_17,
		&asn_PER_memb_midambleConfiguration_constr_23,
		0,
		"midambleConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, signatureSequenceGroupIndex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_signatureSequenceGroupIndex_constraint_17,
		&asn_PER_memb_signatureSequenceGroupIndex_constr_24,
		0,
		"signatureSequenceGroupIndex"
		},
};
static ber_tlv_tag_t asn_DEF_e_HICH_Info_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_e_HICH_Info_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotNumber at 19323 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* channelisation-Code at 19324 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* midambleAllocationMode at 19326 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* midambleConfiguration at 19330 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* signatureSequenceGroupIndex at 19331 */
};
static asn_SEQUENCE_specifics_t asn_SPC_e_HICH_Info_specs_17 = {
	sizeof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info),
	offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128__e_HICH_Info, _asn_ctx),
	asn_MAP_e_HICH_Info_tag2el_17,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_HICH_Info_17 = {
	"e-HICH-Info",
	"e-HICH-Info",
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
	asn_DEF_e_HICH_Info_tags_17,
	sizeof(asn_DEF_e_HICH_Info_tags_17)
		/sizeof(asn_DEF_e_HICH_Info_tags_17[0]) - 1, /* 1 */
	asn_DEF_e_HICH_Info_tags_17,	/* Same as above */
	sizeof(asn_DEF_e_HICH_Info_tags_17)
		/sizeof(asn_DEF_e_HICH_Info_tags_17[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_e_HICH_Info_17,
	5,	/* Elements count */
	&asn_SPC_e_HICH_Info_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_8[] = {
	{ ATF_POINTER, 2, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, n_E_UCCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_E_UCCH_constraint_8,
		&asn_PER_memb_n_E_UCCH_constr_9,
		0,
		"n-E-UCCH"
		},
	{ ATF_POINTER, 1, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, n_E_HICH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_E_HICH_constraint_8,
		&asn_PER_memb_n_E_HICH_constr_10,
		0,
		"n-E-HICH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, timeslotResourceRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_timeslotResourceRelatedInfo_constraint_8,
		&asn_PER_memb_timeslotResourceRelatedInfo_constr_11,
		0,
		"timeslotResourceRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, powerResourceRelatedInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_powerResourceRelatedInfo_constraint_8,
		&asn_PER_memb_powerResourceRelatedInfo_constr_12,
		0,
		"powerResourceRelatedInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, sfnNum),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sfnNum_constraint_8,
		&asn_PER_memb_sfnNum_constr_14,
		0,
		"sfnNum"
		},
	{ ATF_POINTER, 1, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, repetitionPeriodAndLength),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepetitionPeriodAndLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodAndLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, codeResourceInfo),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"codeResourceInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, e_HICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_e_HICH_Info_17,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-HICH-Info"
		},
};
static int asn_MAP_tdd128_oms_8[] = { 0, 1, 6 };
static ber_tlv_tag_t asn_DEF_tdd128_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-E-UCCH at 19314 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n-E-HICH at 19315 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeslotResourceRelatedInfo at 19316 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* powerResourceRelatedInfo at 19317 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* activationTime at 19318 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sfnNum at 19319 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* repetitionPeriodAndLength at 19320 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* codeResourceInfo at 19321 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* e-HICH-Info at 19323 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_8 = {
	sizeof(struct Non_ScheduledTransGrantInfoTDD__tdd128),
	offsetof(struct Non_ScheduledTransGrantInfoTDD__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_8,
	9,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_8,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_8 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_8,
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_8)
		/sizeof(asn_DEF_tdd128_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_8,
	9,	/* Elements count */
	&asn_SPC_tdd128_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Non_ScheduledTransGrantInfoTDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD, choice.tdd384_768),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_768_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384-768"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Non_ScheduledTransGrantInfoTDD, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Non_ScheduledTransGrantInfoTDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384-768 at 19307 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 19314 */
};
static asn_CHOICE_specifics_t asn_SPC_Non_ScheduledTransGrantInfoTDD_specs_1 = {
	sizeof(struct Non_ScheduledTransGrantInfoTDD),
	offsetof(struct Non_ScheduledTransGrantInfoTDD, _asn_ctx),
	offsetof(struct Non_ScheduledTransGrantInfoTDD, present),
	sizeof(((struct Non_ScheduledTransGrantInfoTDD *)0)->present),
	asn_MAP_Non_ScheduledTransGrantInfoTDD_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Non_ScheduledTransGrantInfoTDD = {
	"Non-ScheduledTransGrantInfoTDD",
	"Non-ScheduledTransGrantInfoTDD",
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
	&asn_PER_type_Non_ScheduledTransGrantInfoTDD_constr_1,
	asn_MBR_Non_ScheduledTransGrantInfoTDD_1,
	2,	/* Elements count */
	&asn_SPC_Non_ScheduledTransGrantInfoTDD_specs_1	/* Additional specs */
};

