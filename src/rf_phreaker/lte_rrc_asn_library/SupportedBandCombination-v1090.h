/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_SupportedBandCombination_v1090_H_
#define	_SupportedBandCombination_v1090_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BandCombinationParameters_v1090;

/* SupportedBandCombination-v1090 */
typedef struct SupportedBandCombination_v1090 {
	A_SEQUENCE_OF(struct BandCombinationParameters_v1090) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandCombination_v1090_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandCombination_v1090;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/BandCombinationParameters-v1090.h"

#endif	/* _SupportedBandCombination_v1090_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
