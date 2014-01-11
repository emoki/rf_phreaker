/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MAC_ehs_AddReconfReordQ_H_
#define	_MAC_ehs_AddReconfReordQ_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MAC-ehs-QueueId.h"
#include "rf_phreaker/umts_rrc_asn_library/T1-ReleaseTimer.h"
#include "rf_phreaker/umts_rrc_asn_library/Treset-ResetTimer.h"
#include "rf_phreaker/umts_rrc_asn_library/MAC-hs-WindowSize.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-ehs-AddReconfReordQ */
typedef struct MAC_ehs_AddReconfReordQ {
	MAC_ehs_QueueId_t	 mac_ehs_QueueId;
	T1_ReleaseTimer_t	 reorderingReleaseTimer;
	Treset_ResetTimer_t	*reorderingResetTimer	/* OPTIONAL */;
	MAC_hs_WindowSize_t	 mac_ehsWindowSize;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ehs_AddReconfReordQ_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ehs_AddReconfReordQ;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ehs_AddReconfReordQ_H_ */
