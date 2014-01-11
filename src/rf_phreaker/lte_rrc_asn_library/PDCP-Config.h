/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PDCP_Config_H_
#define	_PDCP_Config_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/lte_rrc_asn_library/NULL.h>
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Config__discardTimer {
	PDCP_Config__discardTimer_ms50	= 0,
	PDCP_Config__discardTimer_ms100	= 1,
	PDCP_Config__discardTimer_ms150	= 2,
	PDCP_Config__discardTimer_ms300	= 3,
	PDCP_Config__discardTimer_ms500	= 4,
	PDCP_Config__discardTimer_ms750	= 5,
	PDCP_Config__discardTimer_ms1500	= 6,
	PDCP_Config__discardTimer_infinity	= 7
} e_PDCP_Config__discardTimer;
typedef enum PDCP_Config__rlc_UM__pdcp_SN_Size {
	PDCP_Config__rlc_UM__pdcp_SN_Size_len7bits	= 0,
	PDCP_Config__rlc_UM__pdcp_SN_Size_len12bits	= 1
} e_PDCP_Config__rlc_UM__pdcp_SN_Size;
typedef enum PDCP_Config__headerCompression_PR {
	PDCP_Config__headerCompression_PR_NOTHING,	/* No components present */
	PDCP_Config__headerCompression_PR_notUsed,
	PDCP_Config__headerCompression_PR_rohc
} PDCP_Config__headerCompression_PR;
typedef enum PDCP_Config__rn_IntegrityProtection_r10 {
	PDCP_Config__rn_IntegrityProtection_r10_enabled	= 0
} e_PDCP_Config__rn_IntegrityProtection_r10;
typedef enum PDCP_Config__pdcp_SN_Size_v1130 {
	PDCP_Config__pdcp_SN_Size_v1130_len15bits	= 0
} e_PDCP_Config__pdcp_SN_Size_v1130;

/* PDCP-Config */
typedef struct PDCP_Config {
	long	*discardTimer	/* OPTIONAL */;
	struct PDCP_Config__rlc_AM {
		BOOLEAN_t	 statusReportRequired;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_AM;
	struct PDCP_Config__rlc_UM {
		long	 pdcp_SN_Size;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_UM;
	struct PDCP_Config__headerCompression {
		PDCP_Config__headerCompression_PR present;
		union PDCP_Config__headerCompression_u {
			NULL_t	 notUsed;
			struct PDCP_Config__headerCompression__rohc {
				long	*maxCID	/* DEFAULT 15 */;
				struct PDCP_Config__headerCompression__rohc__profiles {
					BOOLEAN_t	 profile0x0001;
					BOOLEAN_t	 profile0x0002;
					BOOLEAN_t	 profile0x0003;
					BOOLEAN_t	 profile0x0004;
					BOOLEAN_t	 profile0x0006;
					BOOLEAN_t	 profile0x0101;
					BOOLEAN_t	 profile0x0102;
					BOOLEAN_t	 profile0x0103;
					BOOLEAN_t	 profile0x0104;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} rohc;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} headerCompression;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*rn_IntegrityProtection_r10	/* OPTIONAL */;
	long	*pdcp_SN_Size_v1130	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discardTimer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rn_IntegrityProtection_r10_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcp_SN_Size_v1130_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Config;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Config_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
