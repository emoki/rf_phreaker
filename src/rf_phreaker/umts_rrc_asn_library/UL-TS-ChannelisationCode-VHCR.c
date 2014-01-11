/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UL-TS-ChannelisationCode-VHCR.h"

int
UL_TS_ChannelisationCode_VHCR_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
UL_TS_ChannelisationCode_VHCR_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
UL_TS_ChannelisationCode_VHCR_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
UL_TS_ChannelisationCode_VHCR_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
UL_TS_ChannelisationCode_VHCR_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
UL_TS_ChannelisationCode_VHCR_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
UL_TS_ChannelisationCode_VHCR_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
UL_TS_ChannelisationCode_VHCR_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
UL_TS_ChannelisationCode_VHCR_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	UL_TS_ChannelisationCode_VHCR_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_UL_TS_ChannelisationCode_VHCR_constr_1 = {
	{ APC_CONSTRAINED,	 6,  6,  0,  62 }	/* (0..62) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_UL_TS_ChannelisationCode_VHCR_value2enum_1[] = {
	{ 0,	5,	"cc1-1" },
	{ 1,	5,	"cc2-1" },
	{ 2,	5,	"cc2-2" },
	{ 3,	5,	"cc4-1" },
	{ 4,	5,	"cc4-2" },
	{ 5,	5,	"cc4-3" },
	{ 6,	5,	"cc4-4" },
	{ 7,	5,	"cc8-1" },
	{ 8,	5,	"cc8-2" },
	{ 9,	5,	"cc8-3" },
	{ 10,	5,	"cc8-4" },
	{ 11,	5,	"cc8-5" },
	{ 12,	5,	"cc8-6" },
	{ 13,	5,	"cc8-7" },
	{ 14,	5,	"cc8-8" },
	{ 15,	6,	"cc16-1" },
	{ 16,	6,	"cc16-2" },
	{ 17,	6,	"cc16-3" },
	{ 18,	6,	"cc16-4" },
	{ 19,	6,	"cc16-5" },
	{ 20,	6,	"cc16-6" },
	{ 21,	6,	"cc16-7" },
	{ 22,	6,	"cc16-8" },
	{ 23,	6,	"cc16-9" },
	{ 24,	7,	"cc16-10" },
	{ 25,	7,	"cc16-11" },
	{ 26,	7,	"cc16-12" },
	{ 27,	7,	"cc16-13" },
	{ 28,	7,	"cc16-14" },
	{ 29,	7,	"cc16-15" },
	{ 30,	7,	"cc16-16" },
	{ 31,	6,	"cc32-1" },
	{ 32,	6,	"cc32-2" },
	{ 33,	6,	"cc32-3" },
	{ 34,	6,	"cc32-4" },
	{ 35,	6,	"cc32-5" },
	{ 36,	6,	"cc32-6" },
	{ 37,	6,	"cc32-7" },
	{ 38,	6,	"cc32-8" },
	{ 39,	6,	"cc32-9" },
	{ 40,	7,	"cc32-10" },
	{ 41,	7,	"cc32-11" },
	{ 42,	7,	"cc32-12" },
	{ 43,	7,	"cc32-13" },
	{ 44,	7,	"cc32-14" },
	{ 45,	7,	"cc32-15" },
	{ 46,	7,	"cc32-16" },
	{ 47,	7,	"cc32-17" },
	{ 48,	7,	"cc32-18" },
	{ 49,	7,	"cc32-19" },
	{ 50,	7,	"cc32-20" },
	{ 51,	7,	"cc32-21" },
	{ 52,	7,	"cc32-22" },
	{ 53,	7,	"cc32-23" },
	{ 54,	7,	"cc32-24" },
	{ 55,	7,	"cc32-25" },
	{ 56,	7,	"cc32-26" },
	{ 57,	7,	"cc32-27" },
	{ 58,	7,	"cc32-28" },
	{ 59,	7,	"cc32-29" },
	{ 60,	7,	"cc32-30" },
	{ 61,	7,	"cc32-31" },
	{ 62,	7,	"cc32-32" }
};
static unsigned int asn_MAP_UL_TS_ChannelisationCode_VHCR_enum2value_1[] = {
	0,	/* cc1-1(0) */
	15,	/* cc16-1(15) */
	24,	/* cc16-10(24) */
	25,	/* cc16-11(25) */
	26,	/* cc16-12(26) */
	27,	/* cc16-13(27) */
	28,	/* cc16-14(28) */
	29,	/* cc16-15(29) */
	30,	/* cc16-16(30) */
	16,	/* cc16-2(16) */
	17,	/* cc16-3(17) */
	18,	/* cc16-4(18) */
	19,	/* cc16-5(19) */
	20,	/* cc16-6(20) */
	21,	/* cc16-7(21) */
	22,	/* cc16-8(22) */
	23,	/* cc16-9(23) */
	1,	/* cc2-1(1) */
	2,	/* cc2-2(2) */
	31,	/* cc32-1(31) */
	40,	/* cc32-10(40) */
	41,	/* cc32-11(41) */
	42,	/* cc32-12(42) */
	43,	/* cc32-13(43) */
	44,	/* cc32-14(44) */
	45,	/* cc32-15(45) */
	46,	/* cc32-16(46) */
	47,	/* cc32-17(47) */
	48,	/* cc32-18(48) */
	49,	/* cc32-19(49) */
	32,	/* cc32-2(32) */
	50,	/* cc32-20(50) */
	51,	/* cc32-21(51) */
	52,	/* cc32-22(52) */
	53,	/* cc32-23(53) */
	54,	/* cc32-24(54) */
	55,	/* cc32-25(55) */
	56,	/* cc32-26(56) */
	57,	/* cc32-27(57) */
	58,	/* cc32-28(58) */
	59,	/* cc32-29(59) */
	33,	/* cc32-3(33) */
	60,	/* cc32-30(60) */
	61,	/* cc32-31(61) */
	62,	/* cc32-32(62) */
	34,	/* cc32-4(34) */
	35,	/* cc32-5(35) */
	36,	/* cc32-6(36) */
	37,	/* cc32-7(37) */
	38,	/* cc32-8(38) */
	39,	/* cc32-9(39) */
	3,	/* cc4-1(3) */
	4,	/* cc4-2(4) */
	5,	/* cc4-3(5) */
	6,	/* cc4-4(6) */
	7,	/* cc8-1(7) */
	8,	/* cc8-2(8) */
	9,	/* cc8-3(9) */
	10,	/* cc8-4(10) */
	11,	/* cc8-5(11) */
	12,	/* cc8-6(12) */
	13,	/* cc8-7(13) */
	14	/* cc8-8(14) */
};
static asn_INTEGER_specifics_t asn_SPC_UL_TS_ChannelisationCode_VHCR_specs_1 = {
	asn_MAP_UL_TS_ChannelisationCode_VHCR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_UL_TS_ChannelisationCode_VHCR_enum2value_1,	/* N => "tag"; sorted by N */
	63,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UL_TS_ChannelisationCode_VHCR = {
	"UL-TS-ChannelisationCode-VHCR",
	"UL-TS-ChannelisationCode-VHCR",
	UL_TS_ChannelisationCode_VHCR_free,
	UL_TS_ChannelisationCode_VHCR_print,
	UL_TS_ChannelisationCode_VHCR_constraint,
	UL_TS_ChannelisationCode_VHCR_decode_ber,
	UL_TS_ChannelisationCode_VHCR_encode_der,
	UL_TS_ChannelisationCode_VHCR_decode_xer,
	UL_TS_ChannelisationCode_VHCR_encode_xer,
	UL_TS_ChannelisationCode_VHCR_decode_uper,
	UL_TS_ChannelisationCode_VHCR_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1,
	sizeof(asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1)
		/sizeof(asn_DEF_UL_TS_ChannelisationCode_VHCR_tags_1[0]), /* 1 */
	&asn_PER_type_UL_TS_ChannelisationCode_VHCR_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_UL_TS_ChannelisationCode_VHCR_specs_1	/* Additional specs */
};

