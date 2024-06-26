/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType3_v770ext_IEs_H_
#define	_SysInfoType3_v770ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/Q-QualMin-Offset.h"
#include "rf_phreaker/umts_rrc_asn_library/Q-RxlevMin-Offset.h"
#include "rf_phreaker/umts_rrc_asn_library/MBSFNOnlyService.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeferredMeasurementControlReadingSupport;

/* SysInfoType3-v770ext-IEs */
typedef struct SysInfoType3_v770ext_IEs {
	struct DeferredMeasurementControlReadingSupport	*deferredMeasurementControlReadingSupport	/* OPTIONAL */;
	Q_QualMin_Offset_t	*q_QualMin_Offset	/* OPTIONAL */;
	Q_RxlevMin_Offset_t	*q_RxlevMin_Offset	/* OPTIONAL */;
	MBSFNOnlyService_t	*mbsfnOnlyService	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType3_v770ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType3_v770ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/DeferredMeasurementControlReadingSupport.h"

#endif	/* _SysInfoType3_v770ext_IEs_H_ */
