/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasGSMNeighbourCellsinfo.h"

static asn_TYPE_member_t asn_MBR_LoggedMeasGSMNeighbourCellsinfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasGSMNeighbourCellsinfo, bsic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSIC,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bsic"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasGSMNeighbourCellsinfo, frequency_band),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Frequency_Band,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequency-band"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasGSMNeighbourCellsinfo, bcch_ARFCN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BCCH_ARFCN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bcch-ARFCN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasGSMNeighbourCellsinfo, gsm_CarrierRSSI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GSM_CarrierRSSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-CarrierRSSI"
		},
};
static ber_tlv_tag_t asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LoggedMeasGSMNeighbourCellsinfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bsic at 25335 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequency-band at 25336 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bcch-ARFCN at 25337 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* gsm-CarrierRSSI at 25339 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasGSMNeighbourCellsinfo_specs_1 = {
	sizeof(struct LoggedMeasGSMNeighbourCellsinfo),
	offsetof(struct LoggedMeasGSMNeighbourCellsinfo, _asn_ctx),
	asn_MAP_LoggedMeasGSMNeighbourCellsinfo_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasGSMNeighbourCellsinfo = {
	"LoggedMeasGSMNeighbourCellsinfo",
	"LoggedMeasGSMNeighbourCellsinfo",
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
	asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1,
	sizeof(asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1)
		/sizeof(asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1[0]), /* 1 */
	asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1)
		/sizeof(asn_DEF_LoggedMeasGSMNeighbourCellsinfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LoggedMeasGSMNeighbourCellsinfo_1,
	4,	/* Elements count */
	&asn_SPC_LoggedMeasGSMNeighbourCellsinfo_specs_1	/* Additional specs */
};

