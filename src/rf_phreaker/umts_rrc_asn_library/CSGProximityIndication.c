/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CSGProximityIndication.h"

static int
cSGproximityInd_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
cSGproximityInd_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
cSGproximityInd_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cSGproximityInd_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cSGproximityInd_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cSGproximityInd_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cSGproximityInd_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cSGproximityInd_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
cSGproximityInd_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
cSGproximityInd_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cSGproximityInd_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_cSGproximityInd_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_radioAccessTechnology_constr_5 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_cSGproximityInd_value2enum_2[] = {
	{ 0,	8,	"entering" },
	{ 1,	7,	"leaving" }
};
static unsigned int asn_MAP_cSGproximityInd_enum2value_2[] = {
	0,	/* entering(0) */
	1	/* leaving(1) */
};
static asn_INTEGER_specifics_t asn_SPC_cSGproximityInd_specs_2 = {
	asn_MAP_cSGproximityInd_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_cSGproximityInd_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_cSGproximityInd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cSGproximityInd_2 = {
	"cSGproximityInd",
	"cSGproximityInd",
	cSGproximityInd_2_free,
	cSGproximityInd_2_print,
	cSGproximityInd_2_constraint,
	cSGproximityInd_2_decode_ber,
	cSGproximityInd_2_encode_der,
	cSGproximityInd_2_decode_xer,
	cSGproximityInd_2_encode_xer,
	cSGproximityInd_2_decode_uper,
	cSGproximityInd_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cSGproximityInd_tags_2,
	sizeof(asn_DEF_cSGproximityInd_tags_2)
		/sizeof(asn_DEF_cSGproximityInd_tags_2[0]) - 1, /* 1 */
	asn_DEF_cSGproximityInd_tags_2,	/* Same as above */
	sizeof(asn_DEF_cSGproximityInd_tags_2)
		/sizeof(asn_DEF_cSGproximityInd_tags_2[0]), /* 2 */
	&asn_PER_type_cSGproximityInd_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cSGproximityInd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uTRA_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication__radioAccessTechnology__uTRA, cSGFrequencyInfoUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cSGFrequencyInfoUTRA"
		},
};
static ber_tlv_tag_t asn_DEF_uTRA_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_uTRA_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cSGFrequencyInfoUTRA at 22844 */
};
static asn_SEQUENCE_specifics_t asn_SPC_uTRA_specs_6 = {
	sizeof(struct CSGProximityIndication__radioAccessTechnology__uTRA),
	offsetof(struct CSGProximityIndication__radioAccessTechnology__uTRA, _asn_ctx),
	asn_MAP_uTRA_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uTRA_6 = {
	"uTRA",
	"uTRA",
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
	asn_DEF_uTRA_tags_6,
	sizeof(asn_DEF_uTRA_tags_6)
		/sizeof(asn_DEF_uTRA_tags_6[0]) - 1, /* 1 */
	asn_DEF_uTRA_tags_6,	/* Same as above */
	sizeof(asn_DEF_uTRA_tags_6)
		/sizeof(asn_DEF_uTRA_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_uTRA_6,
	1,	/* Elements count */
	&asn_SPC_uTRA_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_e_UTRA_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication__radioAccessTechnology__e_UTRA, cSGFrequencyInfoEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EARFCN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cSGFrequencyInfoEUTRA"
		},
};
static ber_tlv_tag_t asn_DEF_e_UTRA_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_e_UTRA_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cSGFrequencyInfoEUTRA at 22847 */
};
static asn_SEQUENCE_specifics_t asn_SPC_e_UTRA_specs_8 = {
	sizeof(struct CSGProximityIndication__radioAccessTechnology__e_UTRA),
	offsetof(struct CSGProximityIndication__radioAccessTechnology__e_UTRA, _asn_ctx),
	asn_MAP_e_UTRA_tag2el_8,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e_UTRA_8 = {
	"e-UTRA",
	"e-UTRA",
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
	asn_DEF_e_UTRA_tags_8,
	sizeof(asn_DEF_e_UTRA_tags_8)
		/sizeof(asn_DEF_e_UTRA_tags_8[0]) - 1, /* 1 */
	asn_DEF_e_UTRA_tags_8,	/* Same as above */
	sizeof(asn_DEF_e_UTRA_tags_8)
		/sizeof(asn_DEF_e_UTRA_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_e_UTRA_8,
	1,	/* Elements count */
	&asn_SPC_e_UTRA_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_radioAccessTechnology_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication__radioAccessTechnology, choice.uTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_uTRA_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication__radioAccessTechnology, choice.e_UTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_e_UTRA_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-UTRA"
		},
};
static asn_TYPE_tag2member_t asn_MAP_radioAccessTechnology_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uTRA at 22844 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* e-UTRA at 22847 */
};
static asn_CHOICE_specifics_t asn_SPC_radioAccessTechnology_specs_5 = {
	sizeof(struct CSGProximityIndication__radioAccessTechnology),
	offsetof(struct CSGProximityIndication__radioAccessTechnology, _asn_ctx),
	offsetof(struct CSGProximityIndication__radioAccessTechnology, present),
	sizeof(((struct CSGProximityIndication__radioAccessTechnology *)0)->present),
	asn_MAP_radioAccessTechnology_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_radioAccessTechnology_5 = {
	"radioAccessTechnology",
	"radioAccessTechnology",
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
	&asn_PER_type_radioAccessTechnology_constr_5,
	asn_MBR_radioAccessTechnology_5,
	2,	/* Elements count */
	&asn_SPC_radioAccessTechnology_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CSGProximityIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication, cSGproximityInd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cSGproximityInd_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cSGproximityInd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSGProximityIndication, radioAccessTechnology),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_radioAccessTechnology_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioAccessTechnology"
		},
};
static ber_tlv_tag_t asn_DEF_CSGProximityIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSGProximityIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSGproximityInd at 22840 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* radioAccessTechnology at 22844 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSGProximityIndication_specs_1 = {
	sizeof(struct CSGProximityIndication),
	offsetof(struct CSGProximityIndication, _asn_ctx),
	asn_MAP_CSGProximityIndication_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSGProximityIndication = {
	"CSGProximityIndication",
	"CSGProximityIndication",
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
	asn_DEF_CSGProximityIndication_tags_1,
	sizeof(asn_DEF_CSGProximityIndication_tags_1)
		/sizeof(asn_DEF_CSGProximityIndication_tags_1[0]), /* 1 */
	asn_DEF_CSGProximityIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSGProximityIndication_tags_1)
		/sizeof(asn_DEF_CSGProximityIndication_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSGProximityIndication_1,
	2,	/* Elements count */
	&asn_SPC_CSGProximityIndication_specs_1	/* Additional specs */
};

