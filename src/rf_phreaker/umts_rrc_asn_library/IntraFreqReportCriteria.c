/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#include <rf_phreaker/umts_rrc_asn_library/asn_internal.h>

#include "rf_phreaker/umts_rrc_asn_library/IntraFreqReportCriteria.h"

static asn_per_constraints_t asn_PER_type_IntraFreqReportCriteria_constr_1 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_IntraFreqReportCriteria_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportCriteria, choice.intraFreqReportingCriteria),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingCriteria,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqReportingCriteria"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportCriteria, choice.periodicalReportingCriteria),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PeriodicalWithReportingCellStatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"periodicalReportingCriteria"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqReportCriteria, choice.noReporting),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingCellStatusOpt,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noReporting"
		},
};
static asn_TYPE_tag2member_t asn_MAP_IntraFreqReportCriteria_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqReportingCriteria at 25110 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* periodicalReportingCriteria at 25111 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* noReporting at 25113 */
};
static asn_CHOICE_specifics_t asn_SPC_IntraFreqReportCriteria_specs_1 = {
	sizeof(struct IntraFreqReportCriteria),
	offsetof(struct IntraFreqReportCriteria, _asn_ctx),
	offsetof(struct IntraFreqReportCriteria, present),
	sizeof(((struct IntraFreqReportCriteria *)0)->present),
	asn_MAP_IntraFreqReportCriteria_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqReportCriteria = {
	"IntraFreqReportCriteria",
	"IntraFreqReportCriteria",
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
	&asn_PER_type_IntraFreqReportCriteria_constr_1,
	asn_MBR_IntraFreqReportCriteria_1,
	3,	/* Elements count */
	&asn_SPC_IntraFreqReportCriteria_specs_1	/* Additional specs */
};

