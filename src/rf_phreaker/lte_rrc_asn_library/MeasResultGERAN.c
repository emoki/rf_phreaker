/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/MeasResultGERAN.h"

static int
memb_routingAreaCode_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
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
memb_rssi_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_routingAreaCode_constr_6 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_rssi_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cgi_Info_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultGERAN__cgi_Info, cellGlobalId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellGlobalId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultGERAN__cgi_Info, routingAreaCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_routingAreaCode_constraint_4,
		&asn_PER_memb_routingAreaCode_constr_6,
		0,
		"routingAreaCode"
		},
};
static int asn_MAP_cgi_Info_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_cgi_Info_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_cgi_Info_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* routingAreaCode */
};
static asn_SEQUENCE_specifics_t asn_SPC_cgi_Info_specs_4 = {
	sizeof(struct MeasResultGERAN__cgi_Info),
	offsetof(struct MeasResultGERAN__cgi_Info, _asn_ctx),
	asn_MAP_cgi_Info_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_cgi_Info_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cgi_Info_4 = {
	"cgi-Info",
	"cgi-Info",
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
	asn_DEF_cgi_Info_tags_4,
	sizeof(asn_DEF_cgi_Info_tags_4)
		/sizeof(asn_DEF_cgi_Info_tags_4[0]) - 1, /* 1 */
	asn_DEF_cgi_Info_tags_4,	/* Same as above */
	sizeof(asn_DEF_cgi_Info_tags_4)
		/sizeof(asn_DEF_cgi_Info_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_cgi_Info_4,
	2,	/* Elements count */
	&asn_SPC_cgi_Info_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultGERAN__measResult, rssi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_rssi_constraint_7,
		&asn_PER_memb_rssi_constr_8,
		0,
		"rssi"
		},
};
static ber_tlv_tag_t asn_DEF_measResult_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rssi */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_7 = {
	sizeof(struct MeasResultGERAN__measResult),
	offsetof(struct MeasResultGERAN__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_7 = {
	"measResult",
	"measResult",
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
	asn_DEF_measResult_tags_7,
	sizeof(asn_DEF_measResult_tags_7)
		/sizeof(asn_DEF_measResult_tags_7[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_7,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_7)
		/sizeof(asn_DEF_measResult_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResult_7,
	1,	/* Elements count */
	&asn_SPC_measResult_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MeasResultGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultGERAN, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultGERAN, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultGERAN, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_cgi_Info_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cgi-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultGERAN, measResult),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResult_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResult"
		},
};
static int asn_MAP_MeasResultGERAN_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_MeasResultGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasResultGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cgi-Info */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResult */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasResultGERAN_specs_1 = {
	sizeof(struct MeasResultGERAN),
	offsetof(struct MeasResultGERAN, _asn_ctx),
	asn_MAP_MeasResultGERAN_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResultGERAN_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultGERAN = {
	"MeasResultGERAN",
	"MeasResultGERAN",
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
	asn_DEF_MeasResultGERAN_tags_1,
	sizeof(asn_DEF_MeasResultGERAN_tags_1)
		/sizeof(asn_DEF_MeasResultGERAN_tags_1[0]), /* 1 */
	asn_DEF_MeasResultGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultGERAN_tags_1)
		/sizeof(asn_DEF_MeasResultGERAN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasResultGERAN_1,
	4,	/* Elements count */
	&asn_SPC_MeasResultGERAN_specs_1	/* Additional specs */
};

