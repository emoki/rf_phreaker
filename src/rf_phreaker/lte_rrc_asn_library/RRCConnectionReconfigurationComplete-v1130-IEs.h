/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_RRCConnectionReconfigurationComplete_v1130_IEs_H_
#define	_RRCConnectionReconfigurationComplete_v1130_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11 {
	RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11_true	= 0
} e_RRCConnectionReconfigurationComplete_v1130_IEs__connEstFailInfoAvailable_r11;

/* RRCConnectionReconfigurationComplete-v1130-IEs */
typedef struct RRCConnectionReconfigurationComplete_v1130_IEs {
	long	*connEstFailInfoAvailable_r11	/* OPTIONAL */;
	struct RRCConnectionReconfigurationComplete_v1130_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfigurationComplete_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connEstFailInfoAvailable_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfigurationComplete_v1130_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReconfigurationComplete_v1130_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
