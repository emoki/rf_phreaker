/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/InterRATReportingQuantity-r8.h"

static int
reportingQuantity_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
reportingQuantity_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
reportingQuantity_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
reportingQuantity_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
reportingQuantity_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
reportingQuantity_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
reportingQuantity_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
reportingQuantity_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
reportingQuantity_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
reportingQuantity_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	reportingQuantity_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_reportingQuantity_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ratSpecificInfo_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_gsm_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo__gsm, gsm_Carrier_RSSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-Carrier-RSSI"
		},
};
static ber_tlv_tag_t asn_DEF_gsm_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_gsm_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gsm-Carrier-RSSI at 24739 */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_specs_4 = {
	sizeof(struct InterRATReportingQuantity_r8__ratSpecificInfo__gsm),
	offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo__gsm, _asn_ctx),
	asn_MAP_gsm_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_4 = {
	"gsm",
	"gsm",
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
	asn_DEF_gsm_tags_4,
	sizeof(asn_DEF_gsm_tags_4)
		/sizeof(asn_DEF_gsm_tags_4[0]) - 1, /* 1 */
	asn_DEF_gsm_tags_4,	/* Same as above */
	sizeof(asn_DEF_gsm_tags_4)
		/sizeof(asn_DEF_gsm_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_gsm_4,
	1,	/* Elements count */
	&asn_SPC_gsm_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_reportingQuantity_value2enum_7[] = {
	{ 0,	19,	"measurementQuantity" },
	{ 1,	4,	"both" }
};
static unsigned int asn_MAP_reportingQuantity_enum2value_7[] = {
	1,	/* both(1) */
	0	/* measurementQuantity(0) */
};
static asn_INTEGER_specifics_t asn_SPC_reportingQuantity_specs_7 = {
	asn_MAP_reportingQuantity_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_reportingQuantity_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_reportingQuantity_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportingQuantity_7 = {
	"reportingQuantity",
	"reportingQuantity",
	reportingQuantity_7_free,
	reportingQuantity_7_print,
	reportingQuantity_7_constraint,
	reportingQuantity_7_decode_ber,
	reportingQuantity_7_encode_der,
	reportingQuantity_7_decode_xer,
	reportingQuantity_7_encode_xer,
	reportingQuantity_7_decode_uper,
	reportingQuantity_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_reportingQuantity_tags_7,
	sizeof(asn_DEF_reportingQuantity_tags_7)
		/sizeof(asn_DEF_reportingQuantity_tags_7[0]) - 1, /* 1 */
	asn_DEF_reportingQuantity_tags_7,	/* Same as above */
	sizeof(asn_DEF_reportingQuantity_tags_7)
		/sizeof(asn_DEF_reportingQuantity_tags_7[0]), /* 2 */
	&asn_PER_type_reportingQuantity_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reportingQuantity_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_eutra_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo__eutra, reportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reportingQuantity_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingQuantity"
		},
};
static ber_tlv_tag_t asn_DEF_eutra_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_eutra_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportingQuantity at 24742 */
};
static asn_SEQUENCE_specifics_t asn_SPC_eutra_specs_6 = {
	sizeof(struct InterRATReportingQuantity_r8__ratSpecificInfo__eutra),
	offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo__eutra, _asn_ctx),
	asn_MAP_eutra_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_eutra_6 = {
	"eutra",
	"eutra",
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
	asn_DEF_eutra_tags_6,
	sizeof(asn_DEF_eutra_tags_6)
		/sizeof(asn_DEF_eutra_tags_6[0]) - 1, /* 1 */
	asn_DEF_eutra_tags_6,	/* Same as above */
	sizeof(asn_DEF_eutra_tags_6)
		/sizeof(asn_DEF_eutra_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_eutra_6,
	1,	/* Elements count */
	&asn_SPC_eutra_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ratSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo, choice.gsm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_gsm_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_eutra_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutra"
		},
};
static asn_TYPE_tag2member_t asn_MAP_ratSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm at 24740 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra at 24744 */
};
static asn_CHOICE_specifics_t asn_SPC_ratSpecificInfo_specs_3 = {
	sizeof(struct InterRATReportingQuantity_r8__ratSpecificInfo),
	offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo, _asn_ctx),
	offsetof(struct InterRATReportingQuantity_r8__ratSpecificInfo, present),
	sizeof(((struct InterRATReportingQuantity_r8__ratSpecificInfo *)0)->present),
	asn_MAP_ratSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ratSpecificInfo_3 = {
	"ratSpecificInfo",
	"ratSpecificInfo",
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
	&asn_PER_type_ratSpecificInfo_constr_3,
	asn_MBR_ratSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_ratSpecificInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_InterRATReportingQuantity_r8_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8, utran_EstimatedQuality),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-EstimatedQuality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterRATReportingQuantity_r8, ratSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ratSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ratSpecificInfo"
		},
};
static ber_tlv_tag_t asn_DEF_InterRATReportingQuantity_r8_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InterRATReportingQuantity_r8_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* utran-EstimatedQuality at 24736 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ratSpecificInfo at 24740 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InterRATReportingQuantity_r8_specs_1 = {
	sizeof(struct InterRATReportingQuantity_r8),
	offsetof(struct InterRATReportingQuantity_r8, _asn_ctx),
	asn_MAP_InterRATReportingQuantity_r8_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InterRATReportingQuantity_r8 = {
	"InterRATReportingQuantity-r8",
	"InterRATReportingQuantity-r8",
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
	asn_DEF_InterRATReportingQuantity_r8_tags_1,
	sizeof(asn_DEF_InterRATReportingQuantity_r8_tags_1)
		/sizeof(asn_DEF_InterRATReportingQuantity_r8_tags_1[0]), /* 1 */
	asn_DEF_InterRATReportingQuantity_r8_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterRATReportingQuantity_r8_tags_1)
		/sizeof(asn_DEF_InterRATReportingQuantity_r8_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InterRATReportingQuantity_r8_1,
	2,	/* Elements count */
	&asn_SPC_InterRATReportingQuantity_r8_specs_1	/* Additional specs */
};

