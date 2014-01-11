/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TGP_SequenceShort_H_
#define	_TGP_SequenceShort_H_


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
typedef enum TGP_SequenceShort__tgps_Status_PR {
	TGP_SequenceShort__tgps_Status_PR_NOTHING,	/* No components present */
	TGP_SequenceShort__tgps_Status_PR_activate,
	TGP_SequenceShort__tgps_Status_PR_deactivate
} TGP_SequenceShort__tgps_Status_PR;

/* TGP-SequenceShort */
typedef struct TGP_SequenceShort {
	TGPSI_t	 tgpsi;
	struct TGP_SequenceShort__tgps_Status {
		TGP_SequenceShort__tgps_Status_PR present;
		union TGP_SequenceShort__tgps_Status_u {
			struct TGP_SequenceShort__tgps_Status__activate {
				TGCFN_t	 tgcfn;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} activate;
			NULL_t	 deactivate;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tgps_Status;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TGP_SequenceShort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TGP_SequenceShort;

#ifdef __cplusplus
}
#endif

#endif	/* _TGP_SequenceShort_H_ */
