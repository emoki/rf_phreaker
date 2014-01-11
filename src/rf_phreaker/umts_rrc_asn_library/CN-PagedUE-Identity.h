/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CN_PagedUE_Identity_H_
#define	_CN_PagedUE_Identity_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/IMSI-GSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/TMSI-GSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/P-TMSI-GSM-MAP.h"
#include "rf_phreaker/umts_rrc_asn_library/IMSI-DS-41.h"
#include "rf_phreaker/umts_rrc_asn_library/TMSI-DS-41.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CN_PagedUE_Identity_PR {
	CN_PagedUE_Identity_PR_NOTHING,	/* No components present */
	CN_PagedUE_Identity_PR_imsi_GSM_MAP,
	CN_PagedUE_Identity_PR_tmsi_GSM_MAP,
	CN_PagedUE_Identity_PR_p_TMSI_GSM_MAP,
	CN_PagedUE_Identity_PR_imsi_DS_41,
	CN_PagedUE_Identity_PR_tmsi_DS_41,
	CN_PagedUE_Identity_PR_spare3,
	CN_PagedUE_Identity_PR_spare2,
	CN_PagedUE_Identity_PR_spare1
} CN_PagedUE_Identity_PR;

/* CN-PagedUE-Identity */
typedef struct CN_PagedUE_Identity {
	CN_PagedUE_Identity_PR present;
	union CN_PagedUE_Identity_u {
		IMSI_GSM_MAP_t	 imsi_GSM_MAP;
		TMSI_GSM_MAP_t	 tmsi_GSM_MAP;
		P_TMSI_GSM_MAP_t	 p_TMSI_GSM_MAP;
		IMSI_DS_41_t	 imsi_DS_41;
		TMSI_DS_41_t	 tmsi_DS_41;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CN_PagedUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CN_PagedUE_Identity;

#ifdef __cplusplus
}
#endif

#endif	/* _CN_PagedUE_Identity_H_ */
