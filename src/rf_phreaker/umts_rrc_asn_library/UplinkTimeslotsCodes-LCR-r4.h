/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UplinkTimeslotsCodes_LCR_r4_H_
#define	_UplinkTimeslotsCodes_LCR_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include "rf_phreaker/umts_rrc_asn_library/IndividualTimeslotInfo-LCR-r4.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-TS-ChannelisationCodeList.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR {
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_NOTHING,	/* No components present */
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_noMore,
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR_additionalTimeslots
} UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR;
typedef enum UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR {
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_NOTHING,	/* No components present */
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_consecutive,
	UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR_timeslotList
} UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR;

/* Forward declarations */
struct UplinkAdditionalTimeslots_LCR_r4;

/* UplinkTimeslotsCodes-LCR-r4 */
typedef struct UplinkTimeslotsCodes_LCR_r4 {
	BOOLEAN_t	 dynamicSFusage;
	IndividualTimeslotInfo_LCR_r4_t	 firstIndividualTimeslotInfo;
	UL_TS_ChannelisationCodeList_t	 ul_TS_ChannelisationCodeList;
	struct UplinkTimeslotsCodes_LCR_r4__moreTimeslots {
		UplinkTimeslotsCodes_LCR_r4__moreTimeslots_PR present;
		union UplinkTimeslotsCodes_LCR_r4__moreTimeslots_u {
			NULL_t	 noMore;
			struct UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots {
				UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_PR present;
				union UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots_u {
					struct UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots__consecutive {
						long	 numAdditionalTimeslots;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} consecutive;
					struct UplinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots__timeslotList {
						A_SEQUENCE_OF(struct UplinkAdditionalTimeslots_LCR_r4) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} timeslotList;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} additionalTimeslots;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} moreTimeslots;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkTimeslotsCodes_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkTimeslotsCodes_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UplinkAdditionalTimeslots-LCR-r4.h"

#endif	/* _UplinkTimeslotsCodes_LCR_r4_H_ */
