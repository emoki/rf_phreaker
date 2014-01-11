/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SIB_TypeExtGANSS_H_
#define	_SIB_TypeExtGANSS_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB_TypeExtGANSS_PR {
	SIB_TypeExtGANSS_PR_NOTHING,	/* No components present */
	SIB_TypeExtGANSS_PR_systemInfoType15_1bis,
	SIB_TypeExtGANSS_PR_systemInfoType15_2bis,
	SIB_TypeExtGANSS_PR_systemInfoType15_2ter,
	SIB_TypeExtGANSS_PR_systemInfoType15_3bis,
	SIB_TypeExtGANSS_PR_systemInfoType15_6,
	SIB_TypeExtGANSS_PR_systemInfoType15_7,
	SIB_TypeExtGANSS_PR_systemInfoType15_8,
	SIB_TypeExtGANSS_PR_spare9,
	SIB_TypeExtGANSS_PR_spare8,
	SIB_TypeExtGANSS_PR_spare7,
	SIB_TypeExtGANSS_PR_spare6,
	SIB_TypeExtGANSS_PR_spare5,
	SIB_TypeExtGANSS_PR_spare4,
	SIB_TypeExtGANSS_PR_spare3,
	SIB_TypeExtGANSS_PR_spare2,
	SIB_TypeExtGANSS_PR_spare1
} SIB_TypeExtGANSS_PR;

/* SIB-TypeExtGANSS */
typedef struct SIB_TypeExtGANSS {
	SIB_TypeExtGANSS_PR present;
	union SIB_TypeExtGANSS_u {
		NULL_t	 systemInfoType15_1bis;
		NULL_t	 systemInfoType15_2bis;
		NULL_t	 systemInfoType15_2ter;
		NULL_t	 systemInfoType15_3bis;
		NULL_t	 systemInfoType15_6;
		NULL_t	 systemInfoType15_7;
		NULL_t	 systemInfoType15_8;
		NULL_t	 spare9;
		NULL_t	 spare8;
		NULL_t	 spare7;
		NULL_t	 spare6;
		NULL_t	 spare5;
		NULL_t	 spare4;
		NULL_t	 spare3;
		NULL_t	 spare2;
		NULL_t	 spare1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_TypeExtGANSS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_TypeExtGANSS;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_TypeExtGANSS_H_ */
