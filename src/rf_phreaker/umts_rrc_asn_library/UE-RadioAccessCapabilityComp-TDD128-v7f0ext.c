/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-RadioAccessCapabilityComp-TDD128-v7f0ext.h"

static int
supportForCSVoiceoverHSPA_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
supportForCSVoiceoverHSPA_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
supportForCSVoiceoverHSPA_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
supportForCSVoiceoverHSPA_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
supportForCSVoiceoverHSPA_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
supportForCSVoiceoverHSPA_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
supportForCSVoiceoverHSPA_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
supportForCSVoiceoverHSPA_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
supportForCSVoiceoverHSPA_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	supportForCSVoiceoverHSPA_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_tdd_edch_PhysicalLayerCategory_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_supportForCSVoiceoverHSPA_constr_6 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tdd_edch_PhysicalLayerCategory_constr_4 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_supportForCSVoiceoverHSPA_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_supportForCSVoiceoverHSPA_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_supportForCSVoiceoverHSPA_specs_6 = {
	asn_MAP_supportForCSVoiceoverHSPA_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_supportForCSVoiceoverHSPA_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_supportForCSVoiceoverHSPA_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForCSVoiceoverHSPA_6 = {
	"supportForCSVoiceoverHSPA",
	"supportForCSVoiceoverHSPA",
	supportForCSVoiceoverHSPA_6_free,
	supportForCSVoiceoverHSPA_6_print,
	supportForCSVoiceoverHSPA_6_constraint,
	supportForCSVoiceoverHSPA_6_decode_ber,
	supportForCSVoiceoverHSPA_6_encode_der,
	supportForCSVoiceoverHSPA_6_decode_xer,
	supportForCSVoiceoverHSPA_6_encode_xer,
	supportForCSVoiceoverHSPA_6_decode_uper,
	supportForCSVoiceoverHSPA_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_supportForCSVoiceoverHSPA_tags_6,
	sizeof(asn_DEF_supportForCSVoiceoverHSPA_tags_6)
		/sizeof(asn_DEF_supportForCSVoiceoverHSPA_tags_6[0]) - 1, /* 1 */
	asn_DEF_supportForCSVoiceoverHSPA_tags_6,	/* Same as above */
	sizeof(asn_DEF_supportForCSVoiceoverHSPA_tags_6)
		/sizeof(asn_DEF_supportForCSVoiceoverHSPA_tags_6[0]), /* 2 */
	&asn_PER_type_supportForCSVoiceoverHSPA_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_supportForCSVoiceoverHSPA_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_1[] = {
	{ ATF_POINTER, 6, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, hSDSCH_physical_layer_category),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hSDSCH-physical-layer-category"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, multiCarrier_physical_layer_category),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiCarrier_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiCarrier-physical-layer-category"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, tdd_edch_PhysicalLayerCategory),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_tdd_edch_PhysicalLayerCategory_constraint_1,
		&asn_PER_memb_tdd_edch_PhysicalLayerCategory_constr_4,
		0,
		"tdd-edch-PhysicalLayerCategory"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, dl_CapabilityWithSimultaneousHS_DSCHConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CapabilityWithSimultaneousHS_DSCHConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CapabilityWithSimultaneousHS-DSCHConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, supportForCSVoiceoverHSPA),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_supportForCSVoiceoverHSPA_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForCSVoiceoverHSPA"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, totalRLC_AM_BufferSize),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TotalRLC_AM_BufferSize_r5_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"totalRLC-AM-BufferSize"
		},
};
static int asn_MAP_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hSDSCH-physical-layer-category at 13309 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* multiCarrier-physical-layer-category at 13311 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tdd-edch-PhysicalLayerCategory at 13312 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-CapabilityWithSimultaneousHS-DSCHConfig at 13314 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* supportForCSVoiceoverHSPA at 13315 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* totalRLC-AM-BufferSize at 13316 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_specs_1 = {
	sizeof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext),
	offsetof(struct UE_RadioAccessCapabilityComp_TDD128_v7f0ext, _asn_ctx),
	asn_MAP_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext = {
	"UE-RadioAccessCapabilityComp-TDD128-v7f0ext",
	"UE-RadioAccessCapabilityComp-TDD128-v7f0ext",
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
	asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1,
	sizeof(asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1[0]), /* 1 */
	asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1)
		/sizeof(asn_DEF_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_1,
	6,	/* Elements count */
	&asn_SPC_UE_RadioAccessCapabilityComp_TDD128_v7f0ext_specs_1	/* Additional specs */
};

