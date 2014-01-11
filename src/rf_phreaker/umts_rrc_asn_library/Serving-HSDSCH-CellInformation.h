/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_Serving_HSDSCH_CellInformation_H_
#define	_Serving_HSDSCH_CellInformation_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/DeltaACK.h"
#include "rf_phreaker/umts_rrc_asn_library/DeltaNACK.h"
#include "rf_phreaker/umts_rrc_asn_library/HARQ-Preamble-Mode.h"
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Serving_HSDSCH_CellInformation__mac_hsResetIndicator {
	Serving_HSDSCH_CellInformation__mac_hsResetIndicator_true	= 0
} e_Serving_HSDSCH_CellInformation__mac_hsResetIndicator;

/* Forward declarations */
struct PrimaryCPICH_Info;
struct DL_HSPDSCH_Information;
struct HARQ_Info;

/* Serving-HSDSCH-CellInformation */
typedef struct Serving_HSDSCH_CellInformation {
	DeltaACK_t	*deltaACK	/* OPTIONAL */;
	DeltaNACK_t	*deltaNACK	/* OPTIONAL */;
	HARQ_Preamble_Mode_t	 harq_Preamble_Mode;
	struct PrimaryCPICH_Info	*primaryCPICH_Info	/* OPTIONAL */;
	struct DL_HSPDSCH_Information	*dl_hspdsch_Information	/* OPTIONAL */;
	struct HARQ_Info	*harqInfo	/* OPTIONAL */;
	long	*mac_hsResetIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Serving_HSDSCH_CellInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_hsResetIndicator_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Serving_HSDSCH_CellInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-HSPDSCH-Information.h"
#include "rf_phreaker/umts_rrc_asn_library/HARQ-Info.h"

#endif	/* _Serving_HSDSCH_CellInformation_H_ */
