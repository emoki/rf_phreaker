/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType6_H_
#define	_SystemInformationBlockType6_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/T-Reselection.h"
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListUTRA_FDD;
struct CarrierFreqListUTRA_TDD;
struct SpeedStateScaleFactors;

/* SystemInformationBlockType6 */
typedef struct SystemInformationBlockType6 {
	struct CarrierFreqListUTRA_FDD	*carrierFreqListUTRA_FDD	/* OPTIONAL */;
	struct CarrierFreqListUTRA_TDD	*carrierFreqListUTRA_TDD	/* OPTIONAL */;
	T_Reselection_t	 t_ReselectionUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionUTRA_SF	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CarrierFreqListUTRA-FDD.h"
#include "rf_phreaker/lte_rrc_asn_library/CarrierFreqListUTRA-TDD.h"
#include "rf_phreaker/lte_rrc_asn_library/SpeedStateScaleFactors.h"

#endif	/* _SystemInformationBlockType6_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
