/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UL_CCCH_MessageType_H_
#define	_UL_CCCH_MessageType_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/CellUpdate.h"
#include "rf_phreaker/umts_rrc_asn_library/RRCConnectionRequest.h"
#include "rf_phreaker/umts_rrc_asn_library/URAUpdate.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_CCCH_MessageType_PR {
	UL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	UL_CCCH_MessageType_PR_cellUpdate,
	UL_CCCH_MessageType_PR_rrcConnectionRequest,
	UL_CCCH_MessageType_PR_uraUpdate,
	UL_CCCH_MessageType_PR_spare
} UL_CCCH_MessageType_PR;

/* UL-CCCH-MessageType */
typedef struct UL_CCCH_MessageType {
	UL_CCCH_MessageType_PR present;
	union UL_CCCH_MessageType_u {
		CellUpdate_t	 cellUpdate;
		RRCConnectionRequest_t	 rrcConnectionRequest;
		URAUpdate_t	 uraUpdate;
		NULL_t	 spare;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_CCCH_MessageType_H_ */
