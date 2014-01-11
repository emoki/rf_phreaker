/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ServingCellChangeParameters_H_
#define	_ServingCellChangeParameters_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ServingCellChangeMACreset.h"
#include "rf_phreaker/umts_rrc_asn_library/ServingCellChangeMsgType.h"
#include "rf_phreaker/umts_rrc_asn_library/ServingCellChangeTrId.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ServingCellChangeParameters */
typedef struct ServingCellChangeParameters {
	ServingCellChangeMACreset_t	 servingCellChangeMACreset;
	ServingCellChangeMsgType_t	 servingCellChangeMsgType;
	ServingCellChangeTrId_t	 servingCellChangeTrId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServingCellChangeParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServingCellChangeParameters;

#ifdef __cplusplus
}
#endif

#endif	/* _ServingCellChangeParameters_H_ */
