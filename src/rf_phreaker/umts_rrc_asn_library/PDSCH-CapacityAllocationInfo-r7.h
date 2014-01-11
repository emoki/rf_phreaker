/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PDSCH_CapacityAllocationInfo_r7_H_
#define	_PDSCH_CapacityAllocationInfo_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/AllocationPeriodInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/TFCS-IdentityPlain.h"
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-Identity.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-Info-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_CapacityAllocationInfo_r7__configuration_PR {
	PDSCH_CapacityAllocationInfo_r7__configuration_PR_NOTHING,	/* No components present */
	PDSCH_CapacityAllocationInfo_r7__configuration_PR_old_Configuration,
	PDSCH_CapacityAllocationInfo_r7__configuration_PR_new_Configuration
} PDSCH_CapacityAllocationInfo_r7__configuration_PR;

/* Forward declarations */
struct PDSCH_PowerControlInfo;

/* PDSCH-CapacityAllocationInfo-r7 */
typedef struct PDSCH_CapacityAllocationInfo_r7 {
	AllocationPeriodInfo_t	 pdsch_AllocationPeriodInfo;
	struct PDSCH_CapacityAllocationInfo_r7__configuration {
		PDSCH_CapacityAllocationInfo_r7__configuration_PR present;
		union PDSCH_CapacityAllocationInfo_r7__configuration_u {
			struct PDSCH_CapacityAllocationInfo_r7__configuration__old_Configuration {
				TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
				PDSCH_Identity_t	 pdsch_Identity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} old_Configuration;
			struct PDSCH_CapacityAllocationInfo_r7__configuration__new_Configuration {
				PDSCH_Info_r7_t	 pdsch_Info;
				PDSCH_Identity_t	*pdsch_Identity	/* OPTIONAL */;
				struct PDSCH_PowerControlInfo	*pdsch_PowerControlInfo	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} new_Configuration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} configuration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_CapacityAllocationInfo_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_CapacityAllocationInfo_r7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-PowerControlInfo.h"

#endif	/* _PDSCH_CapacityAllocationInfo_r7_H_ */
