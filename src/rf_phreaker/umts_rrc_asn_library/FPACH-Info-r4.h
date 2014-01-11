/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_FPACH_Info_r4_H_
#define	_FPACH_Info_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TimeslotNumber-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/TDD-FPACH-CCode16-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/MidambleShiftAndBurstType-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/Wi-LCR.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FPACH-Info-r4 */
typedef struct FPACH_Info_r4 {
	TimeslotNumber_LCR_r4_t	 timeslot;
	TDD_FPACH_CCode16_r4_t	 channelisationCode;
	MidambleShiftAndBurstType_LCR_r4_t	 midambleShiftAndBurstType;
	Wi_LCR_t	 wi;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FPACH_Info_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FPACH_Info_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _FPACH_Info_r4_H_ */
