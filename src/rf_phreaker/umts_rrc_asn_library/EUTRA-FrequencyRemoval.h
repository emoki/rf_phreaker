/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EUTRA_FrequencyRemoval_H_
#define	_EUTRA_FrequencyRemoval_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/EARFCN.h"
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_FrequencyRemoval_PR {
	EUTRA_FrequencyRemoval_PR_NOTHING,	/* No components present */
	EUTRA_FrequencyRemoval_PR_removeAllFrequencies,
	EUTRA_FrequencyRemoval_PR_removeSomeFrequencies,
	EUTRA_FrequencyRemoval_PR_removeNoFrequencies
} EUTRA_FrequencyRemoval_PR;

/* EUTRA-FrequencyRemoval */
typedef struct EUTRA_FrequencyRemoval {
	EUTRA_FrequencyRemoval_PR present;
	union EUTRA_FrequencyRemoval_u {
		NULL_t	 removeAllFrequencies;
		struct EUTRA_FrequencyRemoval__removeSomeFrequencies {
			A_SEQUENCE_OF(EARFCN_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} removeSomeFrequencies;
		NULL_t	 removeNoFrequencies;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FrequencyRemoval_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FrequencyRemoval;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_FrequencyRemoval_H_ */
