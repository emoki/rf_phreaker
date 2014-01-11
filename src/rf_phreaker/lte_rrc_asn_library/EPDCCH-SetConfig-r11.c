/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/EPDCCH-SetConfig-r11.h"

static int
transmissionType_r11_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
transmissionType_r11_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
transmissionType_r11_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
transmissionType_r11_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
transmissionType_r11_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
transmissionType_r11_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
transmissionType_r11_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
transmissionType_r11_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
transmissionType_r11_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
transmissionType_r11_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	transmissionType_r11_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
numberPRB_Pairs_r11_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
numberPRB_Pairs_r11_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numberPRB_Pairs_r11_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numberPRB_Pairs_r11_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numberPRB_Pairs_r11_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numberPRB_Pairs_r11_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numberPRB_Pairs_r11_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numberPRB_Pairs_r11_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numberPRB_Pairs_r11_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberPRB_Pairs_r11_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_resourceBlockAssignment_r11_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 4 && size <= 38)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dmrs_ScramblingSequenceInt_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 503)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pucch_ResourceStartOffset_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_transmissionType_r11_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_numberPRB_Pairs_r11_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_resourceBlockAssignment_r11_constr_11 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  4,  38 }	/* (SIZE(4..38)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dmrs_ScramblingSequenceInt_r11_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_pucch_ResourceStartOffset_r11_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_transmissionType_r11_value2enum_3[] = {
	{ 0,	9,	"localised" },
	{ 1,	11,	"distributed" }
};
static unsigned int asn_MAP_transmissionType_r11_enum2value_3[] = {
	1,	/* distributed(1) */
	0	/* localised(0) */
};
static asn_INTEGER_specifics_t asn_SPC_transmissionType_r11_specs_3 = {
	asn_MAP_transmissionType_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionType_r11_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_transmissionType_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionType_r11_3 = {
	"transmissionType-r11",
	"transmissionType-r11",
	transmissionType_r11_3_free,
	transmissionType_r11_3_print,
	transmissionType_r11_3_constraint,
	transmissionType_r11_3_decode_ber,
	transmissionType_r11_3_encode_der,
	transmissionType_r11_3_decode_xer,
	transmissionType_r11_3_encode_xer,
	transmissionType_r11_3_decode_uper,
	transmissionType_r11_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_transmissionType_r11_tags_3,
	sizeof(asn_DEF_transmissionType_r11_tags_3)
		/sizeof(asn_DEF_transmissionType_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_transmissionType_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_transmissionType_r11_tags_3)
		/sizeof(asn_DEF_transmissionType_r11_tags_3[0]), /* 2 */
	&asn_PER_type_transmissionType_r11_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionType_r11_specs_3	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_numberPRB_Pairs_r11_value2enum_7[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n8" }
};
static unsigned int asn_MAP_numberPRB_Pairs_r11_enum2value_7[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n8(2) */
};
static asn_INTEGER_specifics_t asn_SPC_numberPRB_Pairs_r11_specs_7 = {
	asn_MAP_numberPRB_Pairs_r11_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_numberPRB_Pairs_r11_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_numberPRB_Pairs_r11_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberPRB_Pairs_r11_7 = {
	"numberPRB-Pairs-r11",
	"numberPRB-Pairs-r11",
	numberPRB_Pairs_r11_7_free,
	numberPRB_Pairs_r11_7_print,
	numberPRB_Pairs_r11_7_constraint,
	numberPRB_Pairs_r11_7_decode_ber,
	numberPRB_Pairs_r11_7_encode_der,
	numberPRB_Pairs_r11_7_decode_xer,
	numberPRB_Pairs_r11_7_encode_xer,
	numberPRB_Pairs_r11_7_decode_uper,
	numberPRB_Pairs_r11_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numberPRB_Pairs_r11_tags_7,
	sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7)
		/sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7[0]) - 1, /* 1 */
	asn_DEF_numberPRB_Pairs_r11_tags_7,	/* Same as above */
	sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7)
		/sizeof(asn_DEF_numberPRB_Pairs_r11_tags_7[0]), /* 2 */
	&asn_PER_type_numberPRB_Pairs_r11_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberPRB_Pairs_r11_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_resourceBlockAssignment_r11_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, numberPRB_Pairs_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberPRB_Pairs_r11_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberPRB-Pairs-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, resourceBlockAssignment_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_resourceBlockAssignment_r11_constraint_6,
		&asn_PER_memb_resourceBlockAssignment_r11_constr_11,
		0,
		"resourceBlockAssignment-r11"
		},
};
static ber_tlv_tag_t asn_DEF_resourceBlockAssignment_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_resourceBlockAssignment_r11_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberPRB-Pairs-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourceBlockAssignment-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_resourceBlockAssignment_r11_specs_6 = {
	sizeof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11),
	offsetof(struct EPDCCH_SetConfig_r11__resourceBlockAssignment_r11, _asn_ctx),
	asn_MAP_resourceBlockAssignment_r11_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceBlockAssignment_r11_6 = {
	"resourceBlockAssignment-r11",
	"resourceBlockAssignment-r11",
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
	asn_DEF_resourceBlockAssignment_r11_tags_6,
	sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6)
		/sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_resourceBlockAssignment_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6)
		/sizeof(asn_DEF_resourceBlockAssignment_r11_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_resourceBlockAssignment_r11_6,
	2,	/* Elements count */
	&asn_SPC_resourceBlockAssignment_r11_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EPDCCH_SetConfig_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, setConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDCCH_SetConfigId_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setConfigId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, transmissionType_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionType_r11_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transmissionType-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, resourceBlockAssignment_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_resourceBlockAssignment_r11_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"resourceBlockAssignment-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, dmrs_ScramblingSequenceInt_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_dmrs_ScramblingSequenceInt_r11_constraint_1,
		&asn_PER_memb_dmrs_ScramblingSequenceInt_r11_constr_12,
		0,
		"dmrs-ScramblingSequenceInt-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPDCCH_SetConfig_r11, pucch_ResourceStartOffset_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pucch_ResourceStartOffset_r11_constraint_1,
		&asn_PER_memb_pucch_ResourceStartOffset_r11_constr_13,
		0,
		"pucch-ResourceStartOffset-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct EPDCCH_SetConfig_r11, re_MappingQCL_ConfigId_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_RE_MappingQCL_ConfigId_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"re-MappingQCL-ConfigId-r11"
		},
};
static int asn_MAP_EPDCCH_SetConfig_r11_oms_1[] = { 5 };
static ber_tlv_tag_t asn_DEF_EPDCCH_SetConfig_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EPDCCH_SetConfig_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* setConfigId-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transmissionType-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resourceBlockAssignment-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dmrs-ScramblingSequenceInt-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pucch-ResourceStartOffset-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* re-MappingQCL-ConfigId-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EPDCCH_SetConfig_r11_specs_1 = {
	sizeof(struct EPDCCH_SetConfig_r11),
	offsetof(struct EPDCCH_SetConfig_r11, _asn_ctx),
	asn_MAP_EPDCCH_SetConfig_r11_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_EPDCCH_SetConfig_r11_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EPDCCH_SetConfig_r11 = {
	"EPDCCH-SetConfig-r11",
	"EPDCCH-SetConfig-r11",
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
	asn_DEF_EPDCCH_SetConfig_r11_tags_1,
	sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1)
		/sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1[0]), /* 1 */
	asn_DEF_EPDCCH_SetConfig_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1)
		/sizeof(asn_DEF_EPDCCH_SetConfig_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EPDCCH_SetConfig_r11_1,
	6,	/* Elements count */
	&asn_SPC_EPDCCH_SetConfig_r11_specs_1	/* Additional specs */
};

