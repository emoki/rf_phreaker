/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RadioBearerSetup_v950ext_IEs_H_
#define	_RadioBearerSetup_v950ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecondaryCellMIMOparametersFDD_v950ext;

/* RadioBearerSetup-v950ext-IEs */
typedef struct RadioBearerSetup_v950ext_IEs {
	struct SecondaryCellMIMOparametersFDD_v950ext	*secondaryCellMimoParameters	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_v950ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_v950ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryCellMIMOparametersFDD-v950ext.h"

#endif	/* _RadioBearerSetup_v950ext_IEs_H_ */
