/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBSFNInterFrequencyNeighbour_r7_H_
#define	_MBSFNInterFrequencyNeighbour_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/FrequencyInfo.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/MBSFNservicesNotNotified-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR {
	MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR_NOTHING,	/* No components present */
	MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR_mbsfnServicesNotified,
	MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR_mbsfnServicesNotNotified
} MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR;

/* MBSFNInterFrequencyNeighbour-r7 */
typedef struct MBSFNInterFrequencyNeighbour_r7 {
	FrequencyInfo_t	 mbsfnFrequency;
	struct MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification {
		MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_PR present;
		union MBSFNInterFrequencyNeighbour_r7__mbsfnServicesNotification_u {
			NULL_t	 mbsfnServicesNotified;
			MBSFNservicesNotNotified_r7_t	 mbsfnServicesNotNotified;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mbsfnServicesNotification;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNInterFrequencyNeighbour_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNInterFrequencyNeighbour_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNInterFrequencyNeighbour_r7_H_ */
