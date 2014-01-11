/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_NeighCellSI_AcquisitionCapability_H_
#define	_NeighCellSI_AcquisitionCapability_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighCellSI_AcquisitionCapability__supportOfIntraFreqSIAcquisitionForHO {
	NeighCellSI_AcquisitionCapability__supportOfIntraFreqSIAcquisitionForHO_true	= 0
} e_NeighCellSI_AcquisitionCapability__supportOfIntraFreqSIAcquisitionForHO;
typedef enum NeighCellSI_AcquisitionCapability__supportOfInterFreqSIAcquisitionForHO {
	NeighCellSI_AcquisitionCapability__supportOfInterFreqSIAcquisitionForHO_true	= 0
} e_NeighCellSI_AcquisitionCapability__supportOfInterFreqSIAcquisitionForHO;
typedef enum NeighCellSI_AcquisitionCapability__supportOfE_UtraSIAcquisitionForHO {
	NeighCellSI_AcquisitionCapability__supportOfE_UtraSIAcquisitionForHO_true	= 0
} e_NeighCellSI_AcquisitionCapability__supportOfE_UtraSIAcquisitionForHO;

/* NeighCellSI-AcquisitionCapability */
typedef struct NeighCellSI_AcquisitionCapability {
	long	*supportOfIntraFreqSIAcquisitionForHO	/* OPTIONAL */;
	long	*supportOfInterFreqSIAcquisitionForHO	/* OPTIONAL */;
	long	*supportOfE_UtraSIAcquisitionForHO	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellSI_AcquisitionCapability_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfIntraFreqSIAcquisitionForHO_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfInterFreqSIAcquisitionForHO_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfE_UtraSIAcquisitionForHO_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionCapability;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellSI_AcquisitionCapability_H_ */
