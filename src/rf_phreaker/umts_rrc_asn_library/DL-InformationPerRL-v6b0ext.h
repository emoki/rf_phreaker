/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_InformationPerRL_v6b0ext_H_
#define	_DL_InformationPerRL_v6b0ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/STTDIndication.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-InformationPerRL-v6b0ext */
typedef struct DL_InformationPerRL_v6b0ext {
	STTDIndication_t	*sttdIndication	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerRL_v6b0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL_v6b0ext;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_InformationPerRL_v6b0ext_H_ */
