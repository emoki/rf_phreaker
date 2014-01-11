/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/SCCPCH-ChannelisationCode-VHCR.h"

int
SCCPCH_ChannelisationCode_VHCR_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
SCCPCH_ChannelisationCode_VHCR_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SCCPCH_ChannelisationCode_VHCR_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SCCPCH_ChannelisationCode_VHCR_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SCCPCH_ChannelisationCode_VHCR_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SCCPCH_ChannelisationCode_VHCR_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SCCPCH_ChannelisationCode_VHCR_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
SCCPCH_ChannelisationCode_VHCR_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SCCPCH_ChannelisationCode_VHCR_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SCCPCH_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_SCCPCH_ChannelisationCode_VHCR_constr_1 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_SCCPCH_ChannelisationCode_VHCR_value2enum_1[] = {
	{ 0,	6,	"cc32-1" },
	{ 1,	6,	"cc32-2" },
	{ 2,	6,	"cc32-3" },
	{ 3,	6,	"cc32-4" },
	{ 4,	6,	"cc32-5" },
	{ 5,	6,	"cc32-6" },
	{ 6,	6,	"cc32-7" },
	{ 7,	6,	"cc32-8" },
	{ 8,	6,	"cc32-9" },
	{ 9,	7,	"cc32-10" },
	{ 10,	7,	"cc32-11" },
	{ 11,	7,	"cc32-12" },
	{ 12,	7,	"cc32-13" },
	{ 13,	7,	"cc32-14" },
	{ 14,	7,	"cc32-15" },
	{ 15,	7,	"cc32-16" },
	{ 16,	7,	"cc32-17" },
	{ 17,	7,	"cc32-18" },
	{ 18,	7,	"cc32-19" },
	{ 19,	7,	"cc32-20" },
	{ 20,	7,	"cc32-21" },
	{ 21,	7,	"cc32-22" },
	{ 22,	7,	"cc32-23" },
	{ 23,	7,	"cc32-24" },
	{ 24,	7,	"cc32-25" },
	{ 25,	7,	"cc32-26" },
	{ 26,	7,	"cc32-27" },
	{ 27,	7,	"cc32-28" },
	{ 28,	7,	"cc32-29" },
	{ 29,	7,	"cc32-30" },
	{ 30,	7,	"cc32-31" },
	{ 31,	7,	"cc32-32" }
};
static unsigned int asn_MAP_SCCPCH_ChannelisationCode_VHCR_enum2value_1[] = {
	0,	/* cc32-1(0) */
	9,	/* cc32-10(9) */
	10,	/* cc32-11(10) */
	11,	/* cc32-12(11) */
	12,	/* cc32-13(12) */
	13,	/* cc32-14(13) */
	14,	/* cc32-15(14) */
	15,	/* cc32-16(15) */
	16,	/* cc32-17(16) */
	17,	/* cc32-18(17) */
	18,	/* cc32-19(18) */
	1,	/* cc32-2(1) */
	19,	/* cc32-20(19) */
	20,	/* cc32-21(20) */
	21,	/* cc32-22(21) */
	22,	/* cc32-23(22) */
	23,	/* cc32-24(23) */
	24,	/* cc32-25(24) */
	25,	/* cc32-26(25) */
	26,	/* cc32-27(26) */
	27,	/* cc32-28(27) */
	28,	/* cc32-29(28) */
	2,	/* cc32-3(2) */
	29,	/* cc32-30(29) */
	30,	/* cc32-31(30) */
	31,	/* cc32-32(31) */
	3,	/* cc32-4(3) */
	4,	/* cc32-5(4) */
	5,	/* cc32-6(5) */
	6,	/* cc32-7(6) */
	7,	/* cc32-8(7) */
	8	/* cc32-9(8) */
};
static asn_INTEGER_specifics_t asn_SPC_SCCPCH_ChannelisationCode_VHCR_specs_1 = {
	asn_MAP_SCCPCH_ChannelisationCode_VHCR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SCCPCH_ChannelisationCode_VHCR_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SCCPCH_ChannelisationCode_VHCR = {
	"SCCPCH-ChannelisationCode-VHCR",
	"SCCPCH-ChannelisationCode-VHCR",
	SCCPCH_ChannelisationCode_VHCR_free,
	SCCPCH_ChannelisationCode_VHCR_print,
	SCCPCH_ChannelisationCode_VHCR_constraint,
	SCCPCH_ChannelisationCode_VHCR_decode_ber,
	SCCPCH_ChannelisationCode_VHCR_encode_der,
	SCCPCH_ChannelisationCode_VHCR_decode_xer,
	SCCPCH_ChannelisationCode_VHCR_encode_xer,
	SCCPCH_ChannelisationCode_VHCR_decode_uper,
	SCCPCH_ChannelisationCode_VHCR_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1,
	sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_SCCPCH_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	&asn_PER_type_SCCPCH_ChannelisationCode_VHCR_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SCCPCH_ChannelisationCode_VHCR_specs_1	/* Additional specs */
};

