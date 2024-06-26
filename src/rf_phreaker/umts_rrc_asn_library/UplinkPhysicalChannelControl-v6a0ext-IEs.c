/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UplinkPhysicalChannelControl-v6a0ext-IEs.h"

static int
tpc_Step_Size_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
tpc_Step_Size_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
tpc_Step_Size_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tpc_Step_Size_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tpc_Step_Size_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tpc_Step_Size_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tpc_Step_Size_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tpc_Step_Size_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tpc_Step_Size_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tpc_Step_Size_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tpc_Step_Size_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_desired_HS_SICH_PowerLevel_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -120 && value <= -58)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_tpc_Step_Size_constr_3 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_desired_HS_SICH_PowerLevel_constr_2 = {
	{ APC_CONSTRAINED,	 6,  6, -120, -58 }	/* (-120..-58) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_tpc_Step_Size_value2enum_3[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s3" },
	{ 3,	6,	"spare1" }
};
static unsigned int asn_MAP_tpc_Step_Size_enum2value_3[] = {
	0,	/* s1(0) */
	1,	/* s2(1) */
	2,	/* s3(2) */
	3	/* spare1(3) */
};
static asn_INTEGER_specifics_t asn_SPC_tpc_Step_Size_specs_3 = {
	asn_MAP_tpc_Step_Size_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_tpc_Step_Size_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_tpc_Step_Size_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tpc_Step_Size_3 = {
	"tpc-Step-Size",
	"tpc-Step-Size",
	tpc_Step_Size_3_free,
	tpc_Step_Size_3_print,
	tpc_Step_Size_3_constraint,
	tpc_Step_Size_3_decode_ber,
	tpc_Step_Size_3_encode_der,
	tpc_Step_Size_3_decode_xer,
	tpc_Step_Size_3_encode_xer,
	tpc_Step_Size_3_decode_uper,
	tpc_Step_Size_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tpc_Step_Size_tags_3,
	sizeof(asn_DEF_tpc_Step_Size_tags_3)
		/sizeof(asn_DEF_tpc_Step_Size_tags_3[0]) - 1, /* 1 */
	asn_DEF_tpc_Step_Size_tags_3,	/* Same as above */
	sizeof(asn_DEF_tpc_Step_Size_tags_3)
		/sizeof(asn_DEF_tpc_Step_Size_tags_3[0]), /* 2 */
	&asn_PER_type_tpc_Step_Size_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tpc_Step_Size_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UplinkPhysicalChannelControl_v6a0ext_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UplinkPhysicalChannelControl_v6a0ext_IEs, desired_HS_SICH_PowerLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_desired_HS_SICH_PowerLevel_constraint_1,
		&asn_PER_memb_desired_HS_SICH_PowerLevel_constr_2,
		0,
		"desired-HS-SICH-PowerLevel"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPhysicalChannelControl_v6a0ext_IEs, tpc_Step_Size),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tpc_Step_Size_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-Step-Size"
		},
};
static int asn_MAP_UplinkPhysicalChannelControl_v6a0ext_IEs_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UplinkPhysicalChannelControl_v6a0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* desired-HS-SICH-PowerLevel at 9824 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tpc-Step-Size at 9825 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPhysicalChannelControl_v6a0ext_IEs_specs_1 = {
	sizeof(struct UplinkPhysicalChannelControl_v6a0ext_IEs),
	offsetof(struct UplinkPhysicalChannelControl_v6a0ext_IEs, _asn_ctx),
	asn_MAP_UplinkPhysicalChannelControl_v6a0ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UplinkPhysicalChannelControl_v6a0ext_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs = {
	"UplinkPhysicalChannelControl-v6a0ext-IEs",
	"UplinkPhysicalChannelControl-v6a0ext-IEs",
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
	asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1,
	sizeof(asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1)
		/sizeof(asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1)
		/sizeof(asn_DEF_UplinkPhysicalChannelControl_v6a0ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPhysicalChannelControl_v6a0ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UplinkPhysicalChannelControl_v6a0ext_IEs_specs_1	/* Additional specs */
};

