/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_MICHConfigurationInfo_v890ext_H_
#define	_MBMS_MICHConfigurationInfo_v890ext_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ChannelisationCode256.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-NI-CountPerFrame-IMB384.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_MICHConfigurationInfo_v890ext__mode_PR {
	MBMS_MICHConfigurationInfo_v890ext__mode_PR_NOTHING,	/* No components present */
	MBMS_MICHConfigurationInfo_v890ext__mode_PR_imb384
} MBMS_MICHConfigurationInfo_v890ext__mode_PR;

/* MBMS-MICHConfigurationInfo-v890ext */
typedef struct MBMS_MICHConfigurationInfo_v890ext {
	struct MBMS_MICHConfigurationInfo_v890ext__mode {
		MBMS_MICHConfigurationInfo_v890ext__mode_PR present;
		union MBMS_MICHConfigurationInfo_v890ext__mode_u {
			struct MBMS_MICHConfigurationInfo_v890ext__mode__imb384 {
				ChannelisationCode256_t	 channelisationCode256;
				MBMS_NI_CountPerFrame_IMB384_t	 ni_CountPerFrame;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} imb384;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_MICHConfigurationInfo_v890ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_MICHConfigurationInfo_v890ext;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_MICHConfigurationInfo_v890ext_H_ */
