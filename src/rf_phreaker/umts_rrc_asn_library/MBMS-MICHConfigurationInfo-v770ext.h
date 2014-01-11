/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_MICHConfigurationInfo_v770ext_H_
#define	_MBMS_MICHConfigurationInfo_v770ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MidambleShiftAndBurstType-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/MidambleShiftAndBurstType-VHCR.h"
#include "rf_phreaker/umts_rrc_asn_library/TimeSlotLCR-ext.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_MICHConfigurationInfo_v770ext__mode_PR {
	MBMS_MICHConfigurationInfo_v770ext__mode_PR_NOTHING,	/* No components present */
	MBMS_MICHConfigurationInfo_v770ext__mode_PR_tdd384,
	MBMS_MICHConfigurationInfo_v770ext__mode_PR_tdd768,
	MBMS_MICHConfigurationInfo_v770ext__mode_PR_tdd128
} MBMS_MICHConfigurationInfo_v770ext__mode_PR;

/* MBMS-MICHConfigurationInfo-v770ext */
typedef struct MBMS_MICHConfigurationInfo_v770ext {
	struct MBMS_MICHConfigurationInfo_v770ext__mode {
		MBMS_MICHConfigurationInfo_v770ext__mode_PR present;
		union MBMS_MICHConfigurationInfo_v770ext__mode_u {
			struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd384 {
				MidambleShiftAndBurstType_r7_t	 midambleShiftAndBurstType;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd384;
			struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd768 {
				MidambleShiftAndBurstType_VHCR_t	 midambleShiftAndBurstType;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd768;
			struct MBMS_MICHConfigurationInfo_v770ext__mode__tdd128 {
				TimeSlotLCR_ext_t	*mbsfnSpecialTimeSlot	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd128;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_MICHConfigurationInfo_v770ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_MICHConfigurationInfo_v770ext;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_MICHConfigurationInfo_v770ext_H_ */
