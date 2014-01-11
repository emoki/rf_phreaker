/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MBSFNAreaConfiguration_v930_IEs_H_
#define	_MBSFNAreaConfiguration_v930_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBSFNAreaConfiguration-v930-IEs */
typedef struct MBSFNAreaConfiguration_v930_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct MBSFNAreaConfiguration_v930_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFNAreaConfiguration_v930_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFNAreaConfiguration_v930_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFNAreaConfiguration_v930_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
