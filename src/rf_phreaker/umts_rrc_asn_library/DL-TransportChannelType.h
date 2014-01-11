/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_TransportChannelType_H_
#define	_DL_TransportChannelType_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TransportChannelIdentity.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/TransportChannelIdentityDCHandDSCH.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TransportChannelType_PR {
	DL_TransportChannelType_PR_NOTHING,	/* No components present */
	DL_TransportChannelType_PR_dch,
	DL_TransportChannelType_PR_fach,
	DL_TransportChannelType_PR_dsch,
	DL_TransportChannelType_PR_dch_and_dsch
} DL_TransportChannelType_PR;

/* DL-TransportChannelType */
typedef struct DL_TransportChannelType {
	DL_TransportChannelType_PR present;
	union DL_TransportChannelType_u {
		TransportChannelIdentity_t	 dch;
		NULL_t	 fach;
		TransportChannelIdentity_t	 dsch;
		TransportChannelIdentityDCHandDSCH_t	 dch_and_dsch;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TransportChannelType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TransportChannelType;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TransportChannelType_H_ */
