/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_InternalMeasuredResults_LCR_r4_H_
#define	_UE_InternalMeasuredResults_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_TransmittedPowerTDD_List;
struct T_ADVinfo;

/* UE-InternalMeasuredResults-LCR-r4 */
typedef struct UE_InternalMeasuredResults_LCR_r4 {
	struct UE_TransmittedPowerTDD_List	*ue_TransmittedPowerTDD_List	/* OPTIONAL */;
	struct T_ADVinfo	*t_ADVinfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_InternalMeasuredResults_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_InternalMeasuredResults_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UE-TransmittedPowerTDD-List.h"
#include "rf_phreaker/umts_rrc_asn_library/T-ADVinfo.h"

#endif	/* _UE_InternalMeasuredResults_LCR_r4_H_ */
