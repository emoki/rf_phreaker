/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_MulticarrierEDCH_NewOperationInfo_TDD128_H_
#define	_UL_MulticarrierEDCH_NewOperationInfo_TDD128_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_MulticarrierEDCH_NewOperationInfo_TDD128__tsn_Length {
	UL_MulticarrierEDCH_NewOperationInfo_TDD128__tsn_Length_tsn_14bits	= 0
} e_UL_MulticarrierEDCH_NewOperationInfo_TDD128__tsn_Length;

/* Forward declarations */
struct UL_MulticarrierEDCH_Infolist_TDD128;
struct UL_MulticarrierEDCH_Deletelist_TDD128;

/* UL-MulticarrierEDCH-NewOperationInfo-TDD128 */
typedef struct UL_MulticarrierEDCH_NewOperationInfo_TDD128 {
	long	*tsn_Length	/* OPTIONAL */;
	struct UL_MulticarrierEDCH_Infolist_TDD128	*ul_MulticarrierEDCH_Infolist	/* OPTIONAL */;
	struct UL_MulticarrierEDCH_Deletelist_TDD128	*ul_MulticarrierEDCH_Deletelist	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_MulticarrierEDCH_NewOperationInfo_TDD128_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tsn_Length_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_MulticarrierEDCH_NewOperationInfo_TDD128;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UL-MulticarrierEDCH-Infolist-TDD128.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-MulticarrierEDCH-Deletelist-TDD128.h"

#endif	/* _UL_MulticarrierEDCH_NewOperationInfo_TDD128_H_ */
