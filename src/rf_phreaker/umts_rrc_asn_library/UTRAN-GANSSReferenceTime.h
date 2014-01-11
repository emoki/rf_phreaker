/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_UTRAN_GANSSReferenceTime_H_
#define	_UTRAN_GANSSReferenceTime_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include "rf_phreaker/umts_rrc_asn_library/PrimaryCPICH-Info.h"
#include "rf_phreaker/umts_rrc_asn_library/CellParametersID.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UTRAN_GANSSReferenceTime__mode_PR {
	UTRAN_GANSSReferenceTime__mode_PR_NOTHING,	/* No components present */
	UTRAN_GANSSReferenceTime__mode_PR_fdd,
	UTRAN_GANSSReferenceTime__mode_PR_tdd
} UTRAN_GANSSReferenceTime__mode_PR;

/* UTRAN-GANSSReferenceTime */
typedef struct UTRAN_GANSSReferenceTime {
	struct UTRAN_GANSSReferenceTime__ue_GANSSTimingOfCellFrames {
		long	 ms_Part;
		unsigned long	 ls_Part;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ue_GANSSTimingOfCellFrames;
	long	*gANSS_TimeId	/* OPTIONAL */;
	long	*gANSS_TimeUncertainty	/* OPTIONAL */;
	struct UTRAN_GANSSReferenceTime__mode {
		UTRAN_GANSSReferenceTime__mode_PR present;
		union UTRAN_GANSSReferenceTime__mode_u {
			struct UTRAN_GANSSReferenceTime__mode__fdd {
				PrimaryCPICH_Info_t	 primary_CPICH_Info;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UTRAN_GANSSReferenceTime__mode__tdd {
				CellParametersID_t	 cellParameters;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mode;
	long	 referenceSfn;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRAN_GANSSReferenceTime_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ls_Part_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UTRAN_GANSSReferenceTime;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRAN_GANSSReferenceTime_H_ */
