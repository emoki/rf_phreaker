/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/UE-Positioning-CipherParameters.h"

static int
memb_cipheringKeyFlag_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 1)) {
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
memb_cipheringSerialNumber_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cipheringKeyFlag_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cipheringSerialNumber_constr_3 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_UE_Positioning_CipherParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_CipherParameters, cipheringKeyFlag),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_cipheringKeyFlag_constraint_1,
		&asn_PER_memb_cipheringKeyFlag_constr_2,
		0,
		"cipheringKeyFlag"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_CipherParameters, cipheringSerialNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cipheringSerialNumber_constraint_1,
		&asn_PER_memb_cipheringSerialNumber_constr_3,
		0,
		"cipheringSerialNumber"
		},
};
static ber_tlv_tag_t asn_DEF_UE_Positioning_CipherParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_CipherParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cipheringKeyFlag at 27360 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cipheringSerialNumber at 27361 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_CipherParameters_specs_1 = {
	sizeof(struct UE_Positioning_CipherParameters),
	offsetof(struct UE_Positioning_CipherParameters, _asn_ctx),
	asn_MAP_UE_Positioning_CipherParameters_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_CipherParameters = {
	"UE-Positioning-CipherParameters",
	"UE-Positioning-CipherParameters",
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
	asn_DEF_UE_Positioning_CipherParameters_tags_1,
	sizeof(asn_DEF_UE_Positioning_CipherParameters_tags_1)
		/sizeof(asn_DEF_UE_Positioning_CipherParameters_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_CipherParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_CipherParameters_tags_1)
		/sizeof(asn_DEF_UE_Positioning_CipherParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_CipherParameters_1,
	2,	/* Elements count */
	&asn_SPC_UE_Positioning_CipherParameters_specs_1	/* Additional specs */
};

