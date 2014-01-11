/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IDC_SubframePattern_r11_H_
#define	_IDC_SubframePattern_r11_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/lte_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IDC_SubframePattern_r11_PR {
	IDC_SubframePattern_r11_PR_NOTHING,	/* No components present */
	IDC_SubframePattern_r11_PR_subframePatternFDD_r11,
	IDC_SubframePattern_r11_PR_subframePatternTDD_r11,
	/* Extensions may appear below */
	
} IDC_SubframePattern_r11_PR;
typedef enum IDC_SubframePattern_r11__subframePatternTDD_r11_PR {
	IDC_SubframePattern_r11__subframePatternTDD_r11_PR_NOTHING,	/* No components present */
	IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig0_r11,
	IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig1_5_r11,
	IDC_SubframePattern_r11__subframePatternTDD_r11_PR_subframeConfig6_r11
} IDC_SubframePattern_r11__subframePatternTDD_r11_PR;

/* IDC-SubframePattern-r11 */
typedef struct IDC_SubframePattern_r11 {
	IDC_SubframePattern_r11_PR present;
	union IDC_SubframePattern_r11_u {
		BIT_STRING_t	 subframePatternFDD_r11;
		struct IDC_SubframePattern_r11__subframePatternTDD_r11 {
			IDC_SubframePattern_r11__subframePatternTDD_r11_PR present;
			union IDC_SubframePattern_r11__subframePatternTDD_r11_u {
				BIT_STRING_t	 subframeConfig0_r11;
				BIT_STRING_t	 subframeConfig1_5_r11;
				BIT_STRING_t	 subframeConfig6_r11;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} subframePatternTDD_r11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IDC_SubframePattern_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IDC_SubframePattern_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _IDC_SubframePattern_r11_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
