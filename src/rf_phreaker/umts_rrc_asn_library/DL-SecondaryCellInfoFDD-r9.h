/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_SecondaryCellInfoFDD_r9_H_
#define	_DL_SecondaryCellInfoFDD_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include "rf_phreaker/umts_rrc_asn_library/HS-DSCH-TBSizeTable.h"
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/SecondaryScramblingCode.h"
#include "rf_phreaker/umts_rrc_asn_library/MeasurementPowerOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/UARFCN.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-Codes.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_SecondaryCellInfoFDD_r9__configurationInfo_PR {
	DL_SecondaryCellInfoFDD_r9__configurationInfo_PR_NOTHING,	/* No components present */
	DL_SecondaryCellInfoFDD_r9__configurationInfo_PR_continue,
	DL_SecondaryCellInfoFDD_r9__configurationInfo_PR_newConfiguration
} DL_SecondaryCellInfoFDD_r9__configurationInfo_PR;
typedef enum DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__dl_64QAM_Configured {
	DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__dl_64QAM_Configured_true	= 0
} e_DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__dl_64QAM_Configured;
typedef enum DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__differentTxModeFromServingHS_DSCHCell {
	DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__differentTxModeFromServingHS_DSCHCell_different	= 0
} e_DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__differentTxModeFromServingHS_DSCHCell;

/* Forward declarations */
struct SecondaryCellMIMOparametersFDD;

/* DL-SecondaryCellInfoFDD-r9 */
typedef struct DL_SecondaryCellInfoFDD_r9 {
	struct DL_SecondaryCellInfoFDD_r9__configurationInfo {
		DL_SecondaryCellInfoFDD_r9__configurationInfo_PR present;
		union DL_SecondaryCellInfoFDD_r9__configurationInfo_u {
			NULL_t	 Continue;
			struct DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration {
				H_RNTI_t	 new_H_RNTI;
				long	*dl_64QAM_Configured	/* OPTIONAL */;
				HS_DSCH_TBSizeTable_t	*hs_DSCH_TBSizeTable	/* OPTIONAL */;
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				SecondaryScramblingCode_t	*dl_ScramblingCode	/* OPTIONAL */;
				struct DL_SecondaryCellInfoFDD_r9__configurationInfo__newConfiguration__hS_SCCHChannelisationCodeInfo {
					A_SEQUENCE_OF(HS_SCCH_Codes_t) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} hS_SCCHChannelisationCodeInfo;
				MeasurementPowerOffset_t	 measurementPowerOffset;
				UARFCN_t	 uarfcn_DL;
				long	*differentTxModeFromServingHS_DSCHCell	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} newConfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} configurationInfo;
	struct SecondaryCellMIMOparametersFDD	*secondaryCellMIMOparameters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_SecondaryCellInfoFDD_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_64QAM_Configured_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_differentTxModeFromServingHS_DSCHCell_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_SecondaryCellInfoFDD_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryCellMIMOparametersFDD.h"

#endif	/* _DL_SecondaryCellInfoFDD_r9_H_ */
