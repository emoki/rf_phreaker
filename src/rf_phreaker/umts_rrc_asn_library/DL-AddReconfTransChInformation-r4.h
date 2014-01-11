/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_AddReconfTransChInformation_r4_H_
#define	_DL_AddReconfTransChInformation_r4_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-TrCH-Type.h"
#include "rf_phreaker/umts_rrc_asn_library/TransportChannelIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/TransportFormatSet.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-TransportChannelIdentity.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR {
	DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR_NOTHING,	/* No components present */
	DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR_explicit_config,
	DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR_sameAsULTrCH
} DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR;

/* Forward declarations */
struct QualityTarget;

/* DL-AddReconfTransChInformation-r4 */
typedef struct DL_AddReconfTransChInformation_r4 {
	DL_TrCH_Type_t	 dl_TransportChannelType;
	TransportChannelIdentity_t	 dl_transportChannelIdentity;
	struct DL_AddReconfTransChInformation_r4__tfs_SignallingMode {
		DL_AddReconfTransChInformation_r4__tfs_SignallingMode_PR present;
		union DL_AddReconfTransChInformation_r4__tfs_SignallingMode_u {
			TransportFormatSet_t	 explicit_config;
			UL_TransportChannelIdentity_t	 sameAsULTrCH;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tfs_SignallingMode;
	struct QualityTarget	*dch_QualityTarget	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AddReconfTransChInformation_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInformation_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/QualityTarget.h"

#endif	/* _DL_AddReconfTransChInformation_r4_H_ */
