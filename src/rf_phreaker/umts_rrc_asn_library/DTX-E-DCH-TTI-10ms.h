/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DTX_E_DCH_TTI_10ms_H_
#define	_DTX_E_DCH_TTI_10ms_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/UE-DTX-Cycle1-10ms.h"
#include "rf_phreaker/umts_rrc_asn_library/UE-DTX-Cycle2-10ms.h"
#include "rf_phreaker/umts_rrc_asn_library/MAC-DTX-Cycle-10ms.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DTX-E-DCH-TTI-10ms */
typedef struct DTX_E_DCH_TTI_10ms {
	UE_DTX_Cycle1_10ms_t	 ue_dtx_Cycle1_10ms;
	UE_DTX_Cycle2_10ms_t	 ue_dtx_Cycle2_10ms;
	MAC_DTX_Cycle_10ms_t	 mac_dtx_Cycle_10ms;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DTX_E_DCH_TTI_10ms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DTX_E_DCH_TTI_10ms;

#ifdef __cplusplus
}
#endif

#endif	/* _DTX_E_DCH_TTI_10ms_H_ */
