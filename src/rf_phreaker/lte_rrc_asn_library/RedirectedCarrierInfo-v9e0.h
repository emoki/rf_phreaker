/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RedirectedCarrierInfo_v9e0_H_
#define	_RedirectedCarrierInfo_v9e0_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/ARFCN-ValueEUTRA-v9e0.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RedirectedCarrierInfo-v9e0 */
typedef struct RedirectedCarrierInfo_v9e0 {
	ARFCN_ValueEUTRA_v9e0_t	 eutra_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedirectedCarrierInfo_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _RedirectedCarrierInfo_v9e0_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
