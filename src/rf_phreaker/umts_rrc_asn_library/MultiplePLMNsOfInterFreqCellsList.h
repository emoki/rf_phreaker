/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_MultiplePLMNsOfInterFreqCellsList_H_
#define	_MultiplePLMNsOfInterFreqCellsList_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/asn_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE_OF.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityWithOptionalMCC_r6;

typedef	struct MultiplePLMNsOfInterFreqCellsList__Member {
			struct multiplePLMN_list_inter {
			
				A_SEQUENCE_OF(struct PLMN_IdentityWithOptionalMCC_r6) list;
			
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *multiplePLMN_list;
		
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} MultiplePLMNsOfInterFreqCellsList__Member_t;



typedef struct MultiplePLMNsOfInterFreqCellsList {
	A_SEQUENCE_OF(struct MultiplePLMNsOfInterFreqCellsList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiplePLMNsOfInterFreqCellsList_t;




//typedef struct MultiplePLMNsOfInterFreqCellsList {
//	A_SEQUENCE_OF(struct MultiplePLMNsOfInterFreqCellsList__Member {
//		struct multiplePLMN_list {
//			
//			A_SEQUENCE_OF(struct PLMN_IdentityWithOptionalMCC_r6) list;
//			
//			/* Context for parsing across buffer boundaries */
//			asn_struct_ctx_t _asn_ctx;
//		} *multiplePLMN_list;
//		
//		/* Context for parsing across buffer boundaries */
//		asn_struct_ctx_t _asn_ctx;
//	} ) list;
//	
//	/* Context for parsing across buffer boundaries */
//	asn_struct_ctx_t _asn_ctx;
//} MultiplePLMNsOfInterFreqCellsList_t;


/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiplePLMNsOfInterFreqCellsList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PLMN-IdentityWithOptionalMCC-r6.h"

#endif	/* _MultiplePLMNsOfInterFreqCellsList_H_ */
