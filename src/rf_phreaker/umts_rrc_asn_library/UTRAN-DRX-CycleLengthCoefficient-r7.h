/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UTRAN_DRX_CycleLengthCoefficient_r7_H_
#define	_UTRAN_DRX_CycleLengthCoefficient_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/T-319.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTRAN-DRX-CycleLengthCoefficient-r7 */
typedef struct UTRAN_DRX_CycleLengthCoefficient_r7 {
	long	 drx_CycleLengthCoefficient;
	long	*drx_CycleLengthCoefficient2	/* OPTIONAL */;
	T_319_t	*timeForDRXCycle2	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRAN_DRX_CycleLengthCoefficient_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRAN_DRX_CycleLengthCoefficient_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRAN_DRX_CycleLengthCoefficient_r7_H_ */
