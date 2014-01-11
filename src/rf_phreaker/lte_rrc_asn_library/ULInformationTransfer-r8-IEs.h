/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ULInformationTransfer_r8_IEs_H_
#define	_ULInformationTransfer_r8_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/DedicatedInfoNAS.h"
#include "rf_phreaker/lte_rrc_asn_library/DedicatedInfoCDMA2000.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULInformationTransfer_r8_IEs__dedicatedInfoType_PR {
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_NOTHING,	/* No components present */
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoNAS,
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_1XRTT,
	ULInformationTransfer_r8_IEs__dedicatedInfoType_PR_dedicatedInfoCDMA2000_HRPD
} ULInformationTransfer_r8_IEs__dedicatedInfoType_PR;

/* Forward declarations */
struct ULInformationTransfer_v8a0_IEs;

/* ULInformationTransfer-r8-IEs */
typedef struct ULInformationTransfer_r8_IEs {
	struct ULInformationTransfer_r8_IEs__dedicatedInfoType {
		ULInformationTransfer_r8_IEs__dedicatedInfoType_PR present;
		union ULInformationTransfer_r8_IEs__dedicatedInfoType_u {
			DedicatedInfoNAS_t	 dedicatedInfoNAS;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_1XRTT;
			DedicatedInfoCDMA2000_t	 dedicatedInfoCDMA2000_HRPD;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} dedicatedInfoType;
	struct ULInformationTransfer_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransfer_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/ULInformationTransfer-v8a0-IEs.h"

#endif	/* _ULInformationTransfer_r8_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
