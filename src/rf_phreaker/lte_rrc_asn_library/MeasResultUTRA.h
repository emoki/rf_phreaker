/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_MeasResultUTRA_H_
#define	_MeasResultUTRA_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellIdUTRA-FDD.h"
#include "rf_phreaker/lte_rrc_asn_library/PhysCellIdUTRA-TDD.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>
#include "rf_phreaker/lte_rrc_asn_library/CellGlobalIdUTRA.h"
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultUTRA__physCellId_PR {
	MeasResultUTRA__physCellId_PR_NOTHING,	/* No components present */
	MeasResultUTRA__physCellId_PR_fdd,
	MeasResultUTRA__physCellId_PR_tdd
} MeasResultUTRA__physCellId_PR;
typedef enum MeasResultUTRA__measResult__primaryPLMN_Suitable_r12 {
	MeasResultUTRA__measResult__primaryPLMN_Suitable_r12_true	= 0
} e_MeasResultUTRA__measResult__primaryPLMN_Suitable_r12;

/* Forward declarations */
struct PLMN_IdentityList2;
struct AdditionalSI_Info_r9;

/* MeasResultUTRA */
typedef struct MeasResultUTRA {
	struct MeasResultUTRA__physCellId {
		MeasResultUTRA__physCellId_PR present;
		union MeasResultUTRA__physCellId_u {
			PhysCellIdUTRA_FDD_t	 fdd;
			PhysCellIdUTRA_TDD_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} physCellId;
	struct MeasResultUTRA__cgi_Info {
		CellGlobalIdUTRA_t	 cellGlobalId;
		BIT_STRING_t	*locationAreaCode	/* OPTIONAL */;
		BIT_STRING_t	*routingAreaCode	/* OPTIONAL */;
		struct PLMN_IdentityList2	*plmn_IdentityList	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct MeasResultUTRA__measResult {
		long	*utra_RSCP	/* OPTIONAL */;
		long	*utra_EcN0	/* OPTIONAL */;
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
} MeasResultUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_primaryPLMN_Suitable_r12_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultUTRA;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/PLMN-IdentityList2.h"
#include "rf_phreaker/lte_rrc_asn_library/AdditionalSI-Info-r9.h"

#endif	/* _MeasResultUTRA_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
