/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_TrCH_TypeId2_r7_H_
#define	_DL_TrCH_TypeId2_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TransportChannelIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/MAC-d-FlowIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/MAC-ehs-QueueId.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TrCH_TypeId2_r7_PR {
	DL_TrCH_TypeId2_r7_PR_NOTHING,	/* No components present */
	DL_TrCH_TypeId2_r7_PR_dch,
	DL_TrCH_TypeId2_r7_PR_dsch,
	DL_TrCH_TypeId2_r7_PR_hsdsch
} DL_TrCH_TypeId2_r7_PR;
typedef enum DL_TrCH_TypeId2_r7__hsdsch_PR {
	DL_TrCH_TypeId2_r7__hsdsch_PR_NOTHING,	/* No components present */
	DL_TrCH_TypeId2_r7__hsdsch_PR_mac_hs,
	DL_TrCH_TypeId2_r7__hsdsch_PR_mac_ehs
} DL_TrCH_TypeId2_r7__hsdsch_PR;

/* DL-TrCH-TypeId2-r7 */
typedef struct DL_TrCH_TypeId2_r7 {
	DL_TrCH_TypeId2_r7_PR present;
	union DL_TrCH_TypeId2_r7_u {
		TransportChannelIdentity_t	 dch;
		TransportChannelIdentity_t	 dsch;
		struct DL_TrCH_TypeId2_r7__hsdsch {
			DL_TrCH_TypeId2_r7__hsdsch_PR present;
			union DL_TrCH_TypeId2_r7__hsdsch_u {
				MAC_d_FlowIdentity_t	 mac_hs;
				MAC_ehs_QueueId_t	 mac_ehs;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} hsdsch;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TrCH_TypeId2_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TrCH_TypeId2_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TrCH_TypeId2_r7_H_ */
