/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DataVolumeHistory_H_
#define	_DataVolumeHistory_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DataTransmFrequency;
struct DataVolumePerRB_List;

/* DataVolumeHistory */
typedef struct DataVolumeHistory {
	long	 dataVolumeMontoringWindow;
	struct DataTransmFrequency	*dataTransmFrequency	/* OPTIONAL */;
	struct DataVolumePerRB_List	*dataVolumePerRB	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DataVolumeHistory_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DataVolumeHistory;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/DataTransmFrequency.h"
#include "rf_phreaker/umts_rrc_asn_library/DataVolumePerRB-List.h"

#endif	/* _DataVolumeHistory_H_ */
