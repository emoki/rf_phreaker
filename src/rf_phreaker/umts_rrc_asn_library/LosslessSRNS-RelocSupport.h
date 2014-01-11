/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_LosslessSRNS_RelocSupport_H_
#define	_LosslessSRNS_RelocSupport_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MaxPDCP-SN-WindowSize.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LosslessSRNS_RelocSupport_PR {
	LosslessSRNS_RelocSupport_PR_NOTHING,	/* No components present */
	LosslessSRNS_RelocSupport_PR_supported,
	LosslessSRNS_RelocSupport_PR_notSupported
} LosslessSRNS_RelocSupport_PR;

/* LosslessSRNS-RelocSupport */
typedef struct LosslessSRNS_RelocSupport {
	LosslessSRNS_RelocSupport_PR present;
	union LosslessSRNS_RelocSupport_u {
		MaxPDCP_SN_WindowSize_t	 supported;
		NULL_t	 notSupported;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LosslessSRNS_RelocSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LosslessSRNS_RelocSupport;

#ifdef __cplusplus
}
#endif

#endif	/* _LosslessSRNS_RelocSupport_H_ */
