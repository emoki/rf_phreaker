/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_FirstSegment_H_
#define	_FirstSegment_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SIB-Type.h"
#include "rf_phreaker/umts_rrc_asn_library/SegCount.h"
#include "rf_phreaker/umts_rrc_asn_library/SIB-Data-fixed.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FirstSegment */
typedef struct FirstSegment {
	SIB_Type_t	 sib_Type;
	SegCount_t	 seg_Count;
	SIB_Data_fixed_t	 sib_Data_fixed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FirstSegment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FirstSegment;

#ifdef __cplusplus
}
#endif

#endif	/* _FirstSegment_H_ */
