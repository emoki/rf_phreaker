/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_InterRAT_TargetCellDescription_H_
#define	_InterRAT_TargetCellDescription_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/BSIC.h"
#include "rf_phreaker/umts_rrc_asn_library/Frequency-Band.h"
#include "rf_phreaker/umts_rrc_asn_library/BCCH-ARFCN.h"
#include "rf_phreaker/umts_rrc_asn_library/NC-Mode.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterRAT_TargetCellDescription__technologySpecificInfo_PR {
	InterRAT_TargetCellDescription__technologySpecificInfo_PR_NOTHING,	/* No components present */
	InterRAT_TargetCellDescription__technologySpecificInfo_PR_gsm,
	InterRAT_TargetCellDescription__technologySpecificInfo_PR_is_2000,
	InterRAT_TargetCellDescription__technologySpecificInfo_PR_spare2,
	InterRAT_TargetCellDescription__technologySpecificInfo_PR_spare1
} InterRAT_TargetCellDescription__technologySpecificInfo_PR;

/* InterRAT-TargetCellDescription */
typedef struct InterRAT_TargetCellDescription {
	struct InterRAT_TargetCellDescription__technologySpecificInfo {
		InterRAT_TargetCellDescription__technologySpecificInfo_PR present;
		union InterRAT_TargetCellDescription__technologySpecificInfo_u {
			struct InterRAT_TargetCellDescription__technologySpecificInfo__gsm {
				BSIC_t	 bsic;
				Frequency_Band_t	 frequency_band;
				BCCH_ARFCN_t	 bcch_ARFCN;
				NC_Mode_t	*ncMode	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gsm;
			NULL_t	 is_2000;
			NULL_t	 spare2;
			NULL_t	 spare1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} technologySpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRAT_TargetCellDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRAT_TargetCellDescription;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRAT_TargetCellDescription_H_ */
