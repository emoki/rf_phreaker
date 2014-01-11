/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PUSCH_ConfigDedicated_v1130_H_
#define	_PUSCH_ConfigDedicated_v1130_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR {
	PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_NOTHING,	/* No components present */
	PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_release,
	PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_setup
} PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR;

/* PUSCH-ConfigDedicated-v1130 */
typedef struct PUSCH_ConfigDedicated_v1130 {
	struct PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11 {
		PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR present;
		union PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_u {
			NULL_t	 release;
			struct PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup {
				long	 nPUSCH_Identity_r11;
				long	 nDMRS_CSH_Identity_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pusch_DMRS_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicated_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicated_v1130_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
