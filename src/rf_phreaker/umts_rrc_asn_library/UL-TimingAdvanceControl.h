/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_TimingAdvanceControl_H_
#define	_UL_TimingAdvanceControl_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/UL-TimingAdvance.h"
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_TimingAdvanceControl_PR {
	UL_TimingAdvanceControl_PR_NOTHING,	/* No components present */
	UL_TimingAdvanceControl_PR_disabled,
	UL_TimingAdvanceControl_PR_enabled
} UL_TimingAdvanceControl_PR;

/* UL-TimingAdvanceControl */
typedef struct UL_TimingAdvanceControl {
	UL_TimingAdvanceControl_PR present;
	union UL_TimingAdvanceControl_u {
		NULL_t	 disabled;
		struct UL_TimingAdvanceControl__enabled {
			UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
			ActivationTime_t	*activationTime	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} enabled;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_TimingAdvanceControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_TimingAdvanceControl;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_TimingAdvanceControl_H_ */
