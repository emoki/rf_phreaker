/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RadioBearerSetup_v690ext_IEs_H_
#define	_RadioBearerSetup_v690ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/HARQ-Preamble-Mode.h"
#include "rf_phreaker/umts_rrc_asn_library/BEACON-PL-Est.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include "rf_phreaker/umts_rrc_asn_library/DHS-Sync.h"
#include "rf_phreaker/umts_rrc_asn_library/TimingMaintainedSynchInd.h"
#include "rf_phreaker/umts_rrc_asn_library/MBMS-PL-ServiceRestrictInfo-r6.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerSetup_v690ext_IEs__postVerificationPeriod {
	RadioBearerSetup_v690ext_IEs__postVerificationPeriod_true	= 0
} e_RadioBearerSetup_v690ext_IEs__postVerificationPeriod;

/* Forward declarations */
struct PLMN_Identity;
struct RAB_InformationSetupList_r6_ext;

/* RadioBearerSetup-v690ext-IEs */
typedef struct RadioBearerSetup_v690ext_IEs {
	struct PLMN_Identity	*primary_plmn_Identity	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	*harq_Preamble_Mode	/* OPTIONAL */;
	BEACON_PL_Est_t	*beaconPLEst	/* OPTIONAL */;
	long	*postVerificationPeriod	/* OPTIONAL */;
	DHS_Sync_t	*dhs_sync	/* OPTIONAL */;
	TimingMaintainedSynchInd_t	*timingMaintainedSynchInd	/* OPTIONAL */;
	struct RAB_InformationSetupList_r6_ext	*rab_InformationSetupList	/* OPTIONAL */;
	MBMS_PL_ServiceRestrictInfo_r6_t	*mbms_PL_ServiceRestrictInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_v690ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_postVerificationPeriod_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_v690ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PLMN-Identity.h"
#include "rf_phreaker/umts_rrc_asn_library/RAB-InformationSetupList-r6-ext.h"

#endif	/* _RadioBearerSetup_v690ext_IEs_H_ */
