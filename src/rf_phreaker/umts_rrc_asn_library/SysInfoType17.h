/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_SysInfoType17_H_
#define	_SysInfoType17_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/SysInfoType17-v4b0ext-IEs.h"
#include "rf_phreaker/umts_rrc_asn_library/SysInfoType17-v770ext-IEs.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_SysInfoList;
struct PDSCH_SysInfoList;
struct SysInfoType17_v590ext_IEs;

/* SysInfoType17 */
typedef struct SysInfoType17 {
	struct PUSCH_SysInfoList	*pusch_SysInfoList	/* OPTIONAL */;
	struct PDSCH_SysInfoList	*pdsch_SysInfoList	/* OPTIONAL */;
	struct SysInfoType17__v4b0NonCriticalExtensions {
		SysInfoType17_v4b0ext_IEs_t	 sysInfoType17_v4b0ext;
		struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions {
			struct SysInfoType17_v590ext_IEs	*sysInfoType17_v590ext	/* OPTIONAL */;
			struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions {
				SysInfoType17_v770ext_IEs_t	 sysInfoType17_v770ext;
				struct SysInfoType17__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v770NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v590NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v4b0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType17;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/PUSCH-SysInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/PDSCH-SysInfoList.h"
#include "rf_phreaker/umts_rrc_asn_library/SysInfoType17-v590ext-IEs.h"

#endif	/* _SysInfoType17_H_ */
