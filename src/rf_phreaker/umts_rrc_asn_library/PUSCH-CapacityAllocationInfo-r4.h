/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PUSCH_CapacityAllocationInfo_r4_H_
#define	_PUSCH_CapacityAllocationInfo_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/AllocationPeriodInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/TFCS-IdentityPlain.h"
#include "rf_phreaker/umts_rrc_asn_library/PUSCH-Identity.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PUSCH-Info-r4.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR {
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR_NOTHING,	/* No components present */
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR_pusch_AllocationPending,
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR_pusch_AllocationAssignment
} PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR;
typedef enum PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR {
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR_NOTHING,	/* No components present */
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR_old_Configuration,
	PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR_new_Configuration
} PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR;

/* Forward declarations */
struct PUSCH_PowerControlInfo_r4;

/* PUSCH-CapacityAllocationInfo-r4 */
typedef struct PUSCH_CapacityAllocationInfo_r4 {
	struct PUSCH_CapacityAllocationInfo_r4__pusch_Allocation {
		PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_PR present;
		union PUSCH_CapacityAllocationInfo_r4__pusch_Allocation_u {
			NULL_t	 pusch_AllocationPending;
			struct PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment {
				AllocationPeriodInfo_t	 pusch_AllocationPeriodInfo;
				struct PUSCH_PowerControlInfo_r4	*pusch_PowerControlInfo	/* OPTIONAL */;
				struct PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration {
					PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_PR present;
					union PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration_u {
						struct PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration__old_Configuration {
							TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
							PUSCH_Identity_t	 pusch_Identity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} old_Configuration;
						struct PUSCH_CapacityAllocationInfo_r4__pusch_Allocation__pusch_AllocationAssignment__configuration__new_Configuration {
							PUSCH_Info_r4_t	 pusch_Info;
							PUSCH_Identity_t	*pusch_Identity	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} new_Configuration;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} configuration;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pusch_AllocationAssignment;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pusch_Allocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_CapacityAllocationInfo_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_CapacityAllocationInfo_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PUSCH-PowerControlInfo-r4.h"

#endif	/* _PUSCH_CapacityAllocationInfo_r4_H_ */
