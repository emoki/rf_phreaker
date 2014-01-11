/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_BCCH_ModificationInfo_H_
#define	_BCCH_ModificationInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MIB-ValueTag.h"
#include "rf_phreaker/umts_rrc_asn_library/BCCH-ModificationTime.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BCCH-ModificationInfo */
typedef struct BCCH_ModificationInfo {
	MIB_ValueTag_t	 mib_ValueTag;
	BCCH_ModificationTime_t	*bcch_ModificationTime	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_ModificationInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_ModificationInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_ModificationInfo_H_ */
