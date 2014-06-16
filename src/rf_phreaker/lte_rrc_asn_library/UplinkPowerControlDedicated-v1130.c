/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/UplinkPowerControlDedicated-v1130.h"

static int
memb_pSRS_Offset_v1130_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 16 && value <= 31)) {
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
memb_pSRS_OffsetAp_v1130_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 16 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_pSRS_Offset_v1130_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  16,  31 }	/* (16..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_pSRS_OffsetAp_v1130_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  16,  31 }	/* (16..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_v1130_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UplinkPowerControlDedicated_v1130, pSRS_Offset_v1130),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pSRS_Offset_v1130_constraint_1,
		&asn_PER_memb_pSRS_Offset_v1130_constr_2,
		0,
		"pSRS-Offset-v1130"
		},
	{ ATF_POINTER, 2, offsetof(struct UplinkPowerControlDedicated_v1130, pSRS_OffsetAp_v1130),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pSRS_OffsetAp_v1130_constraint_1,
		&asn_PER_memb_pSRS_OffsetAp_v1130_constr_3,
		0,
		"pSRS-OffsetAp-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlDedicated_v1130, deltaTxD_OffsetListPUCCH_v1130),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTxD_OffsetListPUCCH_v1130,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaTxD-OffsetListPUCCH-v1130"
		},
};
static int asn_MAP_UplinkPowerControlDedicated_v1130_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_UplinkPowerControlDedicated_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlDedicated_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pSRS-Offset-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pSRS-OffsetAp-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* deltaTxD-OffsetListPUCCH-v1130 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_v1130_specs_1 = {
	sizeof(struct UplinkPowerControlDedicated_v1130),
	offsetof(struct UplinkPowerControlDedicated_v1130, _asn_ctx),
	asn_MAP_UplinkPowerControlDedicated_v1130_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlDedicated_v1130_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated_v1130 = {
	"UplinkPowerControlDedicated-v1130",
	"UplinkPowerControlDedicated-v1130",
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
	asn_DEF_UplinkPowerControlDedicated_v1130_tags_1,
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1130_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1130_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlDedicated_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlDedicated_v1130_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_v1130_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UplinkPowerControlDedicated_v1130_1,
	3,	/* Elements count */
	&asn_SPC_UplinkPowerControlDedicated_v1130_specs_1	/* Additional specs */
};

