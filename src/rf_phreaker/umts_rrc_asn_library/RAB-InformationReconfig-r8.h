/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RAB_InformationReconfig_r8_H_
#define	_RAB_InformationReconfig_r8_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RAB-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/NAS-Synchronisation-Indicator.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CS_HSPA_Information;

/* RAB-InformationReconfig-r8 */
typedef struct RAB_InformationReconfig_r8 {
	RAB_Identity_t	 rab_Identity;
	CN_DomainIdentity_t	 cn_DomainIdentity;
	NAS_Synchronisation_Indicator_t	 nas_Synchronisation_Indicator;
	struct CS_HSPA_Information	*cs_HSPA_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationReconfig_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationReconfig_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CS-HSPA-Information.h"

#endif	/* _RAB_InformationReconfig_r8_H_ */
