/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasuredResultsList_v770xet_H_
#define	_MeasuredResultsList_v770xet_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResults_v770ext;

/* MeasuredResultsList-v770xet */
typedef struct MeasuredResultsList_v770xet {
	A_SEQUENCE_OF(struct MeasuredResultsList_v770xet__Member {
		struct MeasuredResults_v770ext	*measuredResults	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResultsList_v770xet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResultsList_v770xet;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/MeasuredResults-v770ext.h"

#endif	/* _MeasuredResultsList_v770xet_H_ */
