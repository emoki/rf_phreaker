/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_GANSS_Storm_Flag_H_
#define	_GANSS_Storm_Flag_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BOOLEAN.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSS-Storm-Flag */
typedef struct GANSS_Storm_Flag {
	BOOLEAN_t	 storm_flag_one;
	BOOLEAN_t	 storm_flag_two;
	BOOLEAN_t	 storm_flag_three;
	BOOLEAN_t	 storm_flag_four;
	BOOLEAN_t	 storm_flag_five;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_Storm_Flag_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_Storm_Flag;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSS_Storm_Flag_H_ */
