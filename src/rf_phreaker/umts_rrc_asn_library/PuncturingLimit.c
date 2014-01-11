/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/PuncturingLimit.h"

int
PuncturingLimit_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
PuncturingLimit_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
PuncturingLimit_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
PuncturingLimit_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
PuncturingLimit_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
PuncturingLimit_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
PuncturingLimit_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
PuncturingLimit_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
PuncturingLimit_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
PuncturingLimit_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	PuncturingLimit_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_PuncturingLimit_constr_1 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_PuncturingLimit_value2enum_1[] = {
	{ 0,	6,	"pl0-40" },
	{ 1,	6,	"pl0-44" },
	{ 2,	6,	"pl0-48" },
	{ 3,	6,	"pl0-52" },
	{ 4,	6,	"pl0-56" },
	{ 5,	6,	"pl0-60" },
	{ 6,	6,	"pl0-64" },
	{ 7,	6,	"pl0-68" },
	{ 8,	6,	"pl0-72" },
	{ 9,	6,	"pl0-76" },
	{ 10,	6,	"pl0-80" },
	{ 11,	6,	"pl0-84" },
	{ 12,	6,	"pl0-88" },
	{ 13,	6,	"pl0-92" },
	{ 14,	6,	"pl0-96" },
	{ 15,	3,	"pl1" }
};
static unsigned int asn_MAP_PuncturingLimit_enum2value_1[] = {
	0,	/* pl0-40(0) */
	1,	/* pl0-44(1) */
	2,	/* pl0-48(2) */
	3,	/* pl0-52(3) */
	4,	/* pl0-56(4) */
	5,	/* pl0-60(5) */
	6,	/* pl0-64(6) */
	7,	/* pl0-68(7) */
	8,	/* pl0-72(8) */
	9,	/* pl0-76(9) */
	10,	/* pl0-80(10) */
	11,	/* pl0-84(11) */
	12,	/* pl0-88(12) */
	13,	/* pl0-92(13) */
	14,	/* pl0-96(14) */
	15	/* pl1(15) */
};
static asn_INTEGER_specifics_t asn_SPC_PuncturingLimit_specs_1 = {
	asn_MAP_PuncturingLimit_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PuncturingLimit_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_PuncturingLimit_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PuncturingLimit = {
	"PuncturingLimit",
	"PuncturingLimit",
	PuncturingLimit_free,
	PuncturingLimit_print,
	PuncturingLimit_constraint,
	PuncturingLimit_decode_ber,
	PuncturingLimit_encode_der,
	PuncturingLimit_decode_xer,
	PuncturingLimit_encode_xer,
	PuncturingLimit_decode_uper,
	PuncturingLimit_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PuncturingLimit_tags_1,
	sizeof(asn_DEF_PuncturingLimit_tags_1)
		/sizeof(asn_DEF_PuncturingLimit_tags_1[0]), /* 1 */
	asn_DEF_PuncturingLimit_tags_1,	/* Same as above */
	sizeof(asn_DEF_PuncturingLimit_tags_1)
		/sizeof(asn_DEF_PuncturingLimit_tags_1[0]), /* 1 */
	&asn_PER_type_PuncturingLimit_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PuncturingLimit_specs_1	/* Additional specs */
};

