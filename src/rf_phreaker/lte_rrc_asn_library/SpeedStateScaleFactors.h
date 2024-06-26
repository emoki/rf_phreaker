/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SpeedStateScaleFactors_H_
#define	_SpeedStateScaleFactors_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedStateScaleFactors__sf_Medium {
	SpeedStateScaleFactors__sf_Medium_oDot25	= 0,
	SpeedStateScaleFactors__sf_Medium_oDot5	= 1,
	SpeedStateScaleFactors__sf_Medium_oDot75	= 2,
	SpeedStateScaleFactors__sf_Medium_lDot0	= 3
} e_SpeedStateScaleFactors__sf_Medium;
typedef enum SpeedStateScaleFactors__sf_High {
	SpeedStateScaleFactors__sf_High_oDot25	= 0,
	SpeedStateScaleFactors__sf_High_oDot5	= 1,
	SpeedStateScaleFactors__sf_High_oDot75	= 2,
	SpeedStateScaleFactors__sf_High_lDot0	= 3
} e_SpeedStateScaleFactors__sf_High;

/* SpeedStateScaleFactors */
typedef struct SpeedStateScaleFactors {
	long	 sf_Medium;
	long	 sf_High;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedStateScaleFactors_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_Medium_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sf_High_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SpeedStateScaleFactors;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedStateScaleFactors_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
