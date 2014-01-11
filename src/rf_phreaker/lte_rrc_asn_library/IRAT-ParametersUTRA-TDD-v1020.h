/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IRAT_ParametersUTRA_TDD_v1020_H_
#define	_IRAT_ParametersUTRA_TDD_v1020_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersUTRA_TDD_v1020__e_RedirectionUTRA_TDD_r10 {
	IRAT_ParametersUTRA_TDD_v1020__e_RedirectionUTRA_TDD_r10_supported	= 0
} e_IRAT_ParametersUTRA_TDD_v1020__e_RedirectionUTRA_TDD_r10;

/* IRAT-ParametersUTRA-TDD-v1020 */
typedef struct IRAT_ParametersUTRA_TDD_v1020 {
	long	 e_RedirectionUTRA_TDD_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_TDD_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_e_RedirectionUTRA_TDD_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_TDD_v1020;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_TDD_v1020_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
