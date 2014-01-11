/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/Handover.h"

static int
targetRAT_Type_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
targetRAT_Type_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
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
targetRAT_Type_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
targetRAT_Type_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
targetRAT_Type_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
targetRAT_Type_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
targetRAT_Type_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
targetRAT_Type_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
targetRAT_Type_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
targetRAT_Type_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	targetRAT_Type_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_nas_SecurityParamFromEUTRA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_targetRAT_Type_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nas_SecurityParamFromEUTRA_constr_13 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_targetRAT_Type_value2enum_2[] = {
	{ 0,	4,	"utra" },
	{ 1,	5,	"geran" },
	{ 2,	14,	"cdma2000-1XRTT" },
	{ 3,	13,	"cdma2000-HRPD" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static unsigned int asn_MAP_targetRAT_Type_enum2value_2[] = {
	2,	/* cdma2000-1XRTT(2) */
	3,	/* cdma2000-HRPD(3) */
	1,	/* geran(1) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	0	/* utra(0) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_targetRAT_Type_specs_2 = {
	asn_MAP_targetRAT_Type_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_targetRAT_Type_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_targetRAT_Type_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_targetRAT_Type_2 = {
	"targetRAT-Type",
	"targetRAT-Type",
	targetRAT_Type_2_free,
	targetRAT_Type_2_print,
	targetRAT_Type_2_constraint,
	targetRAT_Type_2_decode_ber,
	targetRAT_Type_2_encode_der,
	targetRAT_Type_2_decode_xer,
	targetRAT_Type_2_encode_xer,
	targetRAT_Type_2_decode_uper,
	targetRAT_Type_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_targetRAT_Type_tags_2,
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]) - 1, /* 1 */
	asn_DEF_targetRAT_Type_tags_2,	/* Same as above */
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]), /* 2 */
	&asn_PER_type_targetRAT_Type_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_targetRAT_Type_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Handover_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Handover, targetRAT_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_targetRAT_Type_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetRAT-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Handover, targetRAT_MessageContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetRAT-MessageContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct Handover, nas_SecurityParamFromEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_nas_SecurityParamFromEUTRA_constraint_1,
		&asn_PER_memb_nas_SecurityParamFromEUTRA_constr_13,
		0,
		"nas-SecurityParamFromEUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct Handover, systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SI_OrPSI_GERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"systemInformation"
		},
};
static int asn_MAP_Handover_oms_1[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_Handover_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Handover_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRAT-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetRAT-MessageContainer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nas-SecurityParamFromEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* systemInformation */
};
static asn_SEQUENCE_specifics_t asn_SPC_Handover_specs_1 = {
	sizeof(struct Handover),
	offsetof(struct Handover, _asn_ctx),
	asn_MAP_Handover_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Handover_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Handover = {
	"Handover",
	"Handover",
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
	asn_DEF_Handover_tags_1,
	sizeof(asn_DEF_Handover_tags_1)
		/sizeof(asn_DEF_Handover_tags_1[0]), /* 1 */
	asn_DEF_Handover_tags_1,	/* Same as above */
	sizeof(asn_DEF_Handover_tags_1)
		/sizeof(asn_DEF_Handover_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Handover_1,
	4,	/* Elements count */
	&asn_SPC_Handover_specs_1	/* Additional specs */
};

