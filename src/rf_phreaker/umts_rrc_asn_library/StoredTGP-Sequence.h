/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_StoredTGP_Sequence_H_
#define	_StoredTGP_Sequence_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/TGPSI.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include "rf_phreaker/umts_rrc_asn_library/TGCFN.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StoredTGP_Sequence__current_tgps_Status_PR {
	StoredTGP_Sequence__current_tgps_Status_PR_NOTHING,	/* No components present */
	StoredTGP_Sequence__current_tgps_Status_PR_active,
	StoredTGP_Sequence__current_tgps_Status_PR_inactive
} StoredTGP_Sequence__current_tgps_Status_PR;

/* Forward declarations */
struct TGPS_ConfigurationParams;

/* StoredTGP-Sequence */
typedef struct StoredTGP_Sequence {
	TGPSI_t	 tgpsi;
	struct StoredTGP_Sequence__current_tgps_Status {
		StoredTGP_Sequence__current_tgps_Status_PR present;
		union StoredTGP_Sequence__current_tgps_Status_u {
			struct StoredTGP_Sequence__current_tgps_Status__active {
				TGCFN_t	 tgcfn;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} active;
			NULL_t	 inactive;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} current_tgps_Status;
	struct TGPS_ConfigurationParams	*tgps_ConfigurationParams	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} StoredTGP_Sequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StoredTGP_Sequence;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/TGPS-ConfigurationParams.h"

#endif	/* _StoredTGP_Sequence_H_ */
