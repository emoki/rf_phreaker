/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RLC_Info_MCCH_r6_H_
#define	_RLC_Info_MCCH_r6_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DL-UM-RLC-LI-size.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UM_RLC_OutOSeqDelivery_Info_r6;

/* RLC-Info-MCCH-r6 */
typedef struct RLC_Info_MCCH_r6 {
	DL_UM_RLC_LI_size_t	 dl_UM_RLC_LI_size;
	struct UM_RLC_OutOSeqDelivery_Info_r6	*dl_UM_RLC_OutOSeqDelivery_Info	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Info_MCCH_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Info_MCCH_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/UM-RLC-OutOSeqDelivery-Info-r6.h"

#endif	/* _RLC_Info_MCCH_r6_H_ */
