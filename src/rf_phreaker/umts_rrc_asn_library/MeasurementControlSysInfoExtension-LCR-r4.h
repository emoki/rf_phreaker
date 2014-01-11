/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MeasurementControlSysInfoExtension_LCR_r4_H_
#define	_MeasurementControlSysInfoExtension_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR {
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR_hcs_not_used,
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR_hcs_used
} MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR;
typedef enum MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR {
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_cpich_RSCP,
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR_cpich_Ec_N0
} MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR;
typedef enum MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR {
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_NOTHING,	/* No components present */
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_cpich_RSCP,
	MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR_cpich_Ec_N0
} MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR;

/* Forward declarations */
struct NewInterRATCellList;
struct NewIntraFreqCellSI_List_RSCP_LCR_r4;
struct NewInterFreqCellSI_List_RSCP_LCR_r4;
struct NewIntraFreqCellSI_List_ECN0_LCR_r4;
struct NewInterFreqCellSI_List_ECN0_LCR_r4;
struct NewIntraFreqCellSI_List_HCS_RSCP_LCR_r4;
struct NewInterFreqCellSI_List_HCS_RSCP_LCR_r4;
struct NewIntraFreqCellSI_List_HCS_ECN0_LCR_r4;
struct NewInterFreqCellSI_List_HCS_ECN0_LCR_r4;

/* MeasurementControlSysInfoExtension-LCR-r4 */
typedef struct MeasurementControlSysInfoExtension_LCR_r4 {
	struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS {
		MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_PR present;
		union MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS_u {
			struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used {
				struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure {
					MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure_u {
						struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_RSCP {
							struct NewIntraFreqCellSI_List_RSCP_LCR_r4	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_RSCP_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_not_used__cellSelectQualityMeasure__cpich_Ec_N0 {
							struct NewIntraFreqCellSI_List_ECN0_LCR_r4	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_ECN0_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_not_used;
			struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used {
				struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure {
					MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_PR present;
					union MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure_u {
						struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_RSCP {
							struct NewIntraFreqCellSI_List_HCS_RSCP_LCR_r4	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_HCS_RSCP_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_RSCP;
						struct MeasurementControlSysInfoExtension_LCR_r4__use_of_HCS__hcs_used__cellSelectQualityMeasure__cpich_Ec_N0 {
							struct NewIntraFreqCellSI_List_HCS_ECN0_LCR_r4	*newIntraFreqCellList	/* OPTIONAL */;
							struct NewInterFreqCellSI_List_HCS_ECN0_LCR_r4	*newInterFreqCellList	/* OPTIONAL */;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} cpich_Ec_N0;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} cellSelectQualityMeasure;
				struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hcs_used;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} use_of_HCS;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControlSysInfoExtension_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControlSysInfoExtension_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/NewInterRATCellList.h"
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-List-RSCP-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewInterFreqCellSI-List-RSCP-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-List-ECN0-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewInterFreqCellSI-List-ECN0-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-List-HCS-RSCP-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewInterFreqCellSI-List-HCS-RSCP-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewIntraFreqCellSI-List-HCS-ECN0-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/NewInterFreqCellSI-List-HCS-ECN0-LCR-r4.h"

#endif	/* _MeasurementControlSysInfoExtension_LCR_r4_H_ */
