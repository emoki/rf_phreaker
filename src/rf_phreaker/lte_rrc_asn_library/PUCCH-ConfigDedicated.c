/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/PUCCH-ConfigDedicated.h"

static int
repetitionFactor_5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
repetitionFactor_5_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
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
repetitionFactor_5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
repetitionFactor_5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
repetitionFactor_5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
repetitionFactor_5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
repetitionFactor_5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
repetitionFactor_5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
repetitionFactor_5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
repetitionFactor_5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	repetitionFactor_5_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_n1PUCCH_AN_Rep_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
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
tdd_AckNackFeedbackMode_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
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
tdd_AckNackFeedbackMode_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tdd_AckNackFeedbackMode_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tdd_AckNackFeedbackMode_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tdd_AckNackFeedbackMode_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tdd_AckNackFeedbackMode_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tdd_AckNackFeedbackMode_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tdd_AckNackFeedbackMode_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tdd_AckNackFeedbackMode_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tdd_AckNackFeedbackMode_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_repetitionFactor_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n1PUCCH_AN_Rep_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ackNackRepetition_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd_AckNackFeedbackMode_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_repetitionFactor_value2enum_5[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	6,	"spare1" }
};
static unsigned int asn_MAP_repetitionFactor_enum2value_5[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	3	/* spare1(3) */
};
static asn_INTEGER_specifics_t asn_SPC_repetitionFactor_specs_5 = {
	asn_MAP_repetitionFactor_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_repetitionFactor_enum2value_5,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_repetitionFactor_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_repetitionFactor_5 = {
	"repetitionFactor",
	"repetitionFactor",
	repetitionFactor_5_free,
	repetitionFactor_5_print,
	repetitionFactor_5_constraint,
	repetitionFactor_5_decode_ber,
	repetitionFactor_5_encode_der,
	repetitionFactor_5_decode_xer,
	repetitionFactor_5_encode_xer,
	repetitionFactor_5_decode_uper,
	repetitionFactor_5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_repetitionFactor_tags_5,
	sizeof(asn_DEF_repetitionFactor_tags_5)
		/sizeof(asn_DEF_repetitionFactor_tags_5[0]) - 1, /* 1 */
	asn_DEF_repetitionFactor_tags_5,	/* Same as above */
	sizeof(asn_DEF_repetitionFactor_tags_5)
		/sizeof(asn_DEF_repetitionFactor_tags_5[0]), /* 2 */
	&asn_PER_type_repetitionFactor_constr_5,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_repetitionFactor_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition__setup, repetitionFactor),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_repetitionFactor_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionFactor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition__setup, n1PUCCH_AN_Rep),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n1PUCCH_AN_Rep_constraint_4,
		&asn_PER_memb_n1PUCCH_AN_Rep_constr_10,
		0,
		"n1PUCCH-AN-Rep"
		},
};
static ber_tlv_tag_t asn_DEF_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* repetitionFactor */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* n1PUCCH-AN-Rep */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct PUCCH_ConfigDedicated__ackNackRepetition__setup),
	offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition__setup, _asn_ctx),
	asn_MAP_setup_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_4,
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_setup_tags_4)
		/sizeof(asn_DEF_setup_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_4,
	2,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ackNackRepetition_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ackNackRepetition_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_ackNackRepetition_specs_2 = {
	sizeof(struct PUCCH_ConfigDedicated__ackNackRepetition),
	offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition, _asn_ctx),
	offsetof(struct PUCCH_ConfigDedicated__ackNackRepetition, present),
	sizeof(((struct PUCCH_ConfigDedicated__ackNackRepetition *)0)->present),
	asn_MAP_ackNackRepetition_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ackNackRepetition_2 = {
	"ackNackRepetition",
	"ackNackRepetition",
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
	&asn_PER_type_ackNackRepetition_constr_2,
	asn_MBR_ackNackRepetition_2,
	2,	/* Elements count */
	&asn_SPC_ackNackRepetition_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_tdd_AckNackFeedbackMode_value2enum_11[] = {
	{ 0,	8,	"bundling" },
	{ 1,	12,	"multiplexing" }
};
static unsigned int asn_MAP_tdd_AckNackFeedbackMode_enum2value_11[] = {
	0,	/* bundling(0) */
	1	/* multiplexing(1) */
};
static asn_INTEGER_specifics_t asn_SPC_tdd_AckNackFeedbackMode_specs_11 = {
	asn_MAP_tdd_AckNackFeedbackMode_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_tdd_AckNackFeedbackMode_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_tdd_AckNackFeedbackMode_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_AckNackFeedbackMode_11 = {
	"tdd-AckNackFeedbackMode",
	"tdd-AckNackFeedbackMode",
	tdd_AckNackFeedbackMode_11_free,
	tdd_AckNackFeedbackMode_11_print,
	tdd_AckNackFeedbackMode_11_constraint,
	tdd_AckNackFeedbackMode_11_decode_ber,
	tdd_AckNackFeedbackMode_11_encode_der,
	tdd_AckNackFeedbackMode_11_decode_xer,
	tdd_AckNackFeedbackMode_11_encode_xer,
	tdd_AckNackFeedbackMode_11_decode_uper,
	tdd_AckNackFeedbackMode_11_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tdd_AckNackFeedbackMode_tags_11,
	sizeof(asn_DEF_tdd_AckNackFeedbackMode_tags_11)
		/sizeof(asn_DEF_tdd_AckNackFeedbackMode_tags_11[0]) - 1, /* 1 */
	asn_DEF_tdd_AckNackFeedbackMode_tags_11,	/* Same as above */
	sizeof(asn_DEF_tdd_AckNackFeedbackMode_tags_11)
		/sizeof(asn_DEF_tdd_AckNackFeedbackMode_tags_11[0]), /* 2 */
	&asn_PER_type_tdd_AckNackFeedbackMode_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tdd_AckNackFeedbackMode_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PUCCH_ConfigDedicated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PUCCH_ConfigDedicated, ackNackRepetition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ackNackRepetition_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ackNackRepetition"
		},
	{ ATF_POINTER, 1, offsetof(struct PUCCH_ConfigDedicated, tdd_AckNackFeedbackMode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdd_AckNackFeedbackMode_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd-AckNackFeedbackMode"
		},
};
static int asn_MAP_PUCCH_ConfigDedicated_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_PUCCH_ConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PUCCH_ConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ackNackRepetition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd-AckNackFeedbackMode */
};
static asn_SEQUENCE_specifics_t asn_SPC_PUCCH_ConfigDedicated_specs_1 = {
	sizeof(struct PUCCH_ConfigDedicated),
	offsetof(struct PUCCH_ConfigDedicated, _asn_ctx),
	asn_MAP_PUCCH_ConfigDedicated_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PUCCH_ConfigDedicated_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated = {
	"PUCCH-ConfigDedicated",
	"PUCCH-ConfigDedicated",
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
	asn_DEF_PUCCH_ConfigDedicated_tags_1,
	sizeof(asn_DEF_PUCCH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_ConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_ConfigDedicated_tags_1)
		/sizeof(asn_DEF_PUCCH_ConfigDedicated_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PUCCH_ConfigDedicated_1,
	2,	/* Elements count */
	&asn_SPC_PUCCH_ConfigDedicated_specs_1	/* Additional specs */
};

