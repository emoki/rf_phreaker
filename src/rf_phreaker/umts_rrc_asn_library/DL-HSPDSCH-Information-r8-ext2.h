/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_HSPDSCH_Information_r8_ext2_H_
#define	_DL_HSPDSCH_Information_r8_ext2_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HS_SCCH_Info_r8_ext;

/* DL-HSPDSCH-Information-r8-ext2 */
typedef struct DL_HSPDSCH_Information_r8_ext2 {
	struct HS_SCCH_Info_r8_ext	*hs_scch_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_HSPDSCH_Information_r8_ext2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_Information_r8_ext2;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-Info-r8-ext.h"

#endif	/* _DL_HSPDSCH_Information_r8_ext2_H_ */
