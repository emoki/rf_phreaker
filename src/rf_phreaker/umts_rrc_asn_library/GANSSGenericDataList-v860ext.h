/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_GANSSGenericDataList_v860ext_H_
#define	_GANSSGenericDataList_v860ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSGenericData_v860ext;

/* GANSSGenericDataList-v860ext */
typedef struct GANSSGenericDataList_v860ext {
	A_SEQUENCE_OF(struct GANSSGenericData_v860ext) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSGenericDataList_v860ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSGenericDataList_v860ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/GANSSGenericData-v860ext.h"

#endif	/* _GANSSGenericDataList_v860ext_H_ */
