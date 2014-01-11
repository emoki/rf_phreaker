/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RRCConnectionRequest_v940ext_IEs_H_
#define	_RRCConnectionRequest_v940ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionRequest_v940ext_IEs__systemInformationContainerStoredIndicator {
	RRCConnectionRequest_v940ext_IEs__systemInformationContainerStoredIndicator_true	= 0
} e_RRCConnectionRequest_v940ext_IEs__systemInformationContainerStoredIndicator;

/* RRCConnectionRequest-v940ext-IEs */
typedef struct RRCConnectionRequest_v940ext_IEs {
	long	*systemInformationContainerStoredIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_v940ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_systemInformationContainerStoredIndicator_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest_v940ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionRequest_v940ext_IEs_H_ */
