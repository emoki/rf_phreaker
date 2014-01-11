/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PhysicalChannelReconfigurationComplete_H_
#define	_PhysicalChannelReconfigurationComplete_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RRC-TransactionIdentifier.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-TimingAdvance.h"
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include "rf_phreaker/umts_rrc_asn_library/PhysicalChannelReconfigurationComplete-v770ext-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtActivationInfo;
struct RB_ActivationTimeInfoList;
struct UL_CounterSynchronisationInfo;

/* PhysicalChannelReconfigurationComplete */
typedef struct PhysicalChannelReconfigurationComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtActivationInfo	*ul_IntegProtActivationInfo	/* OPTIONAL */;
	UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
	ActivationTime_t	*count_C_ActivationTime	/* OPTIONAL */;
	struct RB_ActivationTimeInfoList	*dummy	/* OPTIONAL */;
	struct UL_CounterSynchronisationInfo	*ul_CounterSynchronisationInfo	/* OPTIONAL */;
	struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions {
		BIT_STRING_t	*physicalChannelReconfigurationComplete_r3_add_ext	/* OPTIONAL */;
		struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions {
			PhysicalChannelReconfigurationComplete_v770ext_IEs_t	 physicalChannelReconfigurationComplete_v770ext;
			struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v770NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelReconfigurationComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfigurationComplete;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/IntegrityProtActivationInfo.h"
#include "rf_phreaker/umts_rrc_asn_library/RB-ActivationTimeInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-CounterSynchronisationInfo.h"

#endif	/* _PhysicalChannelReconfigurationComplete_H_ */
