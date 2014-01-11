/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_LogMeasInfo_r10_H_
#define	_LogMeasInfo_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/lte_rrc_asn_library/CellGlobalIdEUTRA.h"
#include "rf_phreaker/lte_rrc_asn_library/RSRP-Range.h"
#include "rf_phreaker/lte_rrc_asn_library/RSRQ-Range.h"
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LocationInfo_r10;
struct MeasResultList2EUTRA_v9e0;
struct MeasResultList2EUTRA_r9;
struct MeasResultList2UTRA_r9;
struct MeasResultList2GERAN_r10;
struct MeasResultList2CDMA2000_r9;

/* LogMeasInfo-r10 */
typedef struct LogMeasInfo_r10 {
	struct LocationInfo_r10	*locationInfo_r10	/* OPTIONAL */;
	long	 relativeTimeStamp_r10;
	CellGlobalIdEUTRA_t	 servCellIdentity_r10;
	struct LogMeasInfo_r10__measResultServCell_r10 {
		RSRP_Range_t	 rsrpResult_r10;
		RSRQ_Range_t	 rsrqResult_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultServCell_r10;
	struct LogMeasInfo_r10__measResultNeighCells_r10 {
		struct MeasResultList2EUTRA_r9	*measResultListEUTRA_r10	/* OPTIONAL */;
		struct MeasResultList2UTRA_r9	*measResultListUTRA_r10	/* OPTIONAL */;
		struct MeasResultList2GERAN_r10	*measResultListGERAN_r10	/* OPTIONAL */;
		struct MeasResultList2CDMA2000_r9	*measResultListCDMA2000_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResultList2EUTRA_v9e0	*measResultListEUTRA_v1090	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasInfo_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/LocationInfo-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasResultList2EUTRA-v9e0.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasResultList2EUTRA-r9.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasResultList2UTRA-r9.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasResultList2GERAN-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/MeasResultList2CDMA2000-r9.h"

#endif	/* _LogMeasInfo_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
