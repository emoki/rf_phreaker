/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UE_Positioning_GANSS_AddUTCModels_H_
#define	_UE_Positioning_GANSS_AddUTCModels_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UTCmodelSet1;
struct UTCmodelSet2;
struct UTCmodelSet3;

/* UE-Positioning-GANSS-AddUTCModels */
typedef struct UE_Positioning_GANSS_AddUTCModels {
	struct UTCmodelSet1	*utcModel1	/* OPTIONAL */;
	struct UTCmodelSet2	*utcModel2	/* OPTIONAL */;
	struct UTCmodelSet3	*utcModel3	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AddUTCModels_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AddUTCModels;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UTCmodelSet1.h"
#include "rf_phreaker/umts_rrc_asn_library/UTCmodelSet2.h"
#include "rf_phreaker/umts_rrc_asn_library/UTCmodelSet3.h"

#endif	/* _UE_Positioning_GANSS_AddUTCModels_H_ */
