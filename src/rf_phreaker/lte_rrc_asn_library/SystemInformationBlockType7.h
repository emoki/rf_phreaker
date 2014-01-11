/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType7_H_
#define	_SystemInformationBlockType7_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/T-Reselection.h"
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SpeedStateScaleFactors;
struct CarrierFreqsInfoListGERAN;

/* SystemInformationBlockType7 */
typedef struct SystemInformationBlockType7 {
	T_Reselection_t	 t_ReselectionGERAN;
	struct SpeedStateScaleFactors	*t_ReselectionGERAN_SF	/* OPTIONAL */;
	struct CarrierFreqsInfoListGERAN	*carrierFreqsInfoList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType7;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/SpeedStateScaleFactors.h"
#include "rf_phreaker/lte_rrc_asn_library/CarrierFreqsInfoListGERAN.h"

#endif	/* _SystemInformationBlockType7_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
