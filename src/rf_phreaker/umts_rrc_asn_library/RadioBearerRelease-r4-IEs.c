/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/RadioBearerRelease-r4-IEs.h"

static asn_per_constraints_t asn_PER_type_dummy_constr_20 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificPhysChInfo_constr_31 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_21[] = {
	{ ATF_POINTER, 2, offsetof(struct RadioBearerRelease_r4_IEs__dummy__fdd, dummy1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy1"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs__dummy__fdd, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRAC_StaticInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static int asn_MAP_fdd_oms_21[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_fdd_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy1 at 5951 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy2 at 5952 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_21 = {
	sizeof(struct RadioBearerRelease_r4_IEs__dummy__fdd),
	offsetof(struct RadioBearerRelease_r4_IEs__dummy__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_21,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_21,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_21 = {
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
	asn_DEF_fdd_tags_21,
	sizeof(asn_DEF_fdd_tags_21)
		/sizeof(asn_DEF_fdd_tags_21[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_21,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_21)
		/sizeof(asn_DEF_fdd_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_21,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dummy_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs__dummy, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs__dummy, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dummy_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 5951 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 5954 */
};
static asn_CHOICE_specifics_t asn_SPC_dummy_specs_20 = {
	sizeof(struct RadioBearerRelease_r4_IEs__dummy),
	offsetof(struct RadioBearerRelease_r4_IEs__dummy, _asn_ctx),
	offsetof(struct RadioBearerRelease_r4_IEs__dummy, present),
	sizeof(((struct RadioBearerRelease_r4_IEs__dummy *)0)->present),
	asn_MAP_dummy_tag2el_20,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_20 = {
	"dummy",
	"dummy",
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
	&asn_PER_type_dummy_constr_20,
	asn_MBR_dummy_20,
	2,	/* Elements count */
	&asn_SPC_dummy_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_32[] = {
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo__fdd, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PDSCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
};
static int asn_MAP_fdd_oms_32[] = { 0 };
static ber_tlv_tag_t asn_DEF_fdd_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dummy at 5967 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_32 = {
	sizeof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo__fdd),
	offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_32,
	1,	/* Count of tags in the map */
	asn_MAP_fdd_oms_32,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_32 = {
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
	asn_DEF_fdd_tags_32,
	sizeof(asn_DEF_fdd_tags_32)
		/sizeof(asn_DEF_fdd_tags_32[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_32,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_32)
		/sizeof(asn_DEF_fdd_tags_32[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_32,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificPhysChInfo_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_32,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificPhysChInfo_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 5967 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 5969 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificPhysChInfo_specs_31 = {
	sizeof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo),
	offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo, _asn_ctx),
	offsetof(struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo, present),
	sizeof(((struct RadioBearerRelease_r4_IEs__modeSpecificPhysChInfo *)0)->present),
	asn_MAP_modeSpecificPhysChInfo_tag2el_31,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificPhysChInfo_31 = {
	"modeSpecificPhysChInfo",
	"modeSpecificPhysChInfo",
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
	&asn_PER_type_modeSpecificPhysChInfo_constr_31,
	asn_MBR_modeSpecificPhysChInfo_31,
	2,	/* Elements count */
	&asn_SPC_modeSpecificPhysChInfo_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioBearerRelease_r4_IEs_1[] = {
	{ ATF_POINTER, 6, offsetof(struct RadioBearerRelease_r4_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerRelease_r4_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerRelease_r4_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerRelease_r4_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerRelease_r4_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs, new_DSCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSCH_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-DSCH-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerRelease_r4_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerRelease_r4_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerRelease_r4_IEs, signallingConnectionRelIndication),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signallingConnectionRelIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerRelease_r4_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs, rab_InformationReconfigList),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationReconfigList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationReconfigList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs, rb_InformationReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationReleaseList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationReleaseList"
		},
	{ ATF_POINTER, 12, offsetof(struct RadioBearerRelease_r4_IEs, rb_InformationAffectedList),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_InformationAffectedList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-InformationAffectedList"
		},
	{ ATF_POINTER, 11, offsetof(struct RadioBearerRelease_r4_IEs, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 10, offsetof(struct RadioBearerRelease_r4_IEs, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioBearerRelease_r4_IEs, ul_deletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DeletedTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-deletedTransChInfoList"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioBearerRelease_r4_IEs, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioBearerRelease_r4_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dummy_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioBearerRelease_r4_IEs, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioBearerRelease_r4_IEs, dl_DeletedTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_DeletedTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-DeletedTransChInfoList"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioBearerRelease_r4_IEs, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioBearerRelease_r4_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerRelease_r4_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs, ul_ChannelRequirement),
		(ASN_TAG_CLASS_CONTEXT | (24 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_ChannelRequirement_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ChannelRequirement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioBearerRelease_r4_IEs, modeSpecificPhysChInfo),
		(ASN_TAG_CLASS_CONTEXT | (25 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificPhysChInfo_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificPhysChInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioBearerRelease_r4_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (26 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioBearerRelease_r4_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (27 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
};
static int asn_MAP_RadioBearerRelease_r4_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 27 };
static ber_tlv_tag_t asn_DEF_RadioBearerRelease_r4_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioBearerRelease_r4_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionModeInfo at 5923 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringModeInfo at 5924 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime at 5925 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* new-U-RNTI at 5926 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-C-RNTI at 5927 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* new-DSCH-RNTI at 5930 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rrc-StateIndicator at 5931 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* utran-DRX-CycleLengthCoeff at 5932 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cn-InformationInfo at 5934 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* signallingConnectionRelIndication at 5935 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ura-Identity at 5937 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rab-InformationReconfigList at 5939 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* rb-InformationReleaseList at 5940 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* rb-InformationAffectedList at 5941 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* dl-CounterSynchronisationInfo at 5942 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ul-CommonTransChInfo at 5944 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* ul-deletedTransChInfoList at 5945 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* ul-AddReconfTransChInfoList at 5946 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* dummy at 5953 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* dl-CommonTransChInfo at 5956 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* dl-DeletedTransChInfoList at 5957 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* dl-AddReconfTransChInfoList at 5958 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* frequencyInfo at 5960 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 }, /* maxAllowedUL-TX-Power at 5961 */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 24, 0, 0 }, /* ul-ChannelRequirement at 5962 */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 25, 0, 0 }, /* modeSpecificPhysChInfo at 5968 */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 26, 0, 0 }, /* dl-CommonInformation at 5971 */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 27, 0, 0 } /* dl-InformationPerRL-List at 5972 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioBearerRelease_r4_IEs_specs_1 = {
	sizeof(struct RadioBearerRelease_r4_IEs),
	offsetof(struct RadioBearerRelease_r4_IEs, _asn_ctx),
	asn_MAP_RadioBearerRelease_r4_IEs_tag2el_1,
	28,	/* Count of tags in the map */
	asn_MAP_RadioBearerRelease_r4_IEs_oms_1,	/* Optional members */
	25, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_r4_IEs = {
	"RadioBearerRelease-r4-IEs",
	"RadioBearerRelease-r4-IEs",
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
	asn_DEF_RadioBearerRelease_r4_IEs_tags_1,
	sizeof(asn_DEF_RadioBearerRelease_r4_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerRelease_r4_IEs_tags_1[0]), /* 1 */
	asn_DEF_RadioBearerRelease_r4_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioBearerRelease_r4_IEs_tags_1)
		/sizeof(asn_DEF_RadioBearerRelease_r4_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioBearerRelease_r4_IEs_1,
	28,	/* Elements count */
	&asn_SPC_RadioBearerRelease_r4_IEs_specs_1	/* Additional specs */
};

