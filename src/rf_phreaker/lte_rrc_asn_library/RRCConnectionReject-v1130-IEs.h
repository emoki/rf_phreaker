/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReject_v1130_IEs_H_
#define	_RRCConnectionReject_v1130_IEs_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationType_r11 {
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationType_r11_frequency	= 0,
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationType_r11_e_utra	= 1
} e_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationType_r11;
typedef enum RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11 {
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11_min5	= 0,
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11_min10	= 1,
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11_min15	= 2,
	RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11_min30	= 3
} e_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11__deprioritisationTimer_r11;

/* RRCConnectionReject-v1130-IEs */
typedef struct RRCConnectionReject_v1130_IEs {
	struct RRCConnectionReject_v1130_IEs__deprioritisationReq_r11 {
		long	 deprioritisationType_r11;
		long	 deprioritisationTimer_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *deprioritisationReq_r11;
	struct RRCConnectionReject_v1130_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_v1130_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deprioritisationType_r11_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deprioritisationTimer_r11_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_v1130_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_v1130_IEs_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
