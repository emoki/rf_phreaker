/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_r9_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters;
struct IRAT_ParametersGERAN;
struct IRAT_ParametersUTRA_v920;
struct IRAT_ParametersCDMA2000_1XRTT_v920;
struct NeighCellSI_AcquisitionParameters_r9;

/* UE-EUTRA-CapabilityAddXDD-Mode-r9 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_r9 {
	struct PhyLayerParameters	*phyLayerParameters_r9	/* OPTIONAL */;
	BIT_STRING_t	*featureGroupIndicators_r9	/* OPTIONAL */;
	BIT_STRING_t	*featureGroupIndRel9Add_r9	/* OPTIONAL */;
	struct IRAT_ParametersGERAN	*interRAT_ParametersGERAN_r9	/* OPTIONAL */;
	struct IRAT_ParametersUTRA_v920	*interRAT_ParametersUTRA_r9	/* OPTIONAL */;
	struct IRAT_ParametersCDMA2000_1XRTT_v920	*interRAT_ParametersCDMA2000_r9	/* OPTIONAL */;
	struct NeighCellSI_AcquisitionParameters_r9	*neighCellSI_AcquisitionParameters_r9	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PhyLayerParameters.h"
#include "rf_phreaker/lte_rrc_asn_library/IRAT-ParametersGERAN.h"
#include "rf_phreaker/lte_rrc_asn_library/IRAT-ParametersUTRA-v920.h"
#include "rf_phreaker/lte_rrc_asn_library/IRAT-ParametersCDMA2000-1XRTT-v920.h"
#include "rf_phreaker/lte_rrc_asn_library/NeighCellSI-AcquisitionParameters-r9.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_r9_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
