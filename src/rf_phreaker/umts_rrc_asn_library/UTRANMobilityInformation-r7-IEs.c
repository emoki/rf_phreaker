/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UTRANMobilityInformation-r7-IEs.h"

static asn_TYPE_member_t asn_MBR_UTRANMobilityInformation_r7_IEs_1[] = {
	{ ATF_POINTER, 11, offsetof(struct UTRANMobilityInformation_r7_IEs, integrityProtectionModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntegrityProtectionModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"integrityProtectionModeInfo"
		},
	{ ATF_POINTER, 10, offsetof(struct UTRANMobilityInformation_r7_IEs, cipheringModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringModeInfo_r7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringModeInfo"
		},
	{ ATF_POINTER, 9, offsetof(struct UTRANMobilityInformation_r7_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 8, offsetof(struct UTRANMobilityInformation_r7_IEs, new_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-C-RNTI"
		},
	{ ATF_POINTER, 7, offsetof(struct UTRANMobilityInformation_r7_IEs, new_H_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_H_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-H-RNTI"
		},
	{ ATF_POINTER, 6, offsetof(struct UTRANMobilityInformation_r7_IEs, ue_ConnTimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_ConnTimersAndConstants_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-ConnTimersAndConstants"
		},
	{ ATF_POINTER, 5, offsetof(struct UTRANMobilityInformation_r7_IEs, cn_InformationInfo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_InformationInfoFull,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-InformationInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct UTRANMobilityInformation_r7_IEs, primary_plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primary-plmn-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct UTRANMobilityInformation_r7_IEs, ura_Identity),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_URA_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ura-Identity"
		},
	{ ATF_POINTER, 2, offsetof(struct UTRANMobilityInformation_r7_IEs, supportForChangeOfUE_Capability),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForChangeOfUE-Capability"
		},
	{ ATF_POINTER, 1, offsetof(struct UTRANMobilityInformation_r7_IEs, dl_CounterSynchronisationInfo),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CounterSynchronisationInfo_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CounterSynchronisationInfo"
		},
};
static int asn_MAP_UTRANMobilityInformation_r7_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static ber_tlv_tag_t asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UTRANMobilityInformation_r7_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionModeInfo at 10152 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringModeInfo at 10153 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* new-U-RNTI at 10154 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* new-C-RNTI at 10155 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-H-RNTI at 10156 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ue-ConnTimersAndConstants at 10157 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cn-InformationInfo at 10159 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* primary-plmn-Identity at 10160 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ura-Identity at 10162 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* supportForChangeOfUE-Capability at 10163 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* dl-CounterSynchronisationInfo at 10165 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UTRANMobilityInformation_r7_IEs_specs_1 = {
	sizeof(struct UTRANMobilityInformation_r7_IEs),
	offsetof(struct UTRANMobilityInformation_r7_IEs, _asn_ctx),
	asn_MAP_UTRANMobilityInformation_r7_IEs_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_UTRANMobilityInformation_r7_IEs_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UTRANMobilityInformation_r7_IEs = {
	"UTRANMobilityInformation-r7-IEs",
	"UTRANMobilityInformation-r7-IEs",
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
	asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1,
	sizeof(asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1)
		/sizeof(asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1[0]), /* 1 */
	asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1)
		/sizeof(asn_DEF_UTRANMobilityInformation_r7_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UTRANMobilityInformation_r7_IEs_1,
	11,	/* Elements count */
	&asn_SPC_UTRANMobilityInformation_r7_IEs_specs_1	/* Additional specs */
};

