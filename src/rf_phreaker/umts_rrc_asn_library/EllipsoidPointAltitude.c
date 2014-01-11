/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/EllipsoidPointAltitude.h"

static int
latitudeSign_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
latitudeSign_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
latitudeSign_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
latitudeSign_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
latitudeSign_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
latitudeSign_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
latitudeSign_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
latitudeSign_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
latitudeSign_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
latitudeSign_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	latitudeSign_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
altitudeDirection_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
altitudeDirection_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
altitudeDirection_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
altitudeDirection_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
altitudeDirection_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
altitudeDirection_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
altitudeDirection_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
altitudeDirection_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
altitudeDirection_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
altitudeDirection_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	altitudeDirection_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_latitude_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 8388607)) {
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
memb_longitude_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8388608 && value <= 8388607)) {
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
memb_altitude_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_latitudeSign_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_altitudeDirection_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_latitude_constr_5 = {
	{ APC_CONSTRAINED,	 23, -1,  0,  8388607 }	/* (0..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_longitude_constr_6 = {
	{ APC_CONSTRAINED,	 24, -1, -8388608,  8388607 }	/* (-8388608..8388607) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_altitude_constr_10 = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32767 }	/* (0..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_latitudeSign_value2enum_2[] = {
	{ 0,	5,	"north" },
	{ 1,	5,	"south" }
};
static unsigned int asn_MAP_latitudeSign_enum2value_2[] = {
	0,	/* north(0) */
	1	/* south(1) */
};
static asn_INTEGER_specifics_t asn_SPC_latitudeSign_specs_2 = {
	asn_MAP_latitudeSign_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_latitudeSign_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_latitudeSign_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_latitudeSign_2 = {
	"latitudeSign",
	"latitudeSign",
	latitudeSign_2_free,
	latitudeSign_2_print,
	latitudeSign_2_constraint,
	latitudeSign_2_decode_ber,
	latitudeSign_2_encode_der,
	latitudeSign_2_decode_xer,
	latitudeSign_2_encode_xer,
	latitudeSign_2_decode_uper,
	latitudeSign_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_latitudeSign_tags_2,
	sizeof(asn_DEF_latitudeSign_tags_2)
		/sizeof(asn_DEF_latitudeSign_tags_2[0]) - 1, /* 1 */
	asn_DEF_latitudeSign_tags_2,	/* Same as above */
	sizeof(asn_DEF_latitudeSign_tags_2)
		/sizeof(asn_DEF_latitudeSign_tags_2[0]), /* 2 */
	&asn_PER_type_latitudeSign_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_latitudeSign_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_altitudeDirection_value2enum_7[] = {
	{ 0,	6,	"height" },
	{ 1,	5,	"depth" }
};
static unsigned int asn_MAP_altitudeDirection_enum2value_7[] = {
	1,	/* depth(1) */
	0	/* height(0) */
};
static asn_INTEGER_specifics_t asn_SPC_altitudeDirection_specs_7 = {
	asn_MAP_altitudeDirection_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_altitudeDirection_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_altitudeDirection_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_altitudeDirection_7 = {
	"altitudeDirection",
	"altitudeDirection",
	altitudeDirection_7_free,
	altitudeDirection_7_print,
	altitudeDirection_7_constraint,
	altitudeDirection_7_decode_ber,
	altitudeDirection_7_encode_der,
	altitudeDirection_7_decode_xer,
	altitudeDirection_7_encode_xer,
	altitudeDirection_7_decode_uper,
	altitudeDirection_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_altitudeDirection_tags_7,
	sizeof(asn_DEF_altitudeDirection_tags_7)
		/sizeof(asn_DEF_altitudeDirection_tags_7[0]) - 1, /* 1 */
	asn_DEF_altitudeDirection_tags_7,	/* Same as above */
	sizeof(asn_DEF_altitudeDirection_tags_7)
		/sizeof(asn_DEF_altitudeDirection_tags_7[0]), /* 2 */
	&asn_PER_type_altitudeDirection_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_altitudeDirection_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_EllipsoidPointAltitude_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EllipsoidPointAltitude, latitudeSign),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_latitudeSign_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitudeSign"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EllipsoidPointAltitude, latitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_latitude_constraint_1,
		&asn_PER_memb_latitude_constr_5,
		0,
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EllipsoidPointAltitude, longitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_longitude_constraint_1,
		&asn_PER_memb_longitude_constr_6,
		0,
		"longitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EllipsoidPointAltitude, altitudeDirection),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_altitudeDirection_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeDirection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EllipsoidPointAltitude, altitude),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_altitude_constraint_1,
		&asn_PER_memb_altitude_constr_10,
		0,
		"altitude"
		},
};
static ber_tlv_tag_t asn_DEF_EllipsoidPointAltitude_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EllipsoidPointAltitude_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitudeSign at 23002 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* latitude at 23003 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* longitude at 23004 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* altitudeDirection at 23005 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* altitude at 23006 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EllipsoidPointAltitude_specs_1 = {
	sizeof(struct EllipsoidPointAltitude),
	offsetof(struct EllipsoidPointAltitude, _asn_ctx),
	asn_MAP_EllipsoidPointAltitude_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EllipsoidPointAltitude = {
	"EllipsoidPointAltitude",
	"EllipsoidPointAltitude",
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
	asn_DEF_EllipsoidPointAltitude_tags_1,
	sizeof(asn_DEF_EllipsoidPointAltitude_tags_1)
		/sizeof(asn_DEF_EllipsoidPointAltitude_tags_1[0]), /* 1 */
	asn_DEF_EllipsoidPointAltitude_tags_1,	/* Same as above */
	sizeof(asn_DEF_EllipsoidPointAltitude_tags_1)
		/sizeof(asn_DEF_EllipsoidPointAltitude_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EllipsoidPointAltitude_1,
	5,	/* Elements count */
	&asn_SPC_EllipsoidPointAltitude_specs_1	/* Additional specs */
};

