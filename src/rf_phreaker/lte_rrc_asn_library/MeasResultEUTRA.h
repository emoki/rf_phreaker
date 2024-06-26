/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultEUTRA_H_
#define	_MeasResultEUTRA_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellId.h"
#include "rf_phreaker/lte_rrc_asn_library/CellGlobalIdEUTRA.h"
#include "rf_phreaker/lte_rrc_asn_library/TrackingAreaCode.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/lte_rrc_asn_library/RSRP-Range.h"
#include "rf_phreaker/lte_rrc_asn_library/RSRQ-Range.h"
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12 {
	MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12_true	= 0
} e_MeasResultEUTRA__measResult__primaryPLMN_Suitable_r12;

/* Forward declarations */
struct PLMN_IdentityList2;
struct AdditionalSI_Info_r9;

/* MeasResultEUTRA */
typedef struct MeasResultEUTRA {
	PhysCellId_t	 physCellId;
	struct MeasResultEUTRA__cgi_Info {
		CellGlobalIdEUTRA_t	 cellGlobalId;
		TrackingAreaCode_t	 trackingAreaCode;
		struct PLMN_IdentityList2	*plmn_IdentityList	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct MeasResultEUTRA__measResult {
		RSRP_Range_t	*rsrpResult	/* OPTIONAL */;
		RSRQ_Range_t	*rsrqResult	/* OPTIONAL */;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct AdditionalSI_Info_r9	*additionalSI_Info_r9	/* OPTIONAL */;
		long	*primaryPLMN_Suitable_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_primaryPLMN_Suitable_r12_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultEUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PLMN-IdentityList2.h"
#include "rf_phreaker/lte_rrc_asn_library/AdditionalSI-Info-r9.h"

#endif	/* _MeasResultEUTRA_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
