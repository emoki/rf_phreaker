/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RepetitionPeriodLengthAndOffset.h"

static int
memb_offset_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_length_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 3)) {
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
memb_offset_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_length_constraint_9(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
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
memb_offset_constraint_9(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_length_constraint_12(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
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
memb_offset_constraint_12(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_length_constraint_15(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 31)) {
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
memb_offset_constraint_15(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_length_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 63)) {
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
memb_offset_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_offset_constr_5 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_length_constr_7 = {
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (1..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offset_constr_8 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_length_constr_10 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  7 }	/* (1..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offset_constr_11 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_length_constr_13 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offset_constr_14 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_length_constr_16 = {
	{ APC_CONSTRAINED,	 5,  5,  1,  31 }	/* (1..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offset_constr_17 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_length_constr_19 = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_offset_constr_20 = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RepetitionPeriodLengthAndOffset_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_repetitionPeriod2_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod2, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod2, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_3,
		&asn_PER_memb_offset_constr_5,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod2_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod2_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20188 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20189 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod2_specs_3 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod2),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod2, _asn_ctx),
	asn_MAP_repetitionPeriod2_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod2_3 = {
	"repetitionPeriod2",
	"repetitionPeriod2",
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
	asn_DEF_repetitionPeriod2_tags_3,
	sizeof(asn_DEF_repetitionPeriod2_tags_3)
		/sizeof(asn_DEF_repetitionPeriod2_tags_3[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod2_tags_3,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod2_tags_3)
		/sizeof(asn_DEF_repetitionPeriod2_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod2_3,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod2_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_repetitionPeriod4_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod4, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_length_constraint_6,
		&asn_PER_memb_length_constr_7,
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod4, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_6,
		&asn_PER_memb_offset_constr_8,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod4_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod4_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20192 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20193 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod4_specs_6 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod4),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod4, _asn_ctx),
	asn_MAP_repetitionPeriod4_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod4_6 = {
	"repetitionPeriod4",
	"repetitionPeriod4",
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
	asn_DEF_repetitionPeriod4_tags_6,
	sizeof(asn_DEF_repetitionPeriod4_tags_6)
		/sizeof(asn_DEF_repetitionPeriod4_tags_6[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod4_tags_6,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod4_tags_6)
		/sizeof(asn_DEF_repetitionPeriod4_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod4_6,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod4_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_repetitionPeriod8_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod8, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_length_constraint_9,
		&asn_PER_memb_length_constr_10,
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod8, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_9,
		&asn_PER_memb_offset_constr_11,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod8_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod8_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20196 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20197 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod8_specs_9 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod8),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod8, _asn_ctx),
	asn_MAP_repetitionPeriod8_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod8_9 = {
	"repetitionPeriod8",
	"repetitionPeriod8",
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
	asn_DEF_repetitionPeriod8_tags_9,
	sizeof(asn_DEF_repetitionPeriod8_tags_9)
		/sizeof(asn_DEF_repetitionPeriod8_tags_9[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod8_tags_9,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod8_tags_9)
		/sizeof(asn_DEF_repetitionPeriod8_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod8_9,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod8_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_repetitionPeriod16_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod16, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_length_constraint_12,
		&asn_PER_memb_length_constr_13,
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod16, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_12,
		&asn_PER_memb_offset_constr_14,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod16_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20200 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20201 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod16_specs_12 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod16),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod16, _asn_ctx),
	asn_MAP_repetitionPeriod16_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod16_12 = {
	"repetitionPeriod16",
	"repetitionPeriod16",
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
	asn_DEF_repetitionPeriod16_tags_12,
	sizeof(asn_DEF_repetitionPeriod16_tags_12)
		/sizeof(asn_DEF_repetitionPeriod16_tags_12[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod16_tags_12,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod16_tags_12)
		/sizeof(asn_DEF_repetitionPeriod16_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod16_12,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_repetitionPeriod32_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod32, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_length_constraint_15,
		&asn_PER_memb_length_constr_16,
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod32, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_15,
		&asn_PER_memb_offset_constr_17,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod32_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod32_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20204 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20205 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod32_specs_15 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod32),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod32, _asn_ctx),
	asn_MAP_repetitionPeriod32_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod32_15 = {
	"repetitionPeriod32",
	"repetitionPeriod32",
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
	asn_DEF_repetitionPeriod32_tags_15,
	sizeof(asn_DEF_repetitionPeriod32_tags_15)
		/sizeof(asn_DEF_repetitionPeriod32_tags_15[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod32_tags_15,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod32_tags_15)
		/sizeof(asn_DEF_repetitionPeriod32_tags_15[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod32_15,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod32_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_repetitionPeriod64_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod64, length),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_length_constraint_18,
		&asn_PER_memb_length_constr_19,
		0,
		"length"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod64, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_offset_constraint_18,
		&asn_PER_memb_offset_constr_20,
		0,
		"offset"
		},
};
static ber_tlv_tag_t asn_DEF_repetitionPeriod64_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_repetitionPeriod64_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* length at 20208 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset at 20209 */
};
static asn_SEQUENCE_specifics_t asn_SPC_repetitionPeriod64_specs_18 = {
	sizeof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod64),
	offsetof(struct RepetitionPeriodLengthAndOffset__repetitionPeriod64, _asn_ctx),
	asn_MAP_repetitionPeriod64_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionPeriod64_18 = {
	"repetitionPeriod64",
	"repetitionPeriod64",
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
	asn_DEF_repetitionPeriod64_tags_18,
	sizeof(asn_DEF_repetitionPeriod64_tags_18)
		/sizeof(asn_DEF_repetitionPeriod64_tags_18[0]) - 1, /* 1 */
	asn_DEF_repetitionPeriod64_tags_18,	/* Same as above */
	sizeof(asn_DEF_repetitionPeriod64_tags_18)
		/sizeof(asn_DEF_repetitionPeriod64_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_repetitionPeriod64_18,
	2,	/* Elements count */
	&asn_SPC_repetitionPeriod64_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RepetitionPeriodLengthAndOffset_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_repetitionPeriod2_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_repetitionPeriod4_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_repetitionPeriod8_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_repetitionPeriod16_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod32),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_repetitionPeriod32_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RepetitionPeriodLengthAndOffset, choice.repetitionPeriod64),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_repetitionPeriod64_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriod64"
		},
};
static asn_TYPE_tag2member_t asn_MAP_RepetitionPeriodLengthAndOffset_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* repetitionPeriod1 at 20186 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* repetitionPeriod2 at 20188 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* repetitionPeriod4 at 20192 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriod8 at 20196 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* repetitionPeriod16 at 20200 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* repetitionPeriod32 at 20204 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* repetitionPeriod64 at 20208 */
};
static asn_CHOICE_specifics_t asn_SPC_RepetitionPeriodLengthAndOffset_specs_1 = {
	sizeof(struct RepetitionPeriodLengthAndOffset),
	offsetof(struct RepetitionPeriodLengthAndOffset, _asn_ctx),
	offsetof(struct RepetitionPeriodLengthAndOffset, present),
	sizeof(((struct RepetitionPeriodLengthAndOffset *)0)->present),
	asn_MAP_RepetitionPeriodLengthAndOffset_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RepetitionPeriodLengthAndOffset = {
	"RepetitionPeriodLengthAndOffset",
	"RepetitionPeriodLengthAndOffset",
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
	&asn_PER_type_RepetitionPeriodLengthAndOffset_constr_1,
	asn_MBR_RepetitionPeriodLengthAndOffset_1,
	7,	/* Elements count */
	&asn_SPC_RepetitionPeriodLengthAndOffset_specs_1	/* Additional specs */
};

