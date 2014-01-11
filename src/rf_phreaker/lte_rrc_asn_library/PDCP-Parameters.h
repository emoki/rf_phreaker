/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PDCP_Parameters_H_
#define	_PDCP_Parameters_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/lte_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Parameters__maxNumberROHC_ContextSessions {
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs2	= 0,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs4	= 1,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs8	= 2,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs12	= 3,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs16	= 4,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs24	= 5,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs32	= 6,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs48	= 7,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs64	= 8,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs128	= 9,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs256	= 10,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs512	= 11,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs1024	= 12,
	PDCP_Parameters__maxNumberROHC_ContextSessions_cs16384	= 13,
	PDCP_Parameters__maxNumberROHC_ContextSessions_spare2	= 14,
	PDCP_Parameters__maxNumberROHC_ContextSessions_spare1	= 15
} e_PDCP_Parameters__maxNumberROHC_ContextSessions;

/* PDCP-Parameters */
typedef struct PDCP_Parameters {
	struct PDCP_Parameters__supportedROHC_Profiles {
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
	} supportedROHC_Profiles;
	long	*maxNumberROHC_ContextSessions	/* DEFAULT 4 */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberROHC_ContextSessions_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Parameters;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Parameters_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
