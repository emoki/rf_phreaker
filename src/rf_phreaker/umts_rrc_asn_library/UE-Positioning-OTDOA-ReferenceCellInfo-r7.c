/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-OTDOA-ReferenceCellInfo-r7.h"

static int
memb_roundTripTime_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 32766)) {
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
memb_roundTripTimeExtension_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 70274)) {
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
memb_sfn_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_roundTripTime_constr_12 = {
	{ APC_CONSTRAINED,	 15,  15,  0,  32766 }	/* (0..32766) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_roundTripTimeExtension_constr_13 = {
	{ APC_CONSTRAINED,	 17, -1,  0,  70274 }	/* (0..70274) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_positioningMode_constr_9 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sfn_constr_2 = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__fdd, primaryCPICH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCPICH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCPICH-Info"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* primaryCPICH-Info at 28456 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__fdd),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
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
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_4,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__tdd, cellAndChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellAndChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellAndChannelIdentity"
		},
};
static ber_tlv_tag_t asn_DEF_tdd_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellAndChannelIdentity at 28459 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_6 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__tdd),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo__tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_6,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_6 = {
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
	asn_DEF_tdd_tags_6,
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_6)
		/sizeof(asn_DEF_tdd_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_6,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 28456 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 28459 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo, present),
	sizeof(((struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
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
	&asn_PER_type_modeSpecificInfo_constr_3,
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ueBased_10[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueBased, cellPosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReferenceCellPosition,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellPosition"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueBased, roundTripTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_roundTripTime_constraint_10,
		&asn_PER_memb_roundTripTime_constr_12,
		0,
		"roundTripTime"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueBased, roundTripTimeExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_roundTripTimeExtension_constraint_10,
		&asn_PER_memb_roundTripTimeExtension_constr_13,
		0,
		"roundTripTimeExtension"
		},
};
static int asn_MAP_ueBased_oms_10[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ueBased_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ueBased_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellPosition at 28464 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* roundTripTime at 28466 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* roundTripTimeExtension at 28468 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueBased_specs_10 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueBased),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueBased, _asn_ctx),
	asn_MAP_ueBased_tag2el_10,
	3,	/* Count of tags in the map */
	asn_MAP_ueBased_oms_10,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueBased_10 = {
	"ueBased",
	"ueBased",
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
	asn_DEF_ueBased_tags_10,
	sizeof(asn_DEF_ueBased_tags_10)
		/sizeof(asn_DEF_ueBased_tags_10[0]) - 1, /* 1 */
	asn_DEF_ueBased_tags_10,	/* Same as above */
	sizeof(asn_DEF_ueBased_tags_10)
		/sizeof(asn_DEF_ueBased_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ueBased_10,
	3,	/* Elements count */
	&asn_SPC_ueBased_specs_10	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_ueAssisted_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_ueAssisted_specs_14 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueAssisted),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode__ueAssisted, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueAssisted_14 = {
	"ueAssisted",
	"ueAssisted",
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
	asn_DEF_ueAssisted_tags_14,
	sizeof(asn_DEF_ueAssisted_tags_14)
		/sizeof(asn_DEF_ueAssisted_tags_14[0]) - 1, /* 1 */
	asn_DEF_ueAssisted_tags_14,	/* Same as above */
	sizeof(asn_DEF_ueAssisted_tags_14)
		/sizeof(asn_DEF_ueAssisted_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_ueAssisted_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_positioningMode_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode, choice.ueBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ueBased_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode, choice.ueAssisted),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ueAssisted_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueAssisted"
		},
};
static asn_TYPE_tag2member_t asn_MAP_positioningMode_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueBased at 28464 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ueAssisted at 28470 */
};
static asn_CHOICE_specifics_t asn_SPC_positioningMode_specs_9 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode, _asn_ctx),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode, present),
	sizeof(((struct UE_Positioning_OTDOA_ReferenceCellInfo_r7__positioningMode *)0)->present),
	asn_MAP_positioningMode_tag2el_9,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_positioningMode_9 = {
	"positioningMode",
	"positioningMode",
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
	&asn_PER_type_positioningMode_constr_9,
	asn_MBR_positioningMode_9,
	2,	/* Elements count */
	&asn_SPC_positioningMode_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_Positioning_OTDOA_ReferenceCellInfo_r7_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, sfn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_sfn_constraint_1,
		&asn_PER_memb_sfn_constr_2,
		0,
		"sfn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, positioningMode),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_positioningMode_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positioningMode"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, ue_positioning_IPDL_Paremeters),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_IPDL_Parameters_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-IPDL-Paremeters"
		},
};
static int asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_r7_oms_1[] = { 0, 2, 4 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfn at 28452 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* modeSpecificInfo at 28456 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo at 28461 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* positioningMode at 28469 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ue-positioning-IPDL-Paremeters at 28472 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_OTDOA_ReferenceCellInfo_r7_specs_1 = {
	sizeof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7),
	offsetof(struct UE_Positioning_OTDOA_ReferenceCellInfo_r7, _asn_ctx),
	asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_OTDOA_ReferenceCellInfo_r7_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7 = {
	"UE-Positioning-OTDOA-ReferenceCellInfo-r7",
	"UE-Positioning-OTDOA-ReferenceCellInfo-r7",
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
	asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1,
	sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1)
		/sizeof(asn_DEF_UE_Positioning_OTDOA_ReferenceCellInfo_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_OTDOA_ReferenceCellInfo_r7_1,
	5,	/* Elements count */
	&asn_SPC_UE_Positioning_OTDOA_ReferenceCellInfo_r7_specs_1	/* Additional specs */
};

