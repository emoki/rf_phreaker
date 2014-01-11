/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_FrequencyBandsIndicatorFDD_H_
#define	_FrequencyBandsIndicatorFDD_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RadioFrequencyBandFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/RadioFrequencyBandFDD2.h"
#include "rf_phreaker/umts_rrc_asn_library/RadioFrequencyBandFDD3.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FrequencyBandsIndicatorFDD_PR {
	FrequencyBandsIndicatorFDD_PR_NOTHING,	/* No components present */
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator1,
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator2,
	FrequencyBandsIndicatorFDD_PR_frequencyBandsIndicator3
} FrequencyBandsIndicatorFDD_PR;

/* FrequencyBandsIndicatorFDD */
typedef struct FrequencyBandsIndicatorFDD {
	FrequencyBandsIndicatorFDD_PR present;
	union FrequencyBandsIndicatorFDD_u {
		RadioFrequencyBandFDD_t	 frequencyBandsIndicator1;
		RadioFrequencyBandFDD2_t	 frequencyBandsIndicator2;
		RadioFrequencyBandFDD3_t	 frequencyBandsIndicator3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyBandsIndicatorFDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyBandsIndicatorFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyBandsIndicatorFDD_H_ */
