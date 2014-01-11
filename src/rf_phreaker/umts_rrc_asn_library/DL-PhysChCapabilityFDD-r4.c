/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/DL-PhysChCapabilityFDD-r4.h"

static int
memb_maxNoDPCH_PDSCH_Codes_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_maxNoDPCH_PDSCH_Codes_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DL_PhysChCapabilityFDD_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD_r4, maxNoDPCH_PDSCH_Codes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_maxNoDPCH_PDSCH_Codes_constraint_1,
		&asn_PER_memb_maxNoDPCH_PDSCH_Codes_constr_2,
		0,
		"maxNoDPCH-PDSCH-Codes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD_r4, maxNoPhysChBitsReceived),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxNoPhysChBitsReceived,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxNoPhysChBitsReceived"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD_r4, supportForSF_512),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForSF-512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD_r4, dummy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_PhysChCapabilityFDD_r4, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SimultaneousSCCPCH_DPCH_Reception,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_PhysChCapabilityFDD_r4, dummy3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SupportOfDedicatedPilotsForChEstimation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy3"
		},
};
static int asn_MAP_DL_PhysChCapabilityFDD_r4_oms_1[] = { 5 };
static ber_tlv_tag_t asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_PhysChCapabilityFDD_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNoDPCH-PDSCH-Codes at 32719 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNoPhysChBitsReceived at 32720 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportForSF-512 at 32721 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dummy at 32724 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dummy2 at 32725 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dummy3 at 32726 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_PhysChCapabilityFDD_r4_specs_1 = {
	sizeof(struct DL_PhysChCapabilityFDD_r4),
	offsetof(struct DL_PhysChCapabilityFDD_r4, _asn_ctx),
	asn_MAP_DL_PhysChCapabilityFDD_r4_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_DL_PhysChCapabilityFDD_r4_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityFDD_r4 = {
	"DL-PhysChCapabilityFDD-r4",
	"DL-PhysChCapabilityFDD-r4",
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
	asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1,
	sizeof(asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1[0]), /* 1 */
	asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1)
		/sizeof(asn_DEF_DL_PhysChCapabilityFDD_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_PhysChCapabilityFDD_r4_1,
	6,	/* Elements count */
	&asn_SPC_DL_PhysChCapabilityFDD_r4_specs_1	/* Additional specs */
};

