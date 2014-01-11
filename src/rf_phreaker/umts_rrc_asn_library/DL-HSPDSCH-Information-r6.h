/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_HSPDSCH_Information_r6_H_
#define	_DL_HSPDSCH_Information_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_HSPDSCH_Information_r6__modeSpecificInfo_PR {
	DL_HSPDSCH_Information_r6__modeSpecificInfo_PR_NOTHING,	/* No components present */
	DL_HSPDSCH_Information_r6__modeSpecificInfo_PR_tdd,
	DL_HSPDSCH_Information_r6__modeSpecificInfo_PR_fdd
} DL_HSPDSCH_Information_r6__modeSpecificInfo_PR;
typedef enum DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR {
	DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR_NOTHING,	/* No components present */
	DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR_tdd384,
	DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR_tdd128
} DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR;

/* Forward declarations */
struct HS_SCCH_Info_r6;
struct Measurement_Feedback_Info;
struct DL_HSPDSCH_TS_Configuration;
struct HS_PDSCH_Midamble_Configuration_TDD128;

/* DL-HSPDSCH-Information-r6 */
typedef struct DL_HSPDSCH_Information_r6 {
	struct HS_SCCH_Info_r6	*hs_scch_Info	/* OPTIONAL */;
	struct Measurement_Feedback_Info	*measurement_feedback_Info	/* OPTIONAL */;
	struct DL_HSPDSCH_Information_r6__modeSpecificInfo {
		DL_HSPDSCH_Information_r6__modeSpecificInfo_PR present;
		union DL_HSPDSCH_Information_r6__modeSpecificInfo_u {
			struct DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd {
				DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_PR present;
				union DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd_u {
					struct DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd__tdd384 {
						struct DL_HSPDSCH_TS_Configuration	*dl_HSPDSCH_TS_Configuration	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd384;
					struct DL_HSPDSCH_Information_r6__modeSpecificInfo__tdd__tdd128 {
						struct HS_PDSCH_Midamble_Configuration_TDD128	*hs_PDSCH_Midamble_Configuration_tdd128	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} tdd128;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
			NULL_t	 fdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_HSPDSCH_Information_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_HSPDSCH_Information_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-Info-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/Measurement-Feedback-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-TS-Configuration.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-PDSCH-Midamble-Configuration-TDD128.h"

#endif	/* _DL_HSPDSCH_Information_r6_H_ */
