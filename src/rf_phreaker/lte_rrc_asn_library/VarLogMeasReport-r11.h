/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "EUTRA-UE-Variables.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_VarLogMeasReport_r11_H_
#define	_VarLogMeasReport_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/lte_rrc_asn_library/TraceReference-r10.h"
#include <rf_phreaker/lte_rrc_asn_library/OCTET_STRING.h>
#include "rf_phreaker/lte_rrc_asn_library/PLMN-IdentityList3-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/AbsoluteTimeInfo-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/LogMeasInfoList2-r10.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VarLogMeasReport-r11 */
typedef struct VarLogMeasReport_r11 {
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	PLMN_IdentityList3_r11_t	 plmn_IdentityList_r11;
	AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	LogMeasInfoList2_r10_t	 logMeasInfoList_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarLogMeasReport_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarLogMeasReport_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _VarLogMeasReport_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
