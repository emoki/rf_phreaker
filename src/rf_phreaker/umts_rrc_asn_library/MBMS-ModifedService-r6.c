/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/MBMS-ModifedService-r6.h"

static int
dummy_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
dummy_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
dummy_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dummy_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dummy_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dummy_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dummy_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dummy_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dummy_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dummy_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dummy_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dummy_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_mbms_PreferredFrequency_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dummy_constr_7 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mbms_PreferredFrequency_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ModifedService_r6__mbms_PreferredFrequency, choice.mcch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PFLIndex,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mcch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ModifedService_r6__mbms_PreferredFrequency, choice.dcch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PFLInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dcch"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mbms_PreferredFrequency_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcch at 30732 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dcch at 30734 */
};
static asn_CHOICE_specifics_t asn_SPC_mbms_PreferredFrequency_specs_4 = {
	sizeof(struct MBMS_ModifedService_r6__mbms_PreferredFrequency),
	offsetof(struct MBMS_ModifedService_r6__mbms_PreferredFrequency, _asn_ctx),
	offsetof(struct MBMS_ModifedService_r6__mbms_PreferredFrequency, present),
	sizeof(((struct MBMS_ModifedService_r6__mbms_PreferredFrequency *)0)->present),
	asn_MAP_mbms_PreferredFrequency_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mbms_PreferredFrequency_4 = {
	"mbms-PreferredFrequency",
	"mbms-PreferredFrequency",
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
	&asn_PER_type_mbms_PreferredFrequency_constr_4,
	asn_MBR_mbms_PreferredFrequency_4,
	2,	/* Elements count */
	&asn_SPC_mbms_PreferredFrequency_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_dummy_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_dummy_enum2value_7[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_dummy_specs_7 = {
	asn_MAP_dummy_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_dummy_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_dummy_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_7 = {
	"dummy",
	"dummy",
	dummy_7_free,
	dummy_7_print,
	dummy_7_constraint,
	dummy_7_decode_ber,
	dummy_7_encode_der,
	dummy_7_decode_xer,
	dummy_7_encode_xer,
	dummy_7_decode_uper,
	dummy_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dummy_tags_7,
	sizeof(asn_DEF_dummy_tags_7)
		/sizeof(asn_DEF_dummy_tags_7[0]) - 1, /* 1 */
	asn_DEF_dummy_tags_7,	/* Same as above */
	sizeof(asn_DEF_dummy_tags_7)
		/sizeof(asn_DEF_dummy_tags_7[0]), /* 2 */
	&asn_PER_type_dummy_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dummy_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_ModifedService_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ModifedService_r6, mbms_TransmissionIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_TransmissionIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-TransmissionIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ModifedService_r6, mbms_RequiredUEAction),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_RequiredUEAction_Mod,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-RequiredUEAction"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_ModifedService_r6, mbms_PreferredFrequency),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mbms_PreferredFrequency_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-PreferredFrequency"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_ModifedService_r6, dummy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dummy_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ModifedService_r6, continueMCCHReading),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"continueMCCHReading"
		},
};
static int asn_MAP_MBMS_ModifedService_r6_oms_1[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_MBMS_ModifedService_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_ModifedService_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-TransmissionIdentity at 30729 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbms-RequiredUEAction at 30730 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbms-PreferredFrequency at 30732 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dummy at 30736 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* continueMCCHReading at 30737 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_ModifedService_r6_specs_1 = {
	sizeof(struct MBMS_ModifedService_r6),
	offsetof(struct MBMS_ModifedService_r6, _asn_ctx),
	asn_MAP_MBMS_ModifedService_r6_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MBMS_ModifedService_r6_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_ModifedService_r6 = {
	"MBMS-ModifedService-r6",
	"MBMS-ModifedService-r6",
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
	asn_DEF_MBMS_ModifedService_r6_tags_1,
	sizeof(asn_DEF_MBMS_ModifedService_r6_tags_1)
		/sizeof(asn_DEF_MBMS_ModifedService_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_ModifedService_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_ModifedService_r6_tags_1)
		/sizeof(asn_DEF_MBMS_ModifedService_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_ModifedService_r6_1,
	5,	/* Elements count */
	&asn_SPC_MBMS_ModifedService_r6_specs_1	/* Additional specs */
};

