/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MBMS_MSCHSchedulingInfo_H_
#define	_MBMS_MSCHSchedulingInfo_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBMS_MSCHSchedulingInfo_PR {
	MBMS_MSCHSchedulingInfo_PR_NOTHING,	/* No components present */
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_32_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_64_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_128_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_256_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_512_Offset,
	MBMS_MSCHSchedulingInfo_PR_schedulingPeriod_1024_Offset
} MBMS_MSCHSchedulingInfo_PR;

/* MBMS-MSCHSchedulingInfo */
typedef struct MBMS_MSCHSchedulingInfo {
	MBMS_MSCHSchedulingInfo_PR present;
	union MBMS_MSCHSchedulingInfo_u {
		long	 schedulingPeriod_32_Offset;
		long	 schedulingPeriod_64_Offset;
		long	 schedulingPeriod_128_Offset;
		long	 schedulingPeriod_256_Offset;
		long	 schedulingPeriod_512_Offset;
		long	 schedulingPeriod_1024_Offset;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_MSCHSchedulingInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_MSCHSchedulingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_MSCHSchedulingInfo_H_ */
