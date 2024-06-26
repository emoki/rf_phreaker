/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_RadioBearerSetup_r7_add_ext_IEs_H_
#define	_RadioBearerSetup_r7_add_ext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/RadioBearerSetup-v7f0ext-IEs.h"
#include "rf_phreaker/umts_rrc_asn_library/RadioBearerSetup-v7g0ext-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioBearerSetup_v7d0ext_IEs;

/* RadioBearerSetup-r7-add-ext-IEs */
typedef struct RadioBearerSetup_r7_add_ext_IEs {
	struct RadioBearerSetup_v7d0ext_IEs	*radioBearerSetup_v7d0ext	/* OPTIONAL */;
	struct RadioBearerSetup_r7_add_ext_IEs__v7f0NonCriticalExtensions {
		RadioBearerSetup_v7f0ext_IEs_t	 radioBearerSetup_v7f0ext;
		struct RadioBearerSetup_r7_add_ext_IEs__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions {
			RadioBearerSetup_v7g0ext_IEs_t	 radioBearerSetup_v7g0ext;
			struct RadioBearerSetup_r7_add_ext_IEs__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v7g0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v7f0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerSetup_r7_add_ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerSetup_r7_add_ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/RadioBearerSetup-v7d0ext-IEs.h"

#endif	/* _RadioBearerSetup_r7_add_ext_IEs_H_ */
