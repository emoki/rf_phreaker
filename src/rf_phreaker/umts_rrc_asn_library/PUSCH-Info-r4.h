/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PUSCH_Info_r4_H_
#define	_PUSCH_Info_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TFCS-IdentityPlain.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_Info_r4__tddOption_PR {
	PUSCH_Info_r4__tddOption_PR_NOTHING,	/* No components present */
	PUSCH_Info_r4__tddOption_PR_tdd384,
	PUSCH_Info_r4__tddOption_PR_tdd128
} PUSCH_Info_r4__tddOption_PR;

/* Forward declarations */
struct CommonTimeslotInfo;
struct UplinkTimeslotsCodes;
struct UplinkTimeslotsCodes_LCR_r4;

/* PUSCH-Info-r4 */
typedef struct PUSCH_Info_r4 {
	TFCS_IdentityPlain_t	*tfcs_ID	/* DEFAULT 1 */;
	struct CommonTimeslotInfo	*commonTimeslotInfo	/* OPTIONAL */;
	struct PUSCH_Info_r4__tddOption {
		PUSCH_Info_r4__tddOption_PR present;
		union PUSCH_Info_r4__tddOption_u {
			struct PUSCH_Info_r4__tddOption__tdd384 {
				struct UplinkTimeslotsCodes	*pusch_TimeslotsCodes	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd384;
			struct PUSCH_Info_r4__tddOption__tdd128 {
				struct UplinkTimeslotsCodes_LCR_r4	*pusch_TimeslotsCodes	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd128;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tddOption;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_Info_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_Info_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/CommonTimeslotInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/UplinkTimeslotsCodes.h"
#include "rf_phreaker/umts_rrc_asn_library/UplinkTimeslotsCodes-LCR-r4.h"

#endif	/* _PUSCH_Info_r4_H_ */
