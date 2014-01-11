/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Non_ScheduledTransGrantInfoTDD_r9_H_
#define	_Non_ScheduledTransGrantInfoTDD_r9_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-TS-ChannelisationCode.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include "rf_phreaker/umts_rrc_asn_library/TimeslotNumber-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-ChannelisationCode-LCR.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Non_ScheduledTransGrantInfoTDD_r9_PR {
	Non_ScheduledTransGrantInfoTDD_r9_PR_NOTHING,	/* No components present */
	Non_ScheduledTransGrantInfoTDD_r9_PR_tdd384_768,
	Non_ScheduledTransGrantInfoTDD_r9_PR_tdd128
} Non_ScheduledTransGrantInfoTDD_r9_PR;
typedef enum Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR {
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR_NOTHING,	/* No components present */
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR_defaultMidamble,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR_ueSpecificMidamble
} Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR;
typedef enum Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst {
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_everyEDCHTTI	= 0,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms20	= 1,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms40	= 2,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms60	= 3,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms80	= 4,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms160	= 5,
	Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst_ms200	= 6
} e_Non_ScheduledTransGrantInfoTDD_r9__tdd128__t_SI_nst;

/* Forward declarations */
struct RepetitionPeriodAndLength;

/* Non-ScheduledTransGrantInfoTDD-r9 */
typedef struct Non_ScheduledTransGrantInfoTDD_r9 {
	Non_ScheduledTransGrantInfoTDD_r9_PR present;
	union Non_ScheduledTransGrantInfoTDD_r9_u {
		struct Non_ScheduledTransGrantInfoTDD_r9__tdd384_768 {
			BIT_STRING_t	 timeslotResourceRelatedInfo;
			long	 powerResourceRelatedInfo;
			ActivationTime_t	 activationTime;
			struct RepetitionPeriodAndLength	*repetitionPeriodAndLength	/* OPTIONAL */;
			UL_TS_ChannelisationCode_t	 codeResourceInfo;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd384_768;
		struct Non_ScheduledTransGrantInfoTDD_r9__tdd128 {
			long	*n_E_UCCH	/* OPTIONAL */;
			long	*n_E_HICH	/* OPTIONAL */;
			BIT_STRING_t	 timeslotResourceRelatedInfo;
			long	 powerResourceRelatedInfo;
			ActivationTime_t	 activationTime;
			long	 sfnNum;
			struct RepetitionPeriodAndLength	*repetitionPeriodAndLength	/* OPTIONAL */;
			UL_TS_ChannelisationCode_t	 codeResourceInfo;
			struct Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info {
				TimeslotNumber_LCR_r4_t	 timeslotNumber;
				HS_ChannelisationCode_LCR_t	 channelisation_Code;
				struct Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode {
					Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_PR present;
					union Non_ScheduledTransGrantInfoTDD_r9__tdd128__e_HICH_Info__midambleAllocationMode_u {
						NULL_t	 defaultMidamble;
						long	 ueSpecificMidamble;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} midambleAllocationMode;
				long	 midambleConfiguration;
				long	 signatureSequenceGroupIndex;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} e_HICH_Info;
			long	*t_SI_nst	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd128;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Non_ScheduledTransGrantInfoTDD_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t_SI_nst_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Non_ScheduledTransGrantInfoTDD_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RepetitionPeriodAndLength.h"

#endif	/* _Non_ScheduledTransGrantInfoTDD_r9_H_ */
