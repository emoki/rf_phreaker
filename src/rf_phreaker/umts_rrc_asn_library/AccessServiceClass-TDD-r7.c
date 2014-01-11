/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/AccessServiceClass-TDD-r7.h"

static int
subchannels_22_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
subchannels_22_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
subchannels_22_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	subchannels_22_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
subchannels_22_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
subchannels_22_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
subchannels_22_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
subchannels_22_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
subchannels_22_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
subchannels_22_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
subchannels_22_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	subchannels_22_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_subchannels_constraint_25(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4)) {
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
memb_subchannels_constraint_31(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_subchannels_constraint_41(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
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
memb_channelisationCodeIndices_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_subchannels_constr_22 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subchannels_constr_26 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subchannels_constr_32 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subchannels_constr_42 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_subchannelSize_constr_19 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_channelisationCodeIndices_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_subchannels_value2enum_22[] = {
	{ 0,	6,	"subch0" },
	{ 1,	6,	"subch1" }
};
static unsigned int asn_MAP_subchannels_enum2value_22[] = {
	0,	/* subch0(0) */
	1	/* subch1(1) */
};
static asn_INTEGER_specifics_t asn_SPC_subchannels_specs_22 = {
	asn_MAP_subchannels_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_subchannels_enum2value_22,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_subchannels_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subchannels_22 = {
	"subchannels",
	"subchannels",
	subchannels_22_free,
	subchannels_22_print,
	subchannels_22_constraint,
	subchannels_22_decode_ber,
	subchannels_22_encode_der,
	subchannels_22_decode_xer,
	subchannels_22_encode_xer,
	subchannels_22_decode_uper,
	subchannels_22_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_subchannels_tags_22,
	sizeof(asn_DEF_subchannels_tags_22)
		/sizeof(asn_DEF_subchannels_tags_22[0]) - 1, /* 1 */
	asn_DEF_subchannels_tags_22,	/* Same as above */
	sizeof(asn_DEF_subchannels_tags_22)
		/sizeof(asn_DEF_subchannels_tags_22[0]), /* 2 */
	&asn_PER_type_subchannels_constr_22,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_subchannels_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size2_21[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size2, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_subchannels_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subchannels"
		},
};
static int asn_MAP_size2_oms_21[] = { 0 };
static ber_tlv_tag_t asn_DEF_size2_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_size2_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels at 15974 */
};
static asn_SEQUENCE_specifics_t asn_SPC_size2_specs_21 = {
	sizeof(struct AccessServiceClass_TDD_r7__subchannelSize__size2),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size2, _asn_ctx),
	asn_MAP_size2_tag2el_21,
	1,	/* Count of tags in the map */
	asn_MAP_size2_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size2_21 = {
	"size2",
	"size2",
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
	asn_DEF_size2_tags_21,
	sizeof(asn_DEF_size2_tags_21)
		/sizeof(asn_DEF_size2_tags_21[0]) - 1, /* 1 */
	asn_DEF_size2_tags_21,	/* Same as above */
	sizeof(asn_DEF_size2_tags_21)
		/sizeof(asn_DEF_size2_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_size2_21,
	1,	/* Elements count */
	&asn_SPC_size2_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size4_25[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size4, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_subchannels_constraint_25,
		&asn_PER_memb_subchannels_constr_26,
		0,
		"subchannels"
		},
};
static int asn_MAP_size4_oms_25[] = { 0 };
static ber_tlv_tag_t asn_DEF_size4_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_size4_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels at 15978 */
};
static asn_SEQUENCE_specifics_t asn_SPC_size4_specs_25 = {
	sizeof(struct AccessServiceClass_TDD_r7__subchannelSize__size4),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size4, _asn_ctx),
	asn_MAP_size4_tag2el_25,
	1,	/* Count of tags in the map */
	asn_MAP_size4_oms_25,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size4_25 = {
	"size4",
	"size4",
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
	asn_DEF_size4_tags_25,
	sizeof(asn_DEF_size4_tags_25)
		/sizeof(asn_DEF_size4_tags_25[0]) - 1, /* 1 */
	asn_DEF_size4_tags_25,	/* Same as above */
	sizeof(asn_DEF_size4_tags_25)
		/sizeof(asn_DEF_size4_tags_25[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_size4_25,
	1,	/* Elements count */
	&asn_SPC_size4_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size8_31[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size8, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_subchannels_constraint_31,
		&asn_PER_memb_subchannels_constr_32,
		0,
		"subchannels"
		},
};
static int asn_MAP_size8_oms_31[] = { 0 };
static ber_tlv_tag_t asn_DEF_size8_tags_31[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_size8_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels at 15986 */
};
static asn_SEQUENCE_specifics_t asn_SPC_size8_specs_31 = {
	sizeof(struct AccessServiceClass_TDD_r7__subchannelSize__size8),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size8, _asn_ctx),
	asn_MAP_size8_tag2el_31,
	1,	/* Count of tags in the map */
	asn_MAP_size8_oms_31,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size8_31 = {
	"size8",
	"size8",
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
	asn_DEF_size8_tags_31,
	sizeof(asn_DEF_size8_tags_31)
		/sizeof(asn_DEF_size8_tags_31[0]) - 1, /* 1 */
	asn_DEF_size8_tags_31,	/* Same as above */
	sizeof(asn_DEF_size8_tags_31)
		/sizeof(asn_DEF_size8_tags_31[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_size8_31,
	1,	/* Elements count */
	&asn_SPC_size8_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_size16_41[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size16, subchannels),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_subchannels_constraint_41,
		&asn_PER_memb_subchannels_constr_42,
		0,
		"subchannels"
		},
};
static int asn_MAP_size16_oms_41[] = { 0 };
static ber_tlv_tag_t asn_DEF_size16_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_size16_tag2el_41[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subchannels at 15998 */
};
static asn_SEQUENCE_specifics_t asn_SPC_size16_specs_41 = {
	sizeof(struct AccessServiceClass_TDD_r7__subchannelSize__size16),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize__size16, _asn_ctx),
	asn_MAP_size16_tag2el_41,
	1,	/* Count of tags in the map */
	asn_MAP_size16_oms_41,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_size16_41 = {
	"size16",
	"size16",
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
	asn_DEF_size16_tags_41,
	sizeof(asn_DEF_size16_tags_41)
		/sizeof(asn_DEF_size16_tags_41[0]) - 1, /* 1 */
	asn_DEF_size16_tags_41,	/* Same as above */
	sizeof(asn_DEF_size16_tags_41)
		/sizeof(asn_DEF_size16_tags_41[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_size16_41,
	1,	/* Elements count */
	&asn_SPC_size16_specs_41	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subchannelSize_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, choice.size1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, choice.size2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_size2_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, choice.size4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_size4_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, choice.size8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_size8_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, choice.size16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_size16_41,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"size16"
		},
};
static asn_TYPE_tag2member_t asn_MAP_subchannelSize_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* size1 at 15971 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* size2 at 15974 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* size4 at 15982 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* size8 at 15994 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* size16 at 16014 */
};
static asn_CHOICE_specifics_t asn_SPC_subchannelSize_specs_19 = {
	sizeof(struct AccessServiceClass_TDD_r7__subchannelSize),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, _asn_ctx),
	offsetof(struct AccessServiceClass_TDD_r7__subchannelSize, present),
	sizeof(((struct AccessServiceClass_TDD_r7__subchannelSize *)0)->present),
	asn_MAP_subchannelSize_tag2el_19,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subchannelSize_19 = {
	"subchannelSize",
	"subchannelSize",
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
	&asn_PER_type_subchannelSize_constr_19,
	asn_MBR_subchannelSize_19,
	5,	/* Elements count */
	&asn_SPC_subchannelSize_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_AccessServiceClass_TDD_r7_1[] = {
	{ ATF_POINTER, 1, offsetof(struct AccessServiceClass_TDD_r7, channelisationCodeIndices),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_channelisationCodeIndices_constraint_1,
		&asn_PER_memb_channelisationCodeIndices_constr_2,
		0,
		"channelisationCodeIndices"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccessServiceClass_TDD_r7, subchannelSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_subchannelSize_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subchannelSize"
		},
};
static int asn_MAP_AccessServiceClass_TDD_r7_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_AccessServiceClass_TDD_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AccessServiceClass_TDD_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCodeIndices at 15953 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subchannelSize at 15971 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AccessServiceClass_TDD_r7_specs_1 = {
	sizeof(struct AccessServiceClass_TDD_r7),
	offsetof(struct AccessServiceClass_TDD_r7, _asn_ctx),
	asn_MAP_AccessServiceClass_TDD_r7_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AccessServiceClass_TDD_r7_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_TDD_r7 = {
	"AccessServiceClass-TDD-r7",
	"AccessServiceClass-TDD-r7",
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
	asn_DEF_AccessServiceClass_TDD_r7_tags_1,
	sizeof(asn_DEF_AccessServiceClass_TDD_r7_tags_1)
		/sizeof(asn_DEF_AccessServiceClass_TDD_r7_tags_1[0]), /* 1 */
	asn_DEF_AccessServiceClass_TDD_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccessServiceClass_TDD_r7_tags_1)
		/sizeof(asn_DEF_AccessServiceClass_TDD_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AccessServiceClass_TDD_r7_1,
	2,	/* Elements count */
	&asn_SPC_AccessServiceClass_TDD_r7_specs_1	/* Additional specs */
};

