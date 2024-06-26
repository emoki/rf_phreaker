/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HS-DSCH-SPS-NewOperation-TDD128.h"

static int
memb_numberOfProcesses_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
modulation_15_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
modulation_15_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
modulation_15_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	modulation_15_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
modulation_15_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
modulation_15_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
modulation_15_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
modulation_15_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
modulation_15_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
modulation_15_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
modulation_15_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	modulation_15_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_timeslotInfo_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 5)) {
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
memb_sfnNum_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
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
memb_initialRxPatternIndex_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_initialTfsIndex_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
memb_hs_sich_Index_constraint_8(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_numberOfProcesses_constr_5 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modulation_constr_15 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeslotInfo_constr_9 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sfnNum_constr_12 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_initialRxPatternIndex_constr_13 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_initialTfsIndex_constr_14 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hs_sich_Index_constr_18 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_hARQInfoForSPS_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__hARQInfoForSPS, numberOfProcesses),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfProcesses_constraint_4,
		&asn_PER_memb_numberOfProcesses_constr_5,
		0,
		"numberOfProcesses"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__hARQInfoForSPS, memorySize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HARQMemorySize,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"memorySize"
		},
};
static ber_tlv_tag_t asn_DEF_hARQInfoForSPS_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_hARQInfoForSPS_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfProcesses at 18467 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* memorySize at 18469 */
};
static asn_SEQUENCE_specifics_t asn_SPC_hARQInfoForSPS_specs_4 = {
	sizeof(struct HS_DSCH_SPS_NewOperation_TDD128__hARQInfoForSPS),
	offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__hARQInfoForSPS, _asn_ctx),
	asn_MAP_hARQInfoForSPS_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hARQInfoForSPS_4 = {
	"hARQInfoForSPS",
	"hARQInfoForSPS",
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
	asn_DEF_hARQInfoForSPS_tags_4,
	sizeof(asn_DEF_hARQInfoForSPS_tags_4)
		/sizeof(asn_DEF_hARQInfoForSPS_tags_4[0]) - 1, /* 1 */
	asn_DEF_hARQInfoForSPS_tags_4,	/* Same as above */
	sizeof(asn_DEF_hARQInfoForSPS_tags_4)
		/sizeof(asn_DEF_hARQInfoForSPS_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_hARQInfoForSPS_4,
	2,	/* Elements count */
	&asn_SPC_hARQInfoForSPS_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_modulation_value2enum_15[] = {
	{ 0,	7,	"modQPSK" },
	{ 1,	8,	"mod16QAM" }
};
static unsigned int asn_MAP_modulation_enum2value_15[] = {
	1,	/* mod16QAM(1) */
	0	/* modQPSK(0) */
};
static asn_INTEGER_specifics_t asn_SPC_modulation_specs_15 = {
	asn_MAP_modulation_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_modulation_enum2value_15,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_modulation_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modulation_15 = {
	"modulation",
	"modulation",
	modulation_15_free,
	modulation_15_print,
	modulation_15_constraint,
	modulation_15_decode_ber,
	modulation_15_encode_der,
	modulation_15_decode_xer,
	modulation_15_encode_xer,
	modulation_15_decode_uper,
	modulation_15_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_modulation_tags_15,
	sizeof(asn_DEF_modulation_tags_15)
		/sizeof(asn_DEF_modulation_tags_15[0]) - 1, /* 1 */
	asn_DEF_modulation_tags_15,	/* Same as above */
	sizeof(asn_DEF_modulation_tags_15)
		/sizeof(asn_DEF_modulation_tags_15[0]), /* 2 */
	&asn_PER_type_modulation_constr_15,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_modulation_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_initialSPSInfoForHSDSCH_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, timeslotInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_timeslotInfo_constraint_8,
		&asn_PER_memb_timeslotInfo_constr_9,
		0,
		"timeslotInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, codeResourceInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_ChannelisationCodeSetInfo_LCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"codeResourceInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, sfnNum),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sfnNum_constraint_8,
		&asn_PER_memb_sfnNum_constr_12,
		0,
		"sfnNum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, initialRxPatternIndex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_initialRxPatternIndex_constraint_8,
		&asn_PER_memb_initialRxPatternIndex_constr_13,
		0,
		"initialRxPatternIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, initialTfsIndex),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_initialTfsIndex_constraint_8,
		&asn_PER_memb_initialTfsIndex_constr_14,
		0,
		"initialTfsIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, modulation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_modulation_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modulation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, hs_sich_Index),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_hs_sich_Index_constraint_8,
		&asn_PER_memb_hs_sich_Index_constr_18,
		0,
		"hs-sich-Index"
		},
};
static ber_tlv_tag_t asn_DEF_initialSPSInfoForHSDSCH_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_initialSPSInfoForHSDSCH_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslotInfo at 18472 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* codeResourceInfo at 18473 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime at 18474 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sfnNum at 18475 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* initialRxPatternIndex at 18476 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* initialTfsIndex at 18477 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* modulation at 18478 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* hs-sich-Index at 18479 */
};
static asn_SEQUENCE_specifics_t asn_SPC_initialSPSInfoForHSDSCH_specs_8 = {
	sizeof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH),
	offsetof(struct HS_DSCH_SPS_NewOperation_TDD128__initialSPSInfoForHSDSCH, _asn_ctx),
	asn_MAP_initialSPSInfoForHSDSCH_tag2el_8,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_initialSPSInfoForHSDSCH_8 = {
	"initialSPSInfoForHSDSCH",
	"initialSPSInfoForHSDSCH",
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
	asn_DEF_initialSPSInfoForHSDSCH_tags_8,
	sizeof(asn_DEF_initialSPSInfoForHSDSCH_tags_8)
		/sizeof(asn_DEF_initialSPSInfoForHSDSCH_tags_8[0]) - 1, /* 1 */
	asn_DEF_initialSPSInfoForHSDSCH_tags_8,	/* Same as above */
	sizeof(asn_DEF_initialSPSInfoForHSDSCH_tags_8)
		/sizeof(asn_DEF_initialSPSInfoForHSDSCH_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_initialSPSInfoForHSDSCH_8,
	8,	/* Elements count */
	&asn_SPC_initialSPSInfoForHSDSCH_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_DSCH_SPS_NewOperation_TDD128_1[] = {
	{ ATF_POINTER, 3, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, hs_dsch_TbsList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_DSCH_TbsList_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-dsch-TbsList"
		},
	{ ATF_POINTER, 2, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, hs_dsch_RxPatternList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_DSCH_RxPatternList_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-dsch-RxPatternList"
		},
	{ ATF_POINTER, 1, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, hARQInfoForSPS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_hARQInfoForSPS_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hARQInfoForSPS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, hs_sich_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HS_SICH_List_TDD128,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hs-sich-List"
		},
	{ ATF_POINTER, 1, offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, initialSPSInfoForHSDSCH),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_initialSPSInfoForHSDSCH_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initialSPSInfoForHSDSCH"
		},
};
static int asn_MAP_HS_DSCH_SPS_NewOperation_TDD128_oms_1[] = { 0, 1, 2, 4 };
static ber_tlv_tag_t asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HS_DSCH_SPS_NewOperation_TDD128_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hs-dsch-TbsList at 18464 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hs-dsch-RxPatternList at 18465 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hARQInfoForSPS at 18467 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hs-sich-List at 18470 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* initialSPSInfoForHSDSCH at 18472 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_DSCH_SPS_NewOperation_TDD128_specs_1 = {
	sizeof(struct HS_DSCH_SPS_NewOperation_TDD128),
	offsetof(struct HS_DSCH_SPS_NewOperation_TDD128, _asn_ctx),
	asn_MAP_HS_DSCH_SPS_NewOperation_TDD128_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_HS_DSCH_SPS_NewOperation_TDD128_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_DSCH_SPS_NewOperation_TDD128 = {
	"HS-DSCH-SPS-NewOperation-TDD128",
	"HS-DSCH-SPS-NewOperation-TDD128",
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
	asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1,
	sizeof(asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1)
		/sizeof(asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1[0]), /* 1 */
	asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1)
		/sizeof(asn_DEF_HS_DSCH_SPS_NewOperation_TDD128_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_DSCH_SPS_NewOperation_TDD128_1,
	5,	/* Elements count */
	&asn_SPC_HS_DSCH_SPS_NewOperation_TDD128_specs_1	/* Additional specs */
};

