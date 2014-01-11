/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_AM_RLC_Mode_H_
#define	_DL_AM_RLC_Mode_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/ReceivingWindowSize.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-RLC-StatusInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-AM-RLC-Mode */
typedef struct DL_AM_RLC_Mode {
	BOOLEAN_t	 inSequenceDelivery;
	ReceivingWindowSize_t	 receivingWindowSize;
	DL_RLC_StatusInfo_t	 dl_RLC_StatusInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC_Mode;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_Mode_H_ */
