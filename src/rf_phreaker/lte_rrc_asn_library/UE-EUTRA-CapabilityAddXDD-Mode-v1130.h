/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_
#define	_UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhyLayerParameters_v1130;
struct MeasParameters_v1130;
struct Other_Parameters_r11;

/* UE-EUTRA-CapabilityAddXDD-Mode-v1130 */
typedef struct UE_EUTRA_CapabilityAddXDD_Mode_v1130 {
	struct PhyLayerParameters_v1130	*phyLayerParameters_v1130	/* OPTIONAL */;
	struct MeasParameters_v1130	*measParameters_v1130	/* OPTIONAL */;
	struct Other_Parameters_r11	*otherParameters_r11	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_CapabilityAddXDD_Mode_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_CapabilityAddXDD_Mode_v1130;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PhyLayerParameters-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasParameters-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/Other-Parameters-r11.h"

#endif	/* _UE_EUTRA_CapabilityAddXDD_Mode_v1130_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
