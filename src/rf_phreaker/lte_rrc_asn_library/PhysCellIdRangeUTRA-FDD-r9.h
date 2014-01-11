/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PhysCellIdRangeUTRA_FDD_r9_H_
#define	_PhysCellIdRangeUTRA_FDD_r9_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/PhysCellIdUTRA-FDD.h"
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PhysCellIdRangeUTRA-FDD-r9 */
typedef struct PhysCellIdRangeUTRA_FDD_r9 {
	PhysCellIdUTRA_FDD_t	 start_r9;
	long	*range_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdRangeUTRA_FDD_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdRangeUTRA_FDD_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdRangeUTRA_FDD_r9_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
