/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_E_HICH_Information_For_SPS_TDD128_H_
#define	_E_HICH_Information_For_SPS_TDD128_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/TimeslotNumber-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-ChannelisationCode-LCR.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_HICH_Information_For_SPS_TDD128__configurationmode_PR {
	E_HICH_Information_For_SPS_TDD128__configurationmode_PR_NOTHING,	/* No components present */
	E_HICH_Information_For_SPS_TDD128__configurationmode_PR_implicit,
	E_HICH_Information_For_SPS_TDD128__configurationmode_PR_explicit
} E_HICH_Information_For_SPS_TDD128__configurationmode_PR;
typedef enum E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR {
	E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR_NOTHING,	/* No components present */
	E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR_defaultMidamble,
	E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR_ueSpecificMidamble
} E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR;

/* E-HICH-Information-For-SPS-TDD128 */
typedef struct E_HICH_Information_For_SPS_TDD128 {
	struct E_HICH_Information_For_SPS_TDD128__configurationmode {
		E_HICH_Information_For_SPS_TDD128__configurationmode_PR present;
		union E_HICH_Information_For_SPS_TDD128__configurationmode_u {
			struct E_HICH_Information_For_SPS_TDD128__configurationmode__implicit {
				long	*ei	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} implicit;
			struct E_HICH_Information_For_SPS_TDD128__configurationmode__explicit {
				TimeslotNumber_LCR_r4_t	 timeslotNumber;
				HS_ChannelisationCode_LCR_t	 channelisation_Code;
				struct E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode {
					E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_PR present;
					union E_HICH_Information_For_SPS_TDD128__configurationmode__explicit__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						long	 ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				long	 midambleConfiguration;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} explicit;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} configurationmode;
	long	 signatureSequenceGroupIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_HICH_Information_For_SPS_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_HICH_Information_For_SPS_TDD128;

#ifdef __cplusplus
}
#endif

#endif	/* _E_HICH_Information_For_SPS_TDD128_H_ */
