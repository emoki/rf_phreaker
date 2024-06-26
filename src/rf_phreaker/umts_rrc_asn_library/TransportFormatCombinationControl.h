/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TransportFormatCombinationControl_H_
#define	_TransportFormatCombinationControl_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/umts_rrc_asn_library/TFC-Subset.h"
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/TFC-ControlDuration.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include "rf_phreaker/umts_rrc_asn_library/TransportFormatCombinationControl-v820ext-IEs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransportFormatCombinationControl__modeSpecificInfo_PR {
	TransportFormatCombinationControl__modeSpecificInfo_PR_NOTHING,	/* No components present */
	TransportFormatCombinationControl__modeSpecificInfo_PR_fdd,
	TransportFormatCombinationControl__modeSpecificInfo_PR_tdd
} TransportFormatCombinationControl__modeSpecificInfo_PR;

/* Forward declarations */
struct TFCS_Identity;

/* TransportFormatCombinationControl */
typedef struct TransportFormatCombinationControl {
	RRC_TransactionIdentifier_t	*rrc_TransactionIdentifier	/* OPTIONAL */;
	struct TransportFormatCombinationControl__modeSpecificInfo {
		TransportFormatCombinationControl__modeSpecificInfo_PR present;
		union TransportFormatCombinationControl__modeSpecificInfo_u {
			NULL_t	 fdd;
			struct TransportFormatCombinationControl__modeSpecificInfo__tdd {
				struct TFCS_Identity	*tfcs_ID	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	TFC_Subset_t	 dpch_TFCS_InUplink;
	ActivationTime_t	*activationTimeForTFCSubset	/* OPTIONAL */;
	TFC_ControlDuration_t	*tfc_ControlDuration	/* OPTIONAL */;
	struct TransportFormatCombinationControl__laterNonCriticalExtensions {
		BIT_STRING_t	*transportFormatCombinationControl_r3_add_ext	/* OPTIONAL */;
		struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions {
			TransportFormatCombinationControl_v820ext_IEs_t	 transportformatcombinationcontrol_v820ext;
			struct TransportFormatCombinationControl__laterNonCriticalExtensions__v820NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v820NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportFormatCombinationControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportFormatCombinationControl;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/TFCS-Identity.h"

#endif	/* _TransportFormatCombinationControl_H_ */
