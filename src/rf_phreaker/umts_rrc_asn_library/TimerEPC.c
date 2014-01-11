/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/TimerEPC.h"

int
TimerEPC_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
TimerEPC_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
TimerEPC_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
TimerEPC_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
TimerEPC_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
TimerEPC_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
TimerEPC_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
TimerEPC_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
TimerEPC_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
TimerEPC_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	TimerEPC_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_TimerEPC_constr_1 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_TimerEPC_value2enum_1[] = {
	{ 0,	4,	"te50" },
	{ 1,	4,	"te60" },
	{ 2,	4,	"te70" },
	{ 3,	4,	"te80" },
	{ 4,	4,	"te90" },
	{ 5,	5,	"te100" },
	{ 6,	5,	"te120" },
	{ 7,	5,	"te140" },
	{ 8,	5,	"te160" },
	{ 9,	5,	"te180" },
	{ 10,	5,	"te200" },
	{ 11,	5,	"te300" },
	{ 12,	5,	"te400" },
	{ 13,	5,	"te500" },
	{ 14,	5,	"te700" },
	{ 15,	5,	"te900" }
};
static unsigned int asn_MAP_TimerEPC_enum2value_1[] = {
	5,	/* te100(5) */
	6,	/* te120(6) */
	7,	/* te140(7) */
	8,	/* te160(8) */
	9,	/* te180(9) */
	10,	/* te200(10) */
	11,	/* te300(11) */
	12,	/* te400(12) */
	0,	/* te50(0) */
	13,	/* te500(13) */
	1,	/* te60(1) */
	2,	/* te70(2) */
	14,	/* te700(14) */
	3,	/* te80(3) */
	4,	/* te90(4) */
	15	/* te900(15) */
};
static asn_INTEGER_specifics_t asn_SPC_TimerEPC_specs_1 = {
	asn_MAP_TimerEPC_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TimerEPC_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_TimerEPC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TimerEPC = {
	"TimerEPC",
	"TimerEPC",
	TimerEPC_free,
	TimerEPC_print,
	TimerEPC_constraint,
	TimerEPC_decode_ber,
	TimerEPC_encode_der,
	TimerEPC_decode_xer,
	TimerEPC_encode_xer,
	TimerEPC_decode_uper,
	TimerEPC_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TimerEPC_tags_1,
	sizeof(asn_DEF_TimerEPC_tags_1)
		/sizeof(asn_DEF_TimerEPC_tags_1[0]), /* 1 */
	asn_DEF_TimerEPC_tags_1,	/* Same as above */
	sizeof(asn_DEF_TimerEPC_tags_1)
		/sizeof(asn_DEF_TimerEPC_tags_1[0]), /* 1 */
	&asn_PER_type_TimerEPC_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TimerEPC_specs_1	/* Additional specs */
};

