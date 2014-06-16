/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "rf_phreaker/lte_rrc_asn_library/InterFreqCarrierFreqInfo.h"

static int asn_DFL_13_set_15(int set_value, void **sptr) {
	Q_OffsetRange_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 15 */
		*st = 15;
		return 0;
	} else {
		/* Test default value 15 */
		return (*st == 15);
	}
}
static asn_TYPE_member_t asn_MBR_threshX_Q_r9_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo__threshX_Q_r9, threshX_HighQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-HighQ-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo__threshX_Q_r9, threshX_LowQ_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThresholdQ_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-LowQ-r9"
		},
};
static ber_tlv_tag_t asn_DEF_threshX_Q_r9_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_threshX_Q_r9_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshX-HighQ-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* threshX-LowQ-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_threshX_Q_r9_specs_18 = {
	sizeof(struct InterFreqCarrierFreqInfo__threshX_Q_r9),
	offsetof(struct InterFreqCarrierFreqInfo__threshX_Q_r9, _asn_ctx),
	asn_MAP_threshX_Q_r9_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_threshX_Q_r9_18 = {
	"threshX-Q-r9",
	"threshX-Q-r9",
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
	asn_DEF_threshX_Q_r9_tags_18,
	sizeof(asn_DEF_threshX_Q_r9_tags_18)
		/sizeof(asn_DEF_threshX_Q_r9_tags_18[0]) - 1, /* 1 */
	asn_DEF_threshX_Q_r9_tags_18,	/* Same as above */
	sizeof(asn_DEF_threshX_Q_r9_tags_18)
		/sizeof(asn_DEF_threshX_Q_r9_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_threshX_Q_r9_18,
	2,	/* Elements count */
	&asn_SPC_threshX_Q_r9_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_InterFreqCarrierFreqInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, dl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, q_RxLevMin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_RxLevMin,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-RxLevMin"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo, p_Max),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"p-Max"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, t_ReselectionEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionEUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo, t_ReselectionEUTRA_SF),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t-ReselectionEUTRA-SF"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, threshX_High),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-High"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, threshX_Low),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReselectionThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Low"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"presenceAntennaPort1"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellReselectionPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellReselectionPriority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InterFreqCarrierFreqInfo, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellConfig"
		},
	{ ATF_POINTER, 6, offsetof(struct InterFreqCarrierFreqInfo, q_OffsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_13_set_15,	/* DEFAULT 15 */
		"q-OffsetFreq"
		},
	{ ATF_POINTER, 5, offsetof(struct InterFreqCarrierFreqInfo, interFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqNeighCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqNeighCellList"
		},
	{ ATF_POINTER, 4, offsetof(struct InterFreqCarrierFreqInfo, interFreqBlackCellList),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqBlackCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqBlackCellList"
		},
	{ ATF_POINTER, 3, offsetof(struct InterFreqCarrierFreqInfo, q_QualMin_r9),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMin-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct InterFreqCarrierFreqInfo, threshX_Q_r9),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		0,
		&asn_DEF_threshX_Q_r9_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"threshX-Q-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct InterFreqCarrierFreqInfo, q_QualMinWB_r11),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_QualMin_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"q-QualMinWB-r11"
		},
};
static int asn_MAP_InterFreqCarrierFreqInfo_oms_1[] = { 2, 4, 9, 11, 12, 13, 14, 15, 16 };
static ber_tlv_tag_t asn_DEF_InterFreqCarrierFreqInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InterFreqCarrierFreqInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-RxLevMin */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-Max */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t-ReselectionEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t-ReselectionEUTRA-SF */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* threshX-High */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* threshX-Low */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* q-OffsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* interFreqNeighCellList */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* interFreqBlackCellList */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* q-QualMin-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* threshX-Q-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 } /* q-QualMinWB-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InterFreqCarrierFreqInfo_specs_1 = {
	sizeof(struct InterFreqCarrierFreqInfo),
	offsetof(struct InterFreqCarrierFreqInfo, _asn_ctx),
	asn_MAP_InterFreqCarrierFreqInfo_tag2el_1,
	17,	/* Count of tags in the map */
	asn_MAP_InterFreqCarrierFreqInfo_oms_1,	/* Optional members */
	6, 3,	/* Root/Additions */
	13,	/* Start extensions */
	18	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo = {
	"InterFreqCarrierFreqInfo",
	"InterFreqCarrierFreqInfo",
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
	asn_DEF_InterFreqCarrierFreqInfo_tags_1,
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_tags_1[0]), /* 1 */
	asn_DEF_InterFreqCarrierFreqInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_InterFreqCarrierFreqInfo_tags_1)
		/sizeof(asn_DEF_InterFreqCarrierFreqInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InterFreqCarrierFreqInfo_1,
	17,	/* Elements count */
	&asn_SPC_InterFreqCarrierFreqInfo_specs_1	/* Additional specs */
};

