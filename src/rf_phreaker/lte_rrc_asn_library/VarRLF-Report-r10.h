/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "EUTRA-UE-Variables.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_VarRLF_Report_r10_H_
#define	_VarRLF_Report_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/RLF-Report-r9.h"
#include "rf_phreaker/lte_rrc_asn_library/PLMN-Identity.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarRLF-Report-r10 */
typedef struct VarRLF_Report_r10 {
	RLF_Report_r9_t	 rlf_Report_r10;
	PLMN_Identity_t	 plmn_Identity_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarRLF_Report_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarRLF_Report_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _VarRLF_Report_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>