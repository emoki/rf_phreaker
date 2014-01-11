/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/VarianceOfRLC-BufferPayload.h"

int
VarianceOfRLC_BufferPayload_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
VarianceOfRLC_BufferPayload_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
VarianceOfRLC_BufferPayload_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
VarianceOfRLC_BufferPayload_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
VarianceOfRLC_BufferPayload_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
VarianceOfRLC_BufferPayload_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
VarianceOfRLC_BufferPayload_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
VarianceOfRLC_BufferPayload_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
VarianceOfRLC_BufferPayload_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	VarianceOfRLC_BufferPayload_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_VarianceOfRLC_BufferPayload_constr_1 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_VarianceOfRLC_BufferPayload_value2enum_1[] = {
	{ 0,	4,	"plv0" },
	{ 1,	4,	"plv4" },
	{ 2,	4,	"plv8" },
	{ 3,	5,	"plv16" },
	{ 4,	5,	"plv32" },
	{ 5,	5,	"plv64" },
	{ 6,	6,	"plv128" },
	{ 7,	6,	"plv256" },
	{ 8,	6,	"plv512" },
	{ 9,	7,	"plv1024" },
	{ 10,	5,	"plv2k" },
	{ 11,	5,	"plv4k" },
	{ 12,	5,	"plv8k" },
	{ 13,	6,	"plv16k" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_VarianceOfRLC_BufferPayload_enum2value_1[] = {
	0,	/* plv0(0) */
	9,	/* plv1024(9) */
	6,	/* plv128(6) */
	3,	/* plv16(3) */
	13,	/* plv16k(13) */
	7,	/* plv256(7) */
	10,	/* plv2k(10) */
	4,	/* plv32(4) */
	1,	/* plv4(1) */
	11,	/* plv4k(11) */
	8,	/* plv512(8) */
	5,	/* plv64(5) */
	2,	/* plv8(2) */
	12,	/* plv8k(12) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static asn_INTEGER_specifics_t asn_SPC_VarianceOfRLC_BufferPayload_specs_1 = {
	asn_MAP_VarianceOfRLC_BufferPayload_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_VarianceOfRLC_BufferPayload_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_VarianceOfRLC_BufferPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_VarianceOfRLC_BufferPayload = {
	"VarianceOfRLC-BufferPayload",
	"VarianceOfRLC-BufferPayload",
	VarianceOfRLC_BufferPayload_free,
	VarianceOfRLC_BufferPayload_print,
	VarianceOfRLC_BufferPayload_constraint,
	VarianceOfRLC_BufferPayload_decode_ber,
	VarianceOfRLC_BufferPayload_encode_der,
	VarianceOfRLC_BufferPayload_decode_xer,
	VarianceOfRLC_BufferPayload_encode_xer,
	VarianceOfRLC_BufferPayload_decode_uper,
	VarianceOfRLC_BufferPayload_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VarianceOfRLC_BufferPayload_tags_1,
	sizeof(asn_DEF_VarianceOfRLC_BufferPayload_tags_1)
		/sizeof(asn_DEF_VarianceOfRLC_BufferPayload_tags_1[0]), /* 1 */
	asn_DEF_VarianceOfRLC_BufferPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarianceOfRLC_BufferPayload_tags_1)
		/sizeof(asn_DEF_VarianceOfRLC_BufferPayload_tags_1[0]), /* 1 */
	&asn_PER_type_VarianceOfRLC_BufferPayload_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_VarianceOfRLC_BufferPayload_specs_1	/* Additional specs */
};

