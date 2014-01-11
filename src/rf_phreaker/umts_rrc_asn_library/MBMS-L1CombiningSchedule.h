/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_L1CombiningSchedule_H_
#define	_MBMS_L1CombiningSchedule_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-32.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-64.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-128.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-256.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-512.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-L1CombiningSchedule-1024.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_L1CombiningSchedule_PR {
	MBMS_L1CombiningSchedule_PR_NOTHING,	/* No components present */
	MBMS_L1CombiningSchedule_PR_cycleLength_32,
	MBMS_L1CombiningSchedule_PR_cycleLength_64,
	MBMS_L1CombiningSchedule_PR_cycleLength_128,
	MBMS_L1CombiningSchedule_PR_cycleLength_256,
	MBMS_L1CombiningSchedule_PR_cycleLength_512,
	MBMS_L1CombiningSchedule_PR_cycleLength_1024
} MBMS_L1CombiningSchedule_PR;

/* MBMS-L1CombiningSchedule */
typedef struct MBMS_L1CombiningSchedule {
	MBMS_L1CombiningSchedule_PR present;
	union MBMS_L1CombiningSchedule_u {
		MBMS_L1CombiningSchedule_32_t	 cycleLength_32;
		MBMS_L1CombiningSchedule_64_t	 cycleLength_64;
		MBMS_L1CombiningSchedule_128_t	 cycleLength_128;
		MBMS_L1CombiningSchedule_256_t	 cycleLength_256;
		MBMS_L1CombiningSchedule_512_t	 cycleLength_512;
		MBMS_L1CombiningSchedule_1024_t	 cycleLength_1024;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_L1CombiningSchedule_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_L1CombiningSchedule;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_L1CombiningSchedule_H_ */
