/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_TPC_PDCCH_Config_H_
#define	_TPC_PDCCH_Config_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include "rf_phreaker/lte_rrc_asn_library/TPC-Index.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TPC_PDCCH_Config_PR {
	TPC_PDCCH_Config_PR_NOTHING,	/* No components present */
	TPC_PDCCH_Config_PR_release,
	TPC_PDCCH_Config_PR_setup
} TPC_PDCCH_Config_PR;

/* TPC-PDCCH-Config */
typedef struct TPC_PDCCH_Config {
	TPC_PDCCH_Config_PR present;
	union TPC_PDCCH_Config_u {
		NULL_t	 release;
		struct TPC_PDCCH_Config__setup {
			BIT_STRING_t	 tpc_RNTI;
			TPC_Index_t	 tpc_Index;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TPC_PDCCH_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TPC_PDCCH_Config;

#ifdef __cplusplus
}
#endif

#endif	/* _TPC_PDCCH_Config_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
