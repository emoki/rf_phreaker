/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "rf_phreaker/lte_rrc_asn_library/MeasObjectEUTRA.h"

static int asn_DFL_6_set_15(int set_value, void **sptr) {
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
static asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, allowedMeasBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllowedMeasBandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allowedMeasBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, presenceAntennaPort1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PresenceAntennaPort1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"presenceAntennaPort1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectEUTRA, neighCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellConfig"
		},
	{ ATF_POINTER, 9, offsetof(struct MeasObjectEUTRA, offsetFreq),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_6_set_15,	/* DEFAULT 15 */
		"offsetFreq"
		},
	{ ATF_POINTER, 8, offsetof(struct MeasObjectEUTRA, cellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToRemoveList"
		},
	{ ATF_POINTER, 7, offsetof(struct MeasObjectEUTRA, cellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellsToAddModList"
		},
	{ ATF_POINTER, 6, offsetof(struct MeasObjectEUTRA, blackCellsToRemoveList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndexList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToRemoveList"
		},
	{ ATF_POINTER, 5, offsetof(struct MeasObjectEUTRA, blackCellsToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BlackCellsToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"blackCellsToAddModList"
		},
	{ ATF_POINTER, 4, offsetof(struct MeasObjectEUTRA, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 3, offsetof(struct MeasObjectEUTRA, measCycleSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasCycleSCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measCycleSCell-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct MeasObjectEUTRA, measSubframePatternConfigNeigh_r10),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternConfigNeigh_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measSubframePatternConfigNeigh-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasObjectEUTRA, widebandRSRQ_Meas_r11),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"widebandRSRQ-Meas-r11"
		},
};
static int asn_MAP_MeasObjectEUTRA_oms_1[] = { 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static ber_tlv_tag_t asn_DEF_MeasObjectEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasObjectEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allowedMeasBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* presenceAntennaPort1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* neighCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* offsetFreq */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* blackCellsToRemoveList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* blackCellsToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* measCycleSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* measSubframePatternConfigNeigh-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* widebandRSRQ-Meas-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1 = {
	sizeof(struct MeasObjectEUTRA),
	offsetof(struct MeasObjectEUTRA, _asn_ctx),
	asn_MAP_MeasObjectEUTRA_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_MeasObjectEUTRA_oms_1,	/* Optional members */
	6, 3,	/* Root/Additions */
	9,	/* Start extensions */
	14	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA = {
	"MeasObjectEUTRA",
	"MeasObjectEUTRA",
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
	asn_DEF_MeasObjectEUTRA_tags_1,
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectEUTRA_tags_1)
		/sizeof(asn_DEF_MeasObjectEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasObjectEUTRA_1,
	13,	/* Elements count */
	&asn_SPC_MeasObjectEUTRA_specs_1	/* Additional specs */
};

