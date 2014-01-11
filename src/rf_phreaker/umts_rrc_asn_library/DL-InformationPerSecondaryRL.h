/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_DL_InformationPerSecondaryRL_H_
#define	_DL_InformationPerSecondaryRL_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/CellIdentity.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-FDPCH-InfoPerRL-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RGCH-Information.h"
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_InformationPerSecondaryRL__e_RGCH_Info_PR {
	DL_InformationPerSecondaryRL__e_RGCH_Info_PR_NOTHING,	/* No components present */
	DL_InformationPerSecondaryRL__e_RGCH_Info_PR_e_RGCH_Information,
	DL_InformationPerSecondaryRL__e_RGCH_Info_PR_releaseIndicator
} DL_InformationPerSecondaryRL__e_RGCH_Info_PR;

/* Forward declarations */
struct E_AGCH_Information;
struct E_HICH_Information;

/* DL-InformationPerSecondaryRL */
typedef struct DL_InformationPerSecondaryRL {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	CellIdentity_t	*cell_id	/* OPTIONAL */;
	DL_FDPCH_InfoPerRL_r7_t	 dl_FDPCHInfoPerRL_SecULFreq;
	struct E_AGCH_Information	*e_AGCH_Information	/* OPTIONAL */;
	struct E_HICH_Information	*e_HICH_Information	/* OPTIONAL */;
	struct DL_InformationPerSecondaryRL__e_RGCH_Info {
		DL_InformationPerSecondaryRL__e_RGCH_Info_PR present;
		union DL_InformationPerSecondaryRL__e_RGCH_Info_u {
			E_RGCH_Information_t	 e_RGCH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_RGCH_Info;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerSecondaryRL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerSecondaryRL;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/E-AGCH-Information.h"
#include "rf_phreaker/umts_rrc_asn_library/E-HICH-Information.h"

#endif	/* _DL_InformationPerSecondaryRL_H_ */
