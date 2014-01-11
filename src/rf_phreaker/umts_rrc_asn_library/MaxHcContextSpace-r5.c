/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MaxHcContextSpace-r5.h"

int
MaxHcContextSpace_r5_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
MaxHcContextSpace_r5_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
MaxHcContextSpace_r5_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
MaxHcContextSpace_r5_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
MaxHcContextSpace_r5_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
MaxHcContextSpace_r5_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
MaxHcContextSpace_r5_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
MaxHcContextSpace_r5_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
MaxHcContextSpace_r5_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	MaxHcContextSpace_r5_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_MaxHcContextSpace_r5_constr_1 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_MaxHcContextSpace_r5_value2enum_1[] = {
	{ 0,	5,	"dummy" },
	{ 1,	6,	"by1024" },
	{ 2,	6,	"by2048" },
	{ 3,	6,	"by4096" },
	{ 4,	6,	"by8192" },
	{ 5,	7,	"by16384" },
	{ 6,	7,	"by32768" },
	{ 7,	7,	"by65536" },
	{ 8,	8,	"by131072" }
};
static unsigned int asn_MAP_MaxHcContextSpace_r5_enum2value_1[] = {
	1,	/* by1024(1) */
	8,	/* by131072(8) */
	5,	/* by16384(5) */
	2,	/* by2048(2) */
	6,	/* by32768(6) */
	3,	/* by4096(3) */
	7,	/* by65536(7) */
	4,	/* by8192(4) */
	0	/* dummy(0) */
};
static asn_INTEGER_specifics_t asn_SPC_MaxHcContextSpace_r5_specs_1 = {
	asn_MAP_MaxHcContextSpace_r5_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MaxHcContextSpace_r5_enum2value_1,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_MaxHcContextSpace_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MaxHcContextSpace_r5 = {
	"MaxHcContextSpace-r5",
	"MaxHcContextSpace-r5",
	MaxHcContextSpace_r5_free,
	MaxHcContextSpace_r5_print,
	MaxHcContextSpace_r5_constraint,
	MaxHcContextSpace_r5_decode_ber,
	MaxHcContextSpace_r5_encode_der,
	MaxHcContextSpace_r5_decode_xer,
	MaxHcContextSpace_r5_encode_xer,
	MaxHcContextSpace_r5_decode_uper,
	MaxHcContextSpace_r5_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MaxHcContextSpace_r5_tags_1,
	sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1)
		/sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1[0]), /* 1 */
	asn_DEF_MaxHcContextSpace_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1)
		/sizeof(asn_DEF_MaxHcContextSpace_r5_tags_1[0]), /* 1 */
	&asn_PER_type_MaxHcContextSpace_r5_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MaxHcContextSpace_r5_specs_1	/* Additional specs */
};

