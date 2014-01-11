/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/E-DCH-AddReconf-MAC-d-Flow.h"

static int
memb_maxMAC_e_PDUContents_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 19982)) {
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
memb_ms2_NonSchedTransmGrantHARQAlloc_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_maxMAC_e_PDUContents_constr_8 = {
	{ APC_CONSTRAINED,	 15,  15,  1,  19982 }	/* (1..19982) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ms2_NonSchedTransmGrantHARQAlloc_constr_9 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_transmissionGrantType_constr_6 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_non_ScheduledTransGrantInfo_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType__non_ScheduledTransGrantInfo, maxMAC_e_PDUContents),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_maxMAC_e_PDUContents_constraint_7,
		&asn_PER_memb_maxMAC_e_PDUContents_constr_8,
		0,
		"maxMAC-e-PDUContents"
		},
	{ ATF_POINTER, 1, offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType__non_ScheduledTransGrantInfo, ms2_NonSchedTransmGrantHARQAlloc),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_ms2_NonSchedTransmGrantHARQAlloc_constraint_7,
		&asn_PER_memb_ms2_NonSchedTransmGrantHARQAlloc_constr_9,
		0,
		"ms2-NonSchedTransmGrantHARQAlloc"
		},
};
static int asn_MAP_non_ScheduledTransGrantInfo_oms_7[] = { 1 };
static ber_tlv_tag_t asn_DEF_non_ScheduledTransGrantInfo_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_non_ScheduledTransGrantInfo_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxMAC-e-PDUContents at 15262 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ms2-NonSchedTransmGrantHARQAlloc at 15263 */
};
static asn_SEQUENCE_specifics_t asn_SPC_non_ScheduledTransGrantInfo_specs_7 = {
	sizeof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType__non_ScheduledTransGrantInfo),
	offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType__non_ScheduledTransGrantInfo, _asn_ctx),
	asn_MAP_non_ScheduledTransGrantInfo_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_non_ScheduledTransGrantInfo_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_non_ScheduledTransGrantInfo_7 = {
	"non-ScheduledTransGrantInfo",
	"non-ScheduledTransGrantInfo",
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
	asn_DEF_non_ScheduledTransGrantInfo_tags_7,
	sizeof(asn_DEF_non_ScheduledTransGrantInfo_tags_7)
		/sizeof(asn_DEF_non_ScheduledTransGrantInfo_tags_7[0]) - 1, /* 1 */
	asn_DEF_non_ScheduledTransGrantInfo_tags_7,	/* Same as above */
	sizeof(asn_DEF_non_ScheduledTransGrantInfo_tags_7)
		/sizeof(asn_DEF_non_ScheduledTransGrantInfo_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_non_ScheduledTransGrantInfo_7,
	2,	/* Elements count */
	&asn_SPC_non_ScheduledTransGrantInfo_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_transmissionGrantType_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType, choice.non_ScheduledTransGrantInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_non_ScheduledTransGrantInfo_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"non-ScheduledTransGrantInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType, choice.scheduledTransmissionGrantInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scheduledTransmissionGrantInfo"
		},
};
static asn_TYPE_tag2member_t asn_MAP_transmissionGrantType_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* non-ScheduledTransGrantInfo at 15262 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* scheduledTransmissionGrantInfo at 15265 */
};
static asn_CHOICE_specifics_t asn_SPC_transmissionGrantType_specs_6 = {
	sizeof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType),
	offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType, _asn_ctx),
	offsetof(struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType, present),
	sizeof(((struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType *)0)->present),
	asn_MAP_transmissionGrantType_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionGrantType_6 = {
	"transmissionGrantType",
	"transmissionGrantType",
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
	&asn_PER_type_transmissionGrantType_constr_6,
	asn_MBR_transmissionGrantType_6,
	2,	/* Elements count */
	&asn_SPC_transmissionGrantType_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E_DCH_AddReconf_MAC_d_Flow_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_DCH_AddReconf_MAC_d_Flow, mac_d_FlowIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_MAC_d_FlowIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-d-FlowIdentity"
		},
	{ ATF_POINTER, 4, offsetof(struct E_DCH_AddReconf_MAC_d_Flow, mac_d_FlowPowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_MAC_d_FlowPowerOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-d-FlowPowerOffset"
		},
	{ ATF_POINTER, 3, offsetof(struct E_DCH_AddReconf_MAC_d_Flow, mac_d_FlowMaxRetrans),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_MAC_d_FlowMaxRetrans,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-d-FlowMaxRetrans"
		},
	{ ATF_POINTER, 2, offsetof(struct E_DCH_AddReconf_MAC_d_Flow, mac_d_FlowMultiplexingList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_DCH_MAC_d_FlowMultiplexingList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-d-FlowMultiplexingList"
		},
	{ ATF_POINTER, 1, offsetof(struct E_DCH_AddReconf_MAC_d_Flow, transmissionGrantType),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_transmissionGrantType_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transmissionGrantType"
		},
};
static int asn_MAP_E_DCH_AddReconf_MAC_d_Flow_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_E_DCH_AddReconf_MAC_d_Flow_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mac-d-FlowIdentity at 15256 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-d-FlowPowerOffset at 15257 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mac-d-FlowMaxRetrans at 15258 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-d-FlowMultiplexingList at 15259 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* transmissionGrantType at 15264 */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_DCH_AddReconf_MAC_d_Flow_specs_1 = {
	sizeof(struct E_DCH_AddReconf_MAC_d_Flow),
	offsetof(struct E_DCH_AddReconf_MAC_d_Flow, _asn_ctx),
	asn_MAP_E_DCH_AddReconf_MAC_d_Flow_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_E_DCH_AddReconf_MAC_d_Flow_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_DCH_AddReconf_MAC_d_Flow = {
	"E-DCH-AddReconf-MAC-d-Flow",
	"E-DCH-AddReconf-MAC-d-Flow",
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
	asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1,
	sizeof(asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1)
		/sizeof(asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1[0]), /* 1 */
	asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1)
		/sizeof(asn_DEF_E_DCH_AddReconf_MAC_d_Flow_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_DCH_AddReconf_MAC_d_Flow_1,
	5,	/* Elements count */
	&asn_SPC_E_DCH_AddReconf_MAC_d_Flow_specs_1	/* Additional specs */
};

