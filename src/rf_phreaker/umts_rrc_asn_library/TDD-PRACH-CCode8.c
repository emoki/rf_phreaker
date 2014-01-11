/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/TDD-PRACH-CCode8.h"

int
TDD_PRACH_CCode8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
TDD_PRACH_CCode8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TDD_PRACH_CCode8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TDD_PRACH_CCode8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TDD_PRACH_CCode8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TDD_PRACH_CCode8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TDD_PRACH_CCode8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
TDD_PRACH_CCode8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
TDD_PRACH_CCode8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	TDD_PRACH_CCode8_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_TDD_PRACH_CCode8_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_TDD_PRACH_CCode8_value2enum_1[] = {
	{ 0,	5,	"cc8-1" },
	{ 1,	5,	"cc8-2" },
	{ 2,	5,	"cc8-3" },
	{ 3,	5,	"cc8-4" },
	{ 4,	5,	"cc8-5" },
	{ 5,	5,	"cc8-6" },
	{ 6,	5,	"cc8-7" },
	{ 7,	5,	"cc8-8" }
};
static unsigned int asn_MAP_TDD_PRACH_CCode8_enum2value_1[] = {
	0,	/* cc8-1(0) */
	1,	/* cc8-2(1) */
	2,	/* cc8-3(2) */
	3,	/* cc8-4(3) */
	4,	/* cc8-5(4) */
	5,	/* cc8-6(5) */
	6,	/* cc8-7(6) */
	7	/* cc8-8(7) */
};
static asn_INTEGER_specifics_t asn_SPC_TDD_PRACH_CCode8_specs_1 = {
	asn_MAP_TDD_PRACH_CCode8_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TDD_PRACH_CCode8_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_TDD_PRACH_CCode8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TDD_PRACH_CCode8 = {
	"TDD-PRACH-CCode8",
	"TDD-PRACH-CCode8",
	TDD_PRACH_CCode8_free,
	TDD_PRACH_CCode8_print,
	TDD_PRACH_CCode8_constraint,
	TDD_PRACH_CCode8_decode_ber,
	TDD_PRACH_CCode8_encode_der,
	TDD_PRACH_CCode8_decode_xer,
	TDD_PRACH_CCode8_encode_xer,
	TDD_PRACH_CCode8_decode_uper,
	TDD_PRACH_CCode8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TDD_PRACH_CCode8_tags_1,
	sizeof(asn_DEF_TDD_PRACH_CCode8_tags_1)
		/sizeof(asn_DEF_TDD_PRACH_CCode8_tags_1[0]), /* 1 */
	asn_DEF_TDD_PRACH_CCode8_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_PRACH_CCode8_tags_1)
		/sizeof(asn_DEF_TDD_PRACH_CCode8_tags_1[0]), /* 1 */
	&asn_PER_type_TDD_PRACH_CCode8_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TDD_PRACH_CCode8_specs_1	/* Additional specs */
};

