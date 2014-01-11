/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_Handover_H_
#define	_Handover_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Handover__targetRAT_Type {
	Handover__targetRAT_Type_utra	= 0,
	Handover__targetRAT_Type_geran	= 1,
	Handover__targetRAT_Type_cdma2000_1XRTT	= 2,
	Handover__targetRAT_Type_cdma2000_HRPD	= 3,
	Handover__targetRAT_Type_spare4	= 4,
	Handover__targetRAT_Type_spare3	= 5,
	Handover__targetRAT_Type_spare2	= 6,
	Handover__targetRAT_Type_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_Handover__targetRAT_Type;

/* Forward declarations */
struct SI_OrPSI_GERAN;

/* Handover */
typedef struct Handover {
	long	 targetRAT_Type;
	OCTET_STRING_t	 targetRAT_MessageContainer;
	OCTET_STRING_t	*nas_SecurityParamFromEUTRA	/* OPTIONAL */;
	struct SI_OrPSI_GERAN	*systemInformation	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Handover_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_targetRAT_Type_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Handover;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/SI-OrPSI-GERAN.h"

#endif	/* _Handover_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
