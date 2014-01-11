/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/ActiveSetUpdate-v590ext-IEs.h"

static asn_TYPE_member_t asn_MBR_ActiveSetUpdate_v590ext_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ActiveSetUpdate_v590ext_IEs, dpc_Mode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPC_Mode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpc-Mode"
		},
	{ ATF_POINTER, 1, offsetof(struct ActiveSetUpdate_v590ext_IEs, dl_TPC_PowerOffsetPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TPC_PowerOffsetPerRL_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-TPC-PowerOffsetPerRL-List"
		},
};
static int asn_MAP_ActiveSetUpdate_v590ext_IEs_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ActiveSetUpdate_v590ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dpc-Mode at 1036 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-TPC-PowerOffsetPerRL-List at 1037 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ActiveSetUpdate_v590ext_IEs_specs_1 = {
	sizeof(struct ActiveSetUpdate_v590ext_IEs),
	offsetof(struct ActiveSetUpdate_v590ext_IEs, _asn_ctx),
	asn_MAP_ActiveSetUpdate_v590ext_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ActiveSetUpdate_v590ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_v590ext_IEs = {
	"ActiveSetUpdate-v590ext-IEs",
	"ActiveSetUpdate-v590ext-IEs",
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
	asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1,
	sizeof(asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1)
		/sizeof(asn_DEF_ActiveSetUpdate_v590ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ActiveSetUpdate_v590ext_IEs_1,
	2,	/* Elements count */
	&asn_SPC_ActiveSetUpdate_v590ext_IEs_specs_1	/* Additional specs */
};

