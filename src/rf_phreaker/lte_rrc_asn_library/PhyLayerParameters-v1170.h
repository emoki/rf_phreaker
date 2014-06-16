/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhyLayerParameters_v1170_H_
#define	_PhyLayerParameters_v1170_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhyLayerParameters-v1170 */
typedef struct PhyLayerParameters_v1170 {
	BIT_STRING_t	*interBandTDD_CA_WithDifferentConfig_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1170_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1170;

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1170_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>