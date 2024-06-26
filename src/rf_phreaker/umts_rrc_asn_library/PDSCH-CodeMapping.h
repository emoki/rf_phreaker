/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_PDSCH_CodeMapping_H_
#define	_PDSCH_CodeMapping_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SecondaryScramblingCode.h"
#include "rf_phreaker/umts_rrc_asn_library/CodeRange.h"
#include "rf_phreaker/umts_rrc_asn_library/DSCH-MappingList.h"
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-CodeInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/ReplacedPDSCH-CodeInfoList.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_CodeMapping__signallingMethod_PR {
	PDSCH_CodeMapping__signallingMethod_PR_NOTHING,	/* No components present */
	PDSCH_CodeMapping__signallingMethod_PR_codeRange,
	PDSCH_CodeMapping__signallingMethod_PR_tfci_Range,
	PDSCH_CodeMapping__signallingMethod_PR_explicit_config,
	PDSCH_CodeMapping__signallingMethod_PR_replace
} PDSCH_CodeMapping__signallingMethod_PR;

/* PDSCH-CodeMapping */
typedef struct PDSCH_CodeMapping {
	SecondaryScramblingCode_t	*dl_ScramblingCode	/* OPTIONAL */;
	struct PDSCH_CodeMapping__signallingMethod {
		PDSCH_CodeMapping__signallingMethod_PR present;
		union PDSCH_CodeMapping__signallingMethod_u {
			CodeRange_t	 codeRange;
			DSCH_MappingList_t	 tfci_Range;
			PDSCH_CodeInfoList_t	 explicit_config;
			ReplacedPDSCH_CodeInfoList_t	 replace;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} signallingMethod;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_CodeMapping_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_CodeMapping;

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_CodeMapping_H_ */
