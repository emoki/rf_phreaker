/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_TransChCapability_H_
#define	_DL_TransChCapability_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/MaxNoBits.h"
#include "rf_phreaker/umts_rrc_asn_library/TurboSupport.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxSimultaneousTransChsDL.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxSimultaneousCCTrCH-Count.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxTransportBlocksDL.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxNumberOfTFC-DL.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxNumberOfTF.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-TransChCapability */
typedef struct DL_TransChCapability {
	MaxNoBits_t	 maxNoBitsReceived;
	MaxNoBits_t	 maxConvCodeBitsReceived;
	TurboSupport_t	 turboDecodingSupport;
	MaxSimultaneousTransChsDL_t	 maxSimultaneousTransChs;
	MaxSimultaneousCCTrCH_Count_t	 maxSimultaneousCCTrCH_Count;
	MaxTransportBlocksDL_t	 maxReceivedTransportBlocks;
	MaxNumberOfTFC_DL_t	 maxNumberOfTFC;
	MaxNumberOfTF_t	 maxNumberOfTF;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TransChCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TransChCapability;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TransChCapability_H_ */
