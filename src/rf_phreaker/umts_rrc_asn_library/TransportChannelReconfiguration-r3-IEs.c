/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/TransportChannelReconfiguration-r3-IEs.h"

static asn_per_constraints_t asn_PER_type_dummy_constr_15 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificPhysChInfo_constr_25 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_16[] = {
	{ ATF_POINTER, 2, offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy__fdd, dummy1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy1"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy__fdd, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRAC_StaticInformationList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static int asn_MAP_fdd_oms_16[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_fdd_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy1 at 8893 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy2 at 8894 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_16 = {
	sizeof(struct TransportChannelReconfiguration_r3_IEs__dummy__fdd),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_16,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_16,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_16 = {
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
	asn_DEF_fdd_tags_16,
	sizeof(asn_DEF_fdd_tags_16)
		/sizeof(asn_DEF_fdd_tags_16[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_16,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_16)
		/sizeof(asn_DEF_fdd_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_16,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dummy_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dummy_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 8893 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 8896 */
};
static asn_CHOICE_specifics_t asn_SPC_dummy_specs_15 = {
	sizeof(struct TransportChannelReconfiguration_r3_IEs__dummy),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy, _asn_ctx),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__dummy, present),
	sizeof(((struct TransportChannelReconfiguration_r3_IEs__dummy *)0)->present),
	asn_MAP_dummy_tag2el_15,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_15 = {
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
	&asn_PER_type_dummy_constr_15,
	asn_MBR_dummy_15,
	2,	/* Elements count */
	&asn_SPC_dummy_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_26[] = {
	{ ATF_POINTER, 1, offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo__fdd, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PDSCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
};
static int asn_MAP_fdd_oms_26[] = { 0 };
static ber_tlv_tag_t asn_DEF_fdd_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dummy at 8908 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_26 = {
	sizeof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo__fdd),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_26,
	1,	/* Count of tags in the map */
	asn_MAP_fdd_oms_26,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_26 = {
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
	asn_DEF_fdd_tags_26,
	sizeof(asn_DEF_fdd_tags_26)
		/sizeof(asn_DEF_fdd_tags_26[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_26,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_26)
		/sizeof(asn_DEF_fdd_tags_26[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_26,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificPhysChInfo_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_26,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificPhysChInfo_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 8908 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 8910 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificPhysChInfo_specs_25 = {
	sizeof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo, _asn_ctx),
	offsetof(struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo, present),
	sizeof(((struct TransportChannelReconfiguration_r3_IEs__modeSpecificPhysChInfo *)0)->present),
	asn_MAP_modeSpecificPhysChInfo_tag2el_25,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificPhysChInfo_25 = {
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
	&asn_PER_type_modeSpecificPhysChInfo_constr_25,
	asn_MBR_modeSpecificPhysChInfo_25,
	2,	/* Elements count */
	&asn_SPC_modeSpecificPhysChInfo_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_TransportChannelReconfiguration_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 5, offsetof(struct TransportChannelReconfiguration_r3_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct TransportChannelReconfiguration_r3_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct TransportChannelReconfiguration_r3_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_POINTER, 2, offsetof(struct TransportChannelReconfiguration_r3_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportChannelReconfiguration_r3_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_POINTER, 12, offsetof(struct TransportChannelReconfiguration_r3_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 11, offsetof(struct TransportChannelReconfiguration_r3_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 10, offsetof(struct TransportChannelReconfiguration_r3_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 9, offsetof(struct TransportChannelReconfiguration_r3_IEs, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct TransportChannelReconfiguration_r3_IEs, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct TransportChannelReconfiguration_r3_IEs, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 6, offsetof(struct TransportChannelReconfiguration_r3_IEs, dummy),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dummy_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 5, offsetof(struct TransportChannelReconfiguration_r3_IEs, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct TransportChannelReconfiguration_r3_IEs, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 3, offsetof(struct TransportChannelReconfiguration_r3_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct TransportChannelReconfiguration_r3_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportChannelReconfiguration_r3_IEs, ul_ChannelRequirement),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_ChannelRequirement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ChannelRequirement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TransportChannelReconfiguration_r3_IEs, modeSpecificPhysChInfo),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificPhysChInfo_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificPhysChInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct TransportChannelReconfiguration_r3_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct TransportChannelReconfiguration_r3_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
};
static int asn_MAP_TransportChannelReconfiguration_r3_IEs_oms_1[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21 };
static ber_tlv_tag_t asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TransportChannelReconfiguration_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier at 8872 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* integrityProtectionModeInfo at 8873 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cipheringModeInfo at 8874 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* activationTime at 8875 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-U-RNTI at 8876 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* new-C-RNTI at 8877 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rrc-StateIndicator at 8878 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* utran-DRX-CycleLengthCoeff at 8879 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cn-InformationInfo at 8881 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ura-Identity at 8883 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dl-CounterSynchronisationInfo at 8885 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ul-CommonTransChInfo at 8887 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ul-AddReconfTransChInfoList at 8888 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* dummy at 8895 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* dl-CommonTransChInfo at 8898 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* dl-AddReconfTransChInfoList at 8899 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* frequencyInfo at 8901 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* maxAllowedUL-TX-Power at 8902 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* ul-ChannelRequirement at 8903 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* modeSpecificPhysChInfo at 8909 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* dl-CommonInformation at 8912 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 } /* dl-InformationPerRL-List at 8913 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TransportChannelReconfiguration_r3_IEs_specs_1 = {
	sizeof(struct TransportChannelReconfiguration_r3_IEs),
	offsetof(struct TransportChannelReconfiguration_r3_IEs, _asn_ctx),
	asn_MAP_TransportChannelReconfiguration_r3_IEs_tag2el_1,
	22,	/* Count of tags in the map */
	asn_MAP_TransportChannelReconfiguration_r3_IEs_oms_1,	/* Optional members */
	19, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TransportChannelReconfiguration_r3_IEs = {
	"TransportChannelReconfiguration-r3-IEs",
	"TransportChannelReconfiguration-r3-IEs",
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
	asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1,
	sizeof(asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1)
		/sizeof(asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1)
		/sizeof(asn_DEF_TransportChannelReconfiguration_r3_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TransportChannelReconfiguration_r3_IEs_1,
	22,	/* Elements count */
	&asn_SPC_TransportChannelReconfiguration_r3_IEs_specs_1	/* Additional specs */
};

