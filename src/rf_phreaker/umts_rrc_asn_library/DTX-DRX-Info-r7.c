/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-Info-r7.h"

static asn_TYPE_member_t asn_MBR_DTX_DRX_Info_r7_1[] = {
	{ ATF_POINTER, 2, offsetof(struct DTX_DRX_Info_r7, dtx_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DTX_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dtx-Info"
		},
	{ ATF_POINTER, 1, offsetof(struct DTX_DRX_Info_r7, drx_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRX_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drx-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DTX_DRX_Info_r7, uplink_DPCCHSlotFormatInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uplink_DPCCH_Slot_Format_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uplink-DPCCHSlotFormatInformation"
		},
};
static int asn_MAP_DTX_DRX_Info_r7_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_DTX_DRX_Info_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DTX_DRX_Info_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dtx-Info at 17685 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-Info at 17686 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* uplink-DPCCHSlotFormatInformation at 17688 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DTX_DRX_Info_r7_specs_1 = {
	sizeof(struct DTX_DRX_Info_r7),
	offsetof(struct DTX_DRX_Info_r7, _asn_ctx),
	asn_MAP_DTX_DRX_Info_r7_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DTX_DRX_Info_r7_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DTX_DRX_Info_r7 = {
	"DTX-DRX-Info-r7",
	"DTX-DRX-Info-r7",
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
	asn_DEF_DTX_DRX_Info_r7_tags_1,
	sizeof(asn_DEF_DTX_DRX_Info_r7_tags_1)
		/sizeof(asn_DEF_DTX_DRX_Info_r7_tags_1[0]), /* 1 */
	asn_DEF_DTX_DRX_Info_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_DTX_DRX_Info_r7_tags_1)
		/sizeof(asn_DEF_DTX_DRX_Info_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DTX_DRX_Info_r7_1,
	3,	/* Elements count */
	&asn_SPC_DTX_DRX_Info_r7_specs_1	/* Additional specs */
};

