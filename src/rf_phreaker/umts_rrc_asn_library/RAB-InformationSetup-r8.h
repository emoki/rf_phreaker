/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RAB_InformationSetup_r8_H_
#define	_RAB_InformationSetup_r8_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RAB-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-InformationSetupList-r8.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CS_HSPA_Information;
struct RAB_InfoReplace;

/* RAB-InformationSetup-r8 */
typedef struct RAB_InformationSetup_r8 {
	RAB_Info_r7_t	 rab_Info;
	struct CS_HSPA_Information	*cs_HSPA_Information	/* OPTIONAL */;
	struct RAB_InfoReplace	*rab_InfoReplace	/* OPTIONAL */;
	RB_InformationSetupList_r8_t	 rb_InformationSetupList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationSetup_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationSetup_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CS-HSPA-Information.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-InfoReplace.h"

#endif	/* _RAB_InformationSetup_r8_H_ */
