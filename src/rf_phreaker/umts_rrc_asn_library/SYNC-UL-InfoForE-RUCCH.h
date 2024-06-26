/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SYNC_UL_InfoForE_RUCCH_H_
#define	_SYNC_UL_InfoForE_RUCCH_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include "rf_phreaker/umts_rrc_asn_library/Sync-UL-Codes-Bitmap.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions {
	SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions_tr1	= 0,
	SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions_tr2	= 1,
	SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions_tr4	= 2,
	SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions_tr8	= 3
} e_SYNC_UL_InfoForE_RUCCH__max_SYNC_UL_Transmissions;

/* SYNC-UL-InfoForE-RUCCH */
typedef struct SYNC_UL_InfoForE_RUCCH {
	long	*prxUpPCHdes	/* OPTIONAL */;
	long	*powerRampStep	/* OPTIONAL */;
	long	*max_SYNC_UL_Transmissions	/* OPTIONAL */;
	Sync_UL_Codes_Bitmap_t	 e_RUCCH_Sync_UL_Codes_Bitmap;
	long	 mmax;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SYNC_UL_InfoForE_RUCCH_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_max_SYNC_UL_Transmissions_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SYNC_UL_InfoForE_RUCCH;

#ifdef __cplusplus
}
#endif

#endif	/* _SYNC_UL_InfoForE_RUCCH_H_ */
