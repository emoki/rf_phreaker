/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/UE-EUTRA-Capability-v920-IEs.h"

static int
deviceType_r9_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
deviceType_r9_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
deviceType_r9_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
deviceType_r9_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
deviceType_r9_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
deviceType_r9_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
deviceType_r9_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
deviceType_r9_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
deviceType_r9_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
deviceType_r9_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	deviceType_r9_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_deviceType_r9_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_deviceType_r9_value2enum_6[] = {
	{ 0,	22,	"noBenFromBatConsumpOpt" }
};
static unsigned int asn_MAP_deviceType_r9_enum2value_6[] = {
	0	/* noBenFromBatConsumpOpt(0) */
};
static asn_INTEGER_specifics_t asn_SPC_deviceType_r9_specs_6 = {
	asn_MAP_deviceType_r9_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_deviceType_r9_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_deviceType_r9_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deviceType_r9_6 = {
	"deviceType-r9",
	"deviceType-r9",
	deviceType_r9_6_free,
	deviceType_r9_6_print,
	deviceType_r9_6_constraint,
	deviceType_r9_6_decode_ber,
	deviceType_r9_6_encode_der,
	deviceType_r9_6_decode_xer,
	deviceType_r9_6_encode_xer,
	deviceType_r9_6_decode_uper,
	deviceType_r9_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_deviceType_r9_tags_6,
	sizeof(asn_DEF_deviceType_r9_tags_6)
		/sizeof(asn_DEF_deviceType_r9_tags_6[0]) - 1, /* 1 */
	asn_DEF_deviceType_r9_tags_6,	/* Same as above */
	sizeof(asn_DEF_deviceType_r9_tags_6)
		/sizeof(asn_DEF_deviceType_r9_tags_6[0]), /* 2 */
	&asn_PER_type_deviceType_r9_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deviceType_r9_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v920_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, phyLayerParameters_v920),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhyLayerParameters_v920,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phyLayerParameters-v920"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersGERAN_v920),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersGERAN_v920,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-ParametersGERAN-v920"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersUTRA_v920),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersUTRA_v920,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-ParametersUTRA-v920"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v920_IEs, interRAT_ParametersCDMA2000_v920),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IRAT_ParametersCDMA2000_1XRTT_v920,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interRAT-ParametersCDMA2000-v920"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v920_IEs, deviceType_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deviceType_r9_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deviceType-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, csg_ProximityIndicationParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSG_ProximityIndicationParameters_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-ProximityIndicationParameters-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, neighCellSI_AcquisitionParameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellSI_AcquisitionParameters_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellSI-AcquisitionParameters-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v920_IEs, son_Parameters_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SON_Parameters_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"son-Parameters-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v920_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v940_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_UE_EUTRA_Capability_v920_IEs_oms_1[] = { 2, 3, 4, 8 };
static ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v920_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interRAT-ParametersGERAN-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interRAT-ParametersUTRA-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interRAT-ParametersCDMA2000-v920 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deviceType-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* csg-ProximityIndicationParameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* neighCellSI-AcquisitionParameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* son-Parameters-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v920_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v920_IEs),
	offsetof(struct UE_EUTRA_Capability_v920_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v920_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v920_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v920_IEs = {
	"UE-EUTRA-Capability-v920-IEs",
	"UE-EUTRA-Capability-v920-IEs",
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
	asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v920_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_EUTRA_Capability_v920_IEs_1,
	9,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v920_IEs_specs_1	/* Additional specs */
};

