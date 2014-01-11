/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CellSelectReselectInfoSIB-11-12-HCS-ECN0.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_6 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_2_set_0(int set_value, void **sptr) {
	Q_OffsetS_N_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static int asn_DFL_3_set_0(int set_value, void **sptr) {
	Q_OffsetS_N_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_fdd_7[] = {
	{ ATF_POINTER, 2, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__fdd, q_QualMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMin"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__fdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxlevMin"
		},
};
static int asn_MAP_fdd_oms_7[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_fdd_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-QualMin at 22709 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* q-RxlevMin at 22710 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_7 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__fdd),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_7 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_7,
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_7,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_7)
		/sizeof(asn_DEF_fdd_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_7,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_10[] = {
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__tdd, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxlevMin"
		},
};
static int asn_MAP_tdd_oms_10[] = { 0 };
static ber_tlv_tag_t asn_DEF_tdd_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-RxlevMin at 22713 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_10 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__tdd),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_10,
	1,	/* Count of tags in the map */
	asn_MAP_tdd_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_10 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_10,
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_10,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_10,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_gsm_12[] = {
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__gsm, q_RxlevMin),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxlevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxlevMin"
		},
};
static int asn_MAP_gsm_oms_12[] = { 0 };
static ber_tlv_tag_t asn_DEF_gsm_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_gsm_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* q-RxlevMin at 22716 */
};
static asn_SEQUENCE_specifics_t asn_SPC_gsm_specs_12 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__gsm),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo__gsm, _asn_ctx),
	asn_MAP_gsm_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_gsm_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gsm_12 = {
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
	asn_DEF_gsm_tags_12,
	sizeof(asn_DEF_gsm_tags_12)
		/sizeof(asn_DEF_gsm_tags_12[0]) - 1, /* 1 */
	asn_DEF_gsm_tags_12,	/* Same as above */
	sizeof(asn_DEF_gsm_tags_12)
		/sizeof(asn_DEF_gsm_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_gsm_12,
	1,	/* Elements count */
	&asn_SPC_gsm_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo, choice.gsm),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_gsm_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 22709 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd at 22713 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gsm at 22716 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_6 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo, _asn_ctx),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo, present),
	sizeof(((struct CellSelectReselectInfoSIB_11_12_HCS_ECN0__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_6,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_6 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_6,
	asn_MBR_modeSpecificInfo_6,
	3,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellSelectReselectInfoSIB_11_12_HCS_ECN0_1[] = {
	{ ATF_NOFLAGS, 4, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, q_Offset1S_N),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetS_N,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"q-Offset1S-N"
		},
	{ ATF_NOFLAGS, 3, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, q_Offset2S_N),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetS_N,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_3_set_0,	/* DEFAULT 0 */
		"q-Offset2S-N"
		},
	{ ATF_POINTER, 2, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, hcs_NeighbouringCellInformation_ECN0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HCS_NeighbouringCellInformation_ECN0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hcs-NeighbouringCellInformation-ECN0"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static int asn_MAP_CellSelectReselectInfoSIB_11_12_HCS_ECN0_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* q-Offset1S-N at 22702 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-Offset2S-N at 22703 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxAllowedUL-TX-Power at 22704 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hcs-NeighbouringCellInformation-ECN0 at 22706 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* modeSpecificInfo at 22711 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellSelectReselectInfoSIB_11_12_HCS_ECN0_specs_1 = {
	sizeof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0),
	offsetof(struct CellSelectReselectInfoSIB_11_12_HCS_ECN0, _asn_ctx),
	asn_MAP_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CellSelectReselectInfoSIB_11_12_HCS_ECN0_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0 = {
	"CellSelectReselectInfoSIB-11-12-HCS-ECN0",
	"CellSelectReselectInfoSIB-11-12-HCS-ECN0",
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
	asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1,
	sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1[0]), /* 1 */
	asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1)
		/sizeof(asn_DEF_CellSelectReselectInfoSIB_11_12_HCS_ECN0_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellSelectReselectInfoSIB_11_12_HCS_ECN0_1,
	5,	/* Elements count */
	&asn_SPC_CellSelectReselectInfoSIB_11_12_HCS_ECN0_specs_1	/* Additional specs */
};

