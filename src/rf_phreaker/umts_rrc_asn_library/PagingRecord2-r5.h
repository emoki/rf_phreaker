/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PagingRecord2_r5_H_
#define	_PagingRecord2_r5_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/RRC-ConnectionReleaseInformation.h"
#include "rf_phreaker/umts_rrc_asn_library/PagingCause.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-DomainIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/PagingRecordTypeID.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingRecord2_r5_PR {
	PagingRecord2_r5_PR_NOTHING,	/* No components present */
	PagingRecord2_r5_PR_utran_SingleUE_Identity,
	PagingRecord2_r5_PR_utran_GroupIdentity
} PagingRecord2_r5_PR;

/* Forward declarations */
struct GroupIdentityWithReleaseInformation;

/* PagingRecord2-r5 */
typedef struct PagingRecord2_r5 {
	PagingRecord2_r5_PR present;
	union PagingRecord2_r5_u {
		struct PagingRecord2_r5__utran_SingleUE_Identity {
			U_RNTI_t	 u_RNTI;
			struct PagingRecord2_r5__utran_SingleUE_Identity__cn_OriginatedPage_connectedMode_UE {
				PagingCause_t	 pagingCause;
				CN_DomainIdentity_t	 cn_DomainIdentity;
				PagingRecordTypeID_t	 pagingRecordTypeID;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *cn_OriginatedPage_connectedMode_UE;
			RRC_ConnectionReleaseInformation_t	 rrc_ConnectionReleaseInformation;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} utran_SingleUE_Identity;
		struct PagingRecord2_r5__utran_GroupIdentity {
			A_SEQUENCE_OF(struct GroupIdentityWithReleaseInformation) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} utran_GroupIdentity;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PagingRecord2_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingRecord2_r5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/GroupIdentityWithReleaseInformation.h"

#endif	/* _PagingRecord2_r5_H_ */
