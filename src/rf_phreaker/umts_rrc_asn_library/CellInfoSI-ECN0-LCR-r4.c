/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/CellInfoSI-ECN0-LCR-r4.h"

static int asn_DFL_2_set_0(int set_value, void **sptr) {
	CellIndividualOffset_t *st = *sptr;
	
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
static asn_TYPE_member_t asn_MBR_CellInfoSI_ECN0_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 2, offsetof(struct CellInfoSI_ECN0_LCR_r4, cellIndividualOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIndividualOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_0,	/* DEFAULT 0 */
		"cellIndividualOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_ECN0_LCR_r4, referenceTimeDifferenceToCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ReferenceTimeDifferenceToCell,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceTimeDifferenceToCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoSI_ECN0_LCR_r4, primaryCCPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_Info_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct CellInfoSI_ECN0_LCR_r4, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_ECN0_LCR_r4, timeslotInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotInfoList_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslotInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellInfoSI_ECN0_LCR_r4, readSFN_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"readSFN-Indicator"
		},
	{ ATF_POINTER, 1, offsetof(struct CellInfoSI_ECN0_LCR_r4, cellSelectionReselectionInfo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellSelectReselectInfoSIB_11_12_ECN0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellSelectionReselectionInfo"
		},
};
static int asn_MAP_CellInfoSI_ECN0_LCR_r4_oms_1[] = { 0, 1, 3, 4, 6 };
static ber_tlv_tag_t asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellInfoSI_ECN0_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIndividualOffset at 22452 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* referenceTimeDifferenceToCell at 22453 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* primaryCCPCH-Info at 22454 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* primaryCCPCH-TX-Power at 22455 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* timeslotInfoList at 22456 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* readSFN-Indicator at 22457 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* cellSelectionReselectionInfo at 22458 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellInfoSI_ECN0_LCR_r4_specs_1 = {
	sizeof(struct CellInfoSI_ECN0_LCR_r4),
	offsetof(struct CellInfoSI_ECN0_LCR_r4, _asn_ctx),
	asn_MAP_CellInfoSI_ECN0_LCR_r4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CellInfoSI_ECN0_LCR_r4_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellInfoSI_ECN0_LCR_r4 = {
	"CellInfoSI-ECN0-LCR-r4",
	"CellInfoSI-ECN0-LCR-r4",
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
	asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1,
	sizeof(asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1)
		/sizeof(asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1)
		/sizeof(asn_DEF_CellInfoSI_ECN0_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellInfoSI_ECN0_LCR_r4_1,
	7,	/* Elements count */
	&asn_SPC_CellInfoSI_ECN0_LCR_r4_specs_1	/* Additional specs */
};

