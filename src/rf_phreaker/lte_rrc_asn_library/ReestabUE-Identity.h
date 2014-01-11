/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_ReestabUE_Identity_H_
#define	_ReestabUE_Identity_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/C-RNTI.h"
#include "rf_phreaker/lte_rrc_asn_library/PhysCellId.h"
#include "rf_phreaker/lte_rrc_asn_library/ShortMAC-I.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReestabUE-Identity */
typedef struct ReestabUE_Identity {
	C_RNTI_t	 c_RNTI;
	PhysCellId_t	 physCellId;
	ShortMAC_I_t	 shortMAC_I;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReestabUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReestabUE_Identity;

#ifdef __cplusplus
}
#endif

#endif	/* _ReestabUE_Identity_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
