/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_CCTrCH_r4_H_
#define	_UL_CCTrCH_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TFCS-IdentityPlain.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-TargetSIR.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CCTrCH_r4__tddOption_PR {
	UL_CCTrCH_r4__tddOption_PR_NOTHING,	/* No components present */
	UL_CCTrCH_r4__tddOption_PR_tdd384,
	UL_CCTrCH_r4__tddOption_PR_tdd128
} UL_CCTrCH_r4__tddOption_PR;

/* Forward declarations */
struct CommonTimeslotInfo;
struct UplinkTimeslotsCodes;
struct UplinkTimeslotsCodes_LCR_r4;

/* UL-CCTrCH-r4 */
typedef struct UL_CCTrCH_r4 {
	TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
	UL_TargetSIR_t	 ul_TargetSIR;
	TimeInfo_t	 timeInfo;
	struct CommonTimeslotInfo	*commonTimeslotInfo	/* OPTIONAL */;
	struct UL_CCTrCH_r4__tddOption {
		UL_CCTrCH_r4__tddOption_PR present;
		union UL_CCTrCH_r4__tddOption_u {
			struct UL_CCTrCH_r4__tddOption__tdd384 {
				struct UplinkTimeslotsCodes	*ul_CCTrCH_TimeslotsCodes	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd384;
			struct UL_CCTrCH_r4__tddOption__tdd128 {
				struct UplinkTimeslotsCodes_LCR_r4	*ul_CCTrCH_TimeslotsCodes	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd128;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tddOption;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCTrCH_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCTrCH_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CommonTimeslotInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UplinkTimeslotsCodes.h"
#include "rf_phreaker/umts_rrc_asn_library/UplinkTimeslotsCodes-LCR-r4.h"

#endif	/* _UL_CCTrCH_r4_H_ */
