/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_AccessServiceClass_FDD_H_
#define	_AccessServiceClass_FDD_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessServiceClass_FDD__assignedSubChannelNumber {
	AccessServiceClass_FDD__assignedSubChannelNumber_b3	= 0,
	AccessServiceClass_FDD__assignedSubChannelNumber_b2	= 1,
	AccessServiceClass_FDD__assignedSubChannelNumber_b1	= 2,
	AccessServiceClass_FDD__assignedSubChannelNumber_b0	= 3
} e_AccessServiceClass_FDD__assignedSubChannelNumber;

/* AccessServiceClass-FDD */
typedef struct AccessServiceClass_FDD {
	long	 availableSignatureStartIndex;
	long	 availableSignatureEndIndex;
	BIT_STRING_t	 assignedSubChannelNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessServiceClass_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_FDD;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessServiceClass_FDD_H_ */
