/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellUpdate_r3_add_ext_IEs_H_
#define	_CellUpdate_r3_add_ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellUpdate-v7e0ext-IEs.h"
#include "rf_phreaker/umts_rrc_asn_library/CellUpdate-v7g0ext-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellUpdate-r3-add-ext-IEs */
typedef struct CellUpdate_r3_add_ext_IEs {
	CellUpdate_v7e0ext_IEs_t	 cellUpdate_v7e0ext;
	struct CellUpdate_r3_add_ext_IEs__v7g0NonCriticalExtensions {
		CellUpdate_v7g0ext_IEs_t	 cellUpdate_v7g0ext;
		struct CellUpdate_r3_add_ext_IEs__v7g0NonCriticalExtensions__nonCriticalExtensions {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v7g0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdate_r3_add_ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdate_r3_add_ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _CellUpdate_r3_add_ext_IEs_H_ */
