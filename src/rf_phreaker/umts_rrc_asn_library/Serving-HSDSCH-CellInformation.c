/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/Serving-HSDSCH-CellInformation.h"

static int
mac_hsResetIndicator_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
mac_hsResetIndicator_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
mac_hsResetIndicator_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
mac_hsResetIndicator_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
mac_hsResetIndicator_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
mac_hsResetIndicator_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
mac_hsResetIndicator_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
mac_hsResetIndicator_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
mac_hsResetIndicator_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
mac_hsResetIndicator_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	mac_hsResetIndicator_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_mac_hsResetIndicator_constr_8 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_mac_hsResetIndicator_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_mac_hsResetIndicator_enum2value_8[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_mac_hsResetIndicator_specs_8 = {
	asn_MAP_mac_hsResetIndicator_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_mac_hsResetIndicator_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_mac_hsResetIndicator_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_hsResetIndicator_8 = {
	"mac-hsResetIndicator",
	"mac-hsResetIndicator",
	mac_hsResetIndicator_8_free,
	mac_hsResetIndicator_8_print,
	mac_hsResetIndicator_8_constraint,
	mac_hsResetIndicator_8_decode_ber,
	mac_hsResetIndicator_8_encode_der,
	mac_hsResetIndicator_8_decode_xer,
	mac_hsResetIndicator_8_encode_xer,
	mac_hsResetIndicator_8_decode_uper,
	mac_hsResetIndicator_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_mac_hsResetIndicator_tags_8,
	sizeof(asn_DEF_mac_hsResetIndicator_tags_8)
		/sizeof(asn_DEF_mac_hsResetIndicator_tags_8[0]) - 1, /* 1 */
	asn_DEF_mac_hsResetIndicator_tags_8,	/* Same as above */
	sizeof(asn_DEF_mac_hsResetIndicator_tags_8)
		/sizeof(asn_DEF_mac_hsResetIndicator_tags_8[0]), /* 2 */
	&asn_PER_type_mac_hsResetIndicator_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mac_hsResetIndicator_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Serving_HSDSCH_CellInformation_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Serving_HSDSCH_CellInformation, deltaACK),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaACK"
		},
	{ ATF_POINTER, 1, offsetof(struct Serving_HSDSCH_CellInformation, deltaNACK),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaNACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaNACK"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Serving_HSDSCH_CellInformation, harq_Preamble_Mode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HARQ_Preamble_Mode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"harq-Preamble-Mode"
		},
	{ ATF_POINTER, 4, offsetof(struct Serving_HSDSCH_CellInformation, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCPICH-Info"
		},
	{ ATF_POINTER, 3, offsetof(struct Serving_HSDSCH_CellInformation, dl_hspdsch_Information),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-hspdsch-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct Serving_HSDSCH_CellInformation, harqInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HARQ_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"harqInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct Serving_HSDSCH_CellInformation, mac_hsResetIndicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mac_hsResetIndicator_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-hsResetIndicator"
		},
};
static int asn_MAP_Serving_HSDSCH_CellInformation_oms_1[] = { 0, 1, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_Serving_HSDSCH_CellInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Serving_HSDSCH_CellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaACK at 12587 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaNACK at 12588 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* harq-Preamble-Mode at 12589 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* primaryCPICH-Info at 12590 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-hspdsch-Information at 12591 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* harqInfo at 12592 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* mac-hsResetIndicator at 12593 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Serving_HSDSCH_CellInformation_specs_1 = {
	sizeof(struct Serving_HSDSCH_CellInformation),
	offsetof(struct Serving_HSDSCH_CellInformation, _asn_ctx),
	asn_MAP_Serving_HSDSCH_CellInformation_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_Serving_HSDSCH_CellInformation_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Serving_HSDSCH_CellInformation = {
	"Serving-HSDSCH-CellInformation",
	"Serving-HSDSCH-CellInformation",
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
	asn_DEF_Serving_HSDSCH_CellInformation_tags_1,
	sizeof(asn_DEF_Serving_HSDSCH_CellInformation_tags_1)
		/sizeof(asn_DEF_Serving_HSDSCH_CellInformation_tags_1[0]), /* 1 */
	asn_DEF_Serving_HSDSCH_CellInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_Serving_HSDSCH_CellInformation_tags_1)
		/sizeof(asn_DEF_Serving_HSDSCH_CellInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Serving_HSDSCH_CellInformation_1,
	7,	/* Elements count */
	&asn_SPC_Serving_HSDSCH_CellInformation_specs_1	/* Additional specs */
};

