/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Class-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_BCCH_FACH_MessageType_H_
#define	_BCCH_FACH_MessageType_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SystemInformation-FACH.h"
#include "rf_phreaker/umts_rrc_asn_library/SystemInformationChangeIndication.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_FACH_MessageType_PR {
	BCCH_FACH_MessageType_PR_NOTHING,	/* No components present */
	BCCH_FACH_MessageType_PR_systemInformation,
	BCCH_FACH_MessageType_PR_systemInformationChangeIndication,
	BCCH_FACH_MessageType_PR_spare2,
	BCCH_FACH_MessageType_PR_spare1
} BCCH_FACH_MessageType_PR;

/* BCCH-FACH-MessageType */
typedef struct BCCH_FACH_MessageType {
	BCCH_FACH_MessageType_PR present;
	union BCCH_FACH_MessageType_u {
		SystemInformation_FACH_t	 systemInformation;
		SystemInformationChangeIndication_t	 systemInformationChangeIndication;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_FACH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_FACH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_FACH_MessageType_H_ */
