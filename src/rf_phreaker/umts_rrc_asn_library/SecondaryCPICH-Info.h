/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SecondaryCPICH_Info_H_
#define	_SecondaryCPICH_Info_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryScramblingCode.h"
#include "rf_phreaker/umts_rrc_asn_library/ChannelisationCode256.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecondaryCPICH-Info */
typedef struct SecondaryCPICH_Info {
	SecondaryScramblingCode_t	*secondaryDL_ScramblingCode	/* OPTIONAL */;
	ChannelisationCode256_t	 channelisationCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryCPICH_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryCPICH_Info;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryCPICH_Info_H_ */
