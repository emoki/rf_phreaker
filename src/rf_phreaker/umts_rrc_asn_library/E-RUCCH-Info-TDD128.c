/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/E-RUCCH-Info-TDD128.h"

static int
t_RUCCH_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t_RUCCH_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t_RUCCH_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t_RUCCH_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t_RUCCH_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t_RUCCH_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t_RUCCH_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t_RUCCH_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t_RUCCH_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t_RUCCH_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_RUCCH_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
t_WAIT_20_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t_WAIT_20_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t_WAIT_20_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t_WAIT_20_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t_WAIT_20_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t_WAIT_20_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t_WAIT_20_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t_WAIT_20_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t_WAIT_20_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t_WAIT_20_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_WAIT_20_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
t_SI_29_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t_SI_29_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t_SI_29_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t_SI_29_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t_SI_29_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t_SI_29_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t_SI_29_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t_SI_29_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t_SI_29_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t_SI_29_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t_SI_29_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t_SI_29_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_n_RUCCH_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_extendedEstimationWindow_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_t_RUCCH_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t_WAIT_constr_20 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_t_SI_constr_29 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_RUCCH_constr_19 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_extendedEstimationWindow_constr_37 = {
	{ APC_CONSTRAINED,	 2,  2,  2,  5 }	/* (2..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_t_RUCCH_value2enum_2[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms60" },
	{ 3,	4,	"ms80" },
	{ 4,	5,	"ms120" },
	{ 5,	5,	"ms160" },
	{ 6,	5,	"ms200" },
	{ 7,	5,	"ms240" },
	{ 8,	5,	"ms280" },
	{ 9,	5,	"ms320" },
	{ 10,	5,	"ms400" },
	{ 11,	5,	"ms500" },
	{ 12,	5,	"ms600" },
	{ 13,	5,	"ms800" },
	{ 14,	6,	"ms1000" },
	{ 15,	6,	"ms2000" }
};
static unsigned int asn_MAP_t_RUCCH_enum2value_2[] = {
	14,	/* ms1000(14) */
	4,	/* ms120(4) */
	5,	/* ms160(5) */
	0,	/* ms20(0) */
	6,	/* ms200(6) */
	15,	/* ms2000(15) */
	7,	/* ms240(7) */
	8,	/* ms280(8) */
	9,	/* ms320(9) */
	1,	/* ms40(1) */
	10,	/* ms400(10) */
	11,	/* ms500(11) */
	2,	/* ms60(2) */
	12,	/* ms600(12) */
	3,	/* ms80(3) */
	13	/* ms800(13) */
};
static asn_INTEGER_specifics_t asn_SPC_t_RUCCH_specs_2 = {
	asn_MAP_t_RUCCH_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_t_RUCCH_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t_RUCCH_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_RUCCH_2 = {
	"t-RUCCH",
	"t-RUCCH",
	t_RUCCH_2_free,
	t_RUCCH_2_print,
	t_RUCCH_2_constraint,
	t_RUCCH_2_decode_ber,
	t_RUCCH_2_encode_der,
	t_RUCCH_2_decode_xer,
	t_RUCCH_2_encode_xer,
	t_RUCCH_2_decode_uper,
	t_RUCCH_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t_RUCCH_tags_2,
	sizeof(asn_DEF_t_RUCCH_tags_2)
		/sizeof(asn_DEF_t_RUCCH_tags_2[0]) - 1, /* 1 */
	asn_DEF_t_RUCCH_tags_2,	/* Same as above */
	sizeof(asn_DEF_t_RUCCH_tags_2)
		/sizeof(asn_DEF_t_RUCCH_tags_2[0]), /* 2 */
	&asn_PER_type_t_RUCCH_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_RUCCH_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_t_WAIT_value2enum_20[] = {
	{ 0,	12,	"everyEDCHTTI" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms80" },
	{ 3,	5,	"ms160" },
	{ 4,	5,	"ms320" },
	{ 5,	5,	"ms640" },
	{ 6,	6,	"ms1000" },
	{ 7,	6,	"ms2000" }
};
static unsigned int asn_MAP_t_WAIT_enum2value_20[] = {
	0,	/* everyEDCHTTI(0) */
	6,	/* ms1000(6) */
	3,	/* ms160(3) */
	7,	/* ms2000(7) */
	4,	/* ms320(4) */
	1,	/* ms40(1) */
	5,	/* ms640(5) */
	2	/* ms80(2) */
};
static asn_INTEGER_specifics_t asn_SPC_t_WAIT_specs_20 = {
	asn_MAP_t_WAIT_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_t_WAIT_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t_WAIT_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_WAIT_20 = {
	"t-WAIT",
	"t-WAIT",
	t_WAIT_20_free,
	t_WAIT_20_print,
	t_WAIT_20_constraint,
	t_WAIT_20_decode_ber,
	t_WAIT_20_encode_der,
	t_WAIT_20_decode_xer,
	t_WAIT_20_encode_xer,
	t_WAIT_20_decode_uper,
	t_WAIT_20_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t_WAIT_tags_20,
	sizeof(asn_DEF_t_WAIT_tags_20)
		/sizeof(asn_DEF_t_WAIT_tags_20[0]) - 1, /* 1 */
	asn_DEF_t_WAIT_tags_20,	/* Same as above */
	sizeof(asn_DEF_t_WAIT_tags_20)
		/sizeof(asn_DEF_t_WAIT_tags_20[0]), /* 2 */
	&asn_PER_type_t_WAIT_constr_20,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_WAIT_specs_20	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_t_SI_value2enum_29[] = {
	{ 0,	12,	"everyEDCHTTI" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms40" },
	{ 3,	4,	"ms60" },
	{ 4,	4,	"ms80" },
	{ 5,	5,	"ms160" },
	{ 6,	5,	"ms200" }
};
static unsigned int asn_MAP_t_SI_enum2value_29[] = {
	0,	/* everyEDCHTTI(0) */
	5,	/* ms160(5) */
	1,	/* ms20(1) */
	6,	/* ms200(6) */
	2,	/* ms40(2) */
	3,	/* ms60(3) */
	4	/* ms80(4) */
};
static asn_INTEGER_specifics_t asn_SPC_t_SI_specs_29 = {
	asn_MAP_t_SI_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_t_SI_enum2value_29,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t_SI_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t_SI_29 = {
	"t-SI",
	"t-SI",
	t_SI_29_free,
	t_SI_29_print,
	t_SI_29_constraint,
	t_SI_29_decode_ber,
	t_SI_29_encode_der,
	t_SI_29_decode_xer,
	t_SI_29_encode_xer,
	t_SI_29_decode_uper,
	t_SI_29_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t_SI_tags_29,
	sizeof(asn_DEF_t_SI_tags_29)
		/sizeof(asn_DEF_t_SI_tags_29[0]) - 1, /* 1 */
	asn_DEF_t_SI_tags_29,	/* Same as above */
	sizeof(asn_DEF_t_SI_tags_29)
		/sizeof(asn_DEF_t_SI_tags_29[0]), /* 2 */
	&asn_PER_type_t_SI_constr_29,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t_SI_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E_RUCCH_Info_TDD128_1[] = {
	{ ATF_POINTER, 9, offsetof(struct E_RUCCH_Info_TDD128, t_RUCCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_RUCCH_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-RUCCH"
		},
	{ ATF_POINTER, 8, offsetof(struct E_RUCCH_Info_TDD128, n_RUCCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_RUCCH_constraint_1,
		&asn_PER_memb_n_RUCCH_constr_19,
		0,
		"n-RUCCH"
		},
	{ ATF_POINTER, 7, offsetof(struct E_RUCCH_Info_TDD128, t_WAIT),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_WAIT_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-WAIT"
		},
	{ ATF_POINTER, 6, offsetof(struct E_RUCCH_Info_TDD128, t_SI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t_SI_29,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-SI"
		},
	{ ATF_POINTER, 5, offsetof(struct E_RUCCH_Info_TDD128, extendedEstimationWindow),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_extendedEstimationWindow_constraint_1,
		&asn_PER_memb_extendedEstimationWindow_constr_37,
		0,
		"extendedEstimationWindow"
		},
	{ ATF_POINTER, 4, offsetof(struct E_RUCCH_Info_TDD128, e_RUCCH_AccessServiceClass),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RUCCH_AccessServiceClass,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RUCCH-AccessServiceClass"
		},
	{ ATF_POINTER, 3, offsetof(struct E_RUCCH_Info_TDD128, e_RUCCH_PersistenceScalingFactor),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PersistenceScalingFactorList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RUCCH-PersistenceScalingFactor"
		},
	{ ATF_POINTER, 2, offsetof(struct E_RUCCH_Info_TDD128, sync_UL_InfoForE_RUCCH),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SYNC_UL_InfoForE_RUCCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sync-UL-InfoForE-RUCCH"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RUCCH_Info_TDD128, prach_information),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PRACH_Information_LCR_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prach-information"
		},
};
static int asn_MAP_E_RUCCH_Info_TDD128_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static ber_tlv_tag_t asn_DEF_E_RUCCH_Info_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_E_RUCCH_Info_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-RUCCH at 18262 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n-RUCCH at 18266 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-WAIT at 18267 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t-SI at 18269 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* extendedEstimationWindow at 18271 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e-RUCCH-AccessServiceClass at 18272 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* e-RUCCH-PersistenceScalingFactor at 18273 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sync-UL-InfoForE-RUCCH at 18274 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* prach-information at 18275 */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_RUCCH_Info_TDD128_specs_1 = {
	sizeof(struct E_RUCCH_Info_TDD128),
	offsetof(struct E_RUCCH_Info_TDD128, _asn_ctx),
	asn_MAP_E_RUCCH_Info_TDD128_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_E_RUCCH_Info_TDD128_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_RUCCH_Info_TDD128 = {
	"E-RUCCH-Info-TDD128",
	"E-RUCCH-Info-TDD128",
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
	asn_DEF_E_RUCCH_Info_TDD128_tags_1,
	sizeof(asn_DEF_E_RUCCH_Info_TDD128_tags_1)
		/sizeof(asn_DEF_E_RUCCH_Info_TDD128_tags_1[0]), /* 1 */
	asn_DEF_E_RUCCH_Info_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RUCCH_Info_TDD128_tags_1)
		/sizeof(asn_DEF_E_RUCCH_Info_TDD128_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_RUCCH_Info_TDD128_1,
	9,	/* Elements count */
	&asn_SPC_E_RUCCH_Info_TDD128_specs_1	/* Additional specs */
};

