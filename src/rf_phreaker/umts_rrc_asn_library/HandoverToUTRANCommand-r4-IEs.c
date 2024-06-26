/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/HandoverToUTRANCommand-r4-IEs.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_13 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_preConfigMode_constr_22 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd_constr_34 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_28 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_specificationMode_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_14[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo__fdd, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_PDSCH_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo__fdd, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CPCH_SetInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static int asn_MAP_fdd_oms_14[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_fdd_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy at 2604 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dummy2 at 2605 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_14 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo__fdd),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_fdd_oms_14,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_14 = {
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
	asn_DEF_fdd_tags_14,
	sizeof(asn_DEF_fdd_tags_14)
		/sizeof(asn_DEF_fdd_tags_14[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_14,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_14)
		/sizeof(asn_DEF_fdd_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_14,
	2,	/* Elements count */
	&asn_SPC_fdd_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 2604 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 2607 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_13 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo, present),
	sizeof(((struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_13,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_13 = {
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
	&asn_PER_type_modeSpecificInfo_constr_13,
	asn_MBR_modeSpecificInfo_13,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_complete_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, rab_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationSetupList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationSetupList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
};
static int asn_MAP_complete_oms_5[] = { 1 };
static ber_tlv_tag_t asn_DEF_complete_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_complete_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-InformationSetupList at 2593 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rab-InformationSetupList at 2594 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-CommonTransChInfo at 2595 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-AddReconfTransChInfoList at 2596 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-CommonTransChInfo at 2597 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-AddReconfTransChInfoList at 2598 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ul-DPCH-Info at 2599 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* modeSpecificInfo at 2606 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dl-CommonInformation at 2609 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* dl-InformationPerRL-List at 2610 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* frequencyInfo at 2612 */
};
static asn_SEQUENCE_specifics_t asn_SPC_complete_specs_5 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__complete, _asn_ctx),
	asn_MAP_complete_tag2el_5,
	11,	/* Count of tags in the map */
	asn_MAP_complete_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_complete_5 = {
	"complete",
	"complete",
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
	asn_DEF_complete_tags_5,
	sizeof(asn_DEF_complete_tags_5)
		/sizeof(asn_DEF_complete_tags_5[0]) - 1, /* 1 */
	asn_DEF_complete_tags_5,	/* Same as above */
	sizeof(asn_DEF_complete_tags_5)
		/sizeof(asn_DEF_complete_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_complete_5,
	11,	/* Elements count */
	&asn_SPC_complete_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_defaultConfig_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, defaultConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, defaultConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigIdentity_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigIdentity"
		},
};
static ber_tlv_tag_t asn_DEF_defaultConfig_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_defaultConfig_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultConfigMode at 2620 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfigIdentity at 2622 */
};
static asn_SEQUENCE_specifics_t asn_SPC_defaultConfig_specs_24 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, _asn_ctx),
	asn_MAP_defaultConfig_tag2el_24,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_defaultConfig_24 = {
	"defaultConfig",
	"defaultConfig",
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
	asn_DEF_defaultConfig_tags_24,
	sizeof(asn_DEF_defaultConfig_tags_24)
		/sizeof(asn_DEF_defaultConfig_tags_24[0]) - 1, /* 1 */
	asn_DEF_defaultConfig_tags_24,	/* Same as above */
	sizeof(asn_DEF_defaultConfig_tags_24)
		/sizeof(asn_DEF_defaultConfig_tags_24[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_defaultConfig_24,
	2,	/* Elements count */
	&asn_SPC_defaultConfig_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preConfigMode_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode, choice.predefinedConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"predefinedConfigIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode, choice.defaultConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_defaultConfig_24,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfig"
		},
};
static asn_TYPE_tag2member_t asn_MAP_preConfigMode_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* predefinedConfigIdentity at 2618 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfig at 2620 */
};
static asn_CHOICE_specifics_t asn_SPC_preConfigMode_specs_22 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode, present),
	sizeof(((struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__preConfigMode *)0)->present),
	asn_MAP_preConfigMode_tag2el_22,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preConfigMode_22 = {
	"preConfigMode",
	"preConfigMode",
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
	&asn_PER_type_preConfigMode_constr_22,
	asn_MBR_preConfigMode_22,
	2,	/* Elements count */
	&asn_SPC_preConfigMode_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_29[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, dl_CommonInformationPost),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformationPost,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformationPost"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_ListPostFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2627 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CommonInformationPost at 2628 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-InformationPerRL-List at 2629 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* frequencyInfo at 2631 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_29 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_29,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_29 = {
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
	asn_DEF_fdd_tags_29,
	sizeof(asn_DEF_fdd_tags_29)
		/sizeof(asn_DEF_fdd_tags_29[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_29,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_29)
		/sizeof(asn_DEF_fdd_tags_29[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_29,
	4,	/* Elements count */
	&asn_SPC_fdd_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_35[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, dl_InformationPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_PostTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2634 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-InformationPerRL at 2635 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo at 2636 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* primaryCCPCH-TX-Power at 2638 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_35 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_35,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_35 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_35,
	sizeof(asn_DEF_tdd384_tags_35)
		/sizeof(asn_DEF_tdd384_tags_35[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_35,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_35)
		/sizeof(asn_DEF_tdd384_tags_35[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_35,
	4,	/* Elements count */
	&asn_SPC_tdd384_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_40[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, dl_InformationPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_PostTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static ber_tlv_tag_t asn_DEF_tdd128_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_40[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2640 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-InformationPerRL at 2641 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo at 2642 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* primaryCCPCH-TX-Power at 2644 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_40 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_40,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_40 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_40,
	sizeof(asn_DEF_tdd128_tags_40)
		/sizeof(asn_DEF_tdd128_tags_40[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_40,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_40)
		/sizeof(asn_DEF_tdd128_tags_40[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_40,
	4,	/* Elements count */
	&asn_SPC_tdd128_specs_40	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_34[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_35,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_40,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 2634 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 2640 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd_specs_34 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, present),
	sizeof(((struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd *)0)->present),
	asn_MAP_tdd_tag2el_34,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_34 = {
	"tdd",
	"tdd",
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
	&asn_PER_type_tdd_constr_34,
	asn_MBR_tdd_34,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_28[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_29,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd_34,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 2627 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 2638 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_28 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo, present),
	sizeof(((struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_28,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_28 = {
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
	&asn_PER_type_modeSpecificInfo_constr_28,
	asn_MBR_modeSpecificInfo_28,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preconfiguration_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration, preConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_preConfigMode_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preConfigMode"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration, rab_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_Info_Post,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_28,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static int asn_MAP_preconfiguration_oms_21[] = { 1 };
static ber_tlv_tag_t asn_DEF_preconfiguration_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_preconfiguration_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preConfigMode at 2618 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rab-Info at 2624 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* modeSpecificInfo at 2631 */
};
static asn_SEQUENCE_specifics_t asn_SPC_preconfiguration_specs_21 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode__preconfiguration, _asn_ctx),
	asn_MAP_preconfiguration_tag2el_21,
	3,	/* Count of tags in the map */
	asn_MAP_preconfiguration_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preconfiguration_21 = {
	"preconfiguration",
	"preconfiguration",
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
	asn_DEF_preconfiguration_tags_21,
	sizeof(asn_DEF_preconfiguration_tags_21)
		/sizeof(asn_DEF_preconfiguration_tags_21[0]) - 1, /* 1 */
	asn_DEF_preconfiguration_tags_21,	/* Same as above */
	sizeof(asn_DEF_preconfiguration_tags_21)
		/sizeof(asn_DEF_preconfiguration_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_preconfiguration_21,
	3,	/* Elements count */
	&asn_SPC_preconfiguration_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_specificationMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode, choice.complete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_complete_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"complete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode, choice.preconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_preconfiguration_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preconfiguration"
		},
};
static asn_TYPE_tag2member_t asn_MAP_specificationMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* complete at 2593 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preconfiguration at 2623 */
};
static asn_CHOICE_specifics_t asn_SPC_specificationMode_specs_4 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs__specificationMode),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r4_IEs__specificationMode, present),
	sizeof(((struct HandoverToUTRANCommand_r4_IEs__specificationMode *)0)->present),
	asn_MAP_specificationMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specificationMode_4 = {
	"specificationMode",
	"specificationMode",
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
	&asn_PER_type_specificationMode_constr_4,
	asn_MBR_specificationMode_4,
	2,	/* Elements count */
	&asn_SPC_specificationMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HandoverToUTRANCommand_r4_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI_Short,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r4_IEs, cipheringAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs, specificationMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_specificationMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specificationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r4_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
};
static int asn_MAP_HandoverToUTRANCommand_r4_IEs_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HandoverToUTRANCommand_r4_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* new-U-RNTI at 2587 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringAlgorithm at 2588 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* specificationMode at 2612 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxAllowedUL-TX-Power at 2651 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverToUTRANCommand_r4_IEs_specs_1 = {
	sizeof(struct HandoverToUTRANCommand_r4_IEs),
	offsetof(struct HandoverToUTRANCommand_r4_IEs, _asn_ctx),
	asn_MAP_HandoverToUTRANCommand_r4_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_HandoverToUTRANCommand_r4_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand_r4_IEs = {
	"HandoverToUTRANCommand-r4-IEs",
	"HandoverToUTRANCommand-r4-IEs",
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
	asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1,
	sizeof(asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1)
		/sizeof(asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1)
		/sizeof(asn_DEF_HandoverToUTRANCommand_r4_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HandoverToUTRANCommand_r4_IEs_1,
	4,	/* Elements count */
	&asn_SPC_HandoverToUTRANCommand_r4_IEs_specs_1	/* Additional specs */
};

