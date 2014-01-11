/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_E_DCH_AddReconf_MAC_d_Flow_H_
#define	_E_DCH_AddReconf_MAC_d_Flow_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-MAC-d-FlowIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-MAC-d-FlowPowerOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-MAC-d-FlowMaxRetrans.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-MAC-d-FlowMultiplexingList.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR {
	E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR_NOTHING,	/* No components present */
	E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR_non_ScheduledTransGrantInfo,
	E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR_scheduledTransmissionGrantInfo
} E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR;

/* E-DCH-AddReconf-MAC-d-Flow */
typedef struct E_DCH_AddReconf_MAC_d_Flow {
	E_DCH_MAC_d_FlowIdentity_t	 mac_d_FlowIdentity;
	E_DCH_MAC_d_FlowPowerOffset_t	*mac_d_FlowPowerOffset	/* OPTIONAL */;
	E_DCH_MAC_d_FlowMaxRetrans_t	*mac_d_FlowMaxRetrans	/* OPTIONAL */;
	E_DCH_MAC_d_FlowMultiplexingList_t	*mac_d_FlowMultiplexingList	/* OPTIONAL */;
	struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType {
		E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_PR present;
		union E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType_u {
			struct E_DCH_AddReconf_MAC_d_Flow__transmissionGrantType__non_ScheduledTransGrantInfo {
				long	 maxMAC_e_PDUContents;
				BIT_STRING_t	*ms2_NonSchedTransmGrantHARQAlloc	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} non_ScheduledTransGrantInfo;
			NULL_t	 scheduledTransmissionGrantInfo;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transmissionGrantType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DCH_AddReconf_MAC_d_Flow_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DCH_AddReconf_MAC_d_Flow;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DCH_AddReconf_MAC_d_Flow_H_ */
