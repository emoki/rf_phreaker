/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_LoggedMeasInfo_FDD_H_
#define	_LoggedMeasInfo_FDD_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasServingCellMeas-FDD.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LoggedMeasIntrafreqNeighbourList_FDD;
struct LoggedMeasInterfreqList_FDD;
struct LoggedMeasInterRATNeighbourMeas;
struct LoggedMeasLocationInfo;

/* LoggedMeasInfo-FDD */
typedef struct LoggedMeasInfo_FDD {
	long	 relativeTimeStamp;
	LoggedMeasServingCellMeas_FDD_t	 loggedMeasServingCellMeas_FDD;
	struct LoggedMeasIntrafreqNeighbourList_FDD	*loggedMeasIntrafreqNeighbourList_FDD	/* OPTIONAL */;
	struct LoggedMeasInterfreqList_FDD	*loggedMeasInterfreqList_FDD	/* OPTIONAL */;
	struct LoggedMeasInterRATNeighbourMeas	*loggedMeasInterRATNeighbourMeas	/* OPTIONAL */;
	struct LoggedMeasLocationInfo	*loggedMeasLocationInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasInfo_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasInfo_FDD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasIntrafreqNeighbourList-FDD.h"
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasInterfreqList-FDD.h"
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasInterRATNeighbourMeas.h"
#include "rf_phreaker/umts_rrc_asn_library/LoggedMeasLocationInfo.h"

#endif	/* _LoggedMeasInfo_FDD_H_ */
