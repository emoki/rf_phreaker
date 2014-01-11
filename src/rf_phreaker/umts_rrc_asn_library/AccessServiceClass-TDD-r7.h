/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_AccessServiceClass_TDD_r7_H_
#define	_AccessServiceClass_TDD_r7_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/BIT_STRING.h>
#include <rf_phreaker/umts_rrc_asn_library/NULL.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessServiceClass_TDD_r7__channelisationCodeIndices {
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex15	= 0,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex14	= 1,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex13	= 2,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex12	= 3,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex11	= 4,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex10	= 5,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex9	= 6,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex8	= 7,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex7	= 8,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex6	= 9,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex5	= 10,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex4	= 11,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex3	= 12,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex2	= 13,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex1	= 14,
	AccessServiceClass_TDD_r7__channelisationCodeIndices_chCodeIndex0	= 15
} e_AccessServiceClass_TDD_r7__channelisationCodeIndices;
typedef enum AccessServiceClass_TDD_r7__subchannelSize_PR {
	AccessServiceClass_TDD_r7__subchannelSize_PR_NOTHING,	/* No components present */
	AccessServiceClass_TDD_r7__subchannelSize_PR_size1,
	AccessServiceClass_TDD_r7__subchannelSize_PR_size2,
	AccessServiceClass_TDD_r7__subchannelSize_PR_size4,
	AccessServiceClass_TDD_r7__subchannelSize_PR_size8,
	AccessServiceClass_TDD_r7__subchannelSize_PR_size16
} AccessServiceClass_TDD_r7__subchannelSize_PR;
typedef enum AccessServiceClass_TDD_r7__subchannelSize__size2__subchannels {
	AccessServiceClass_TDD_r7__subchannelSize__size2__subchannels_subch0	= 0,
	AccessServiceClass_TDD_r7__subchannelSize__size2__subchannels_subch1	= 1
} e_AccessServiceClass_TDD_r7__subchannelSize__size2__subchannels;
typedef enum AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels {
	AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels_subCh3	= 0,
	AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels_subCh2	= 1,
	AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels_subCh1	= 2,
	AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels_subCh0	= 3
} e_AccessServiceClass_TDD_r7__subchannelSize__size4__subchannels;
typedef enum AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels {
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh7	= 0,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh6	= 1,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh5	= 2,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh4	= 3,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh3	= 4,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh2	= 5,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh1	= 6,
	AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels_subCh0	= 7
} e_AccessServiceClass_TDD_r7__subchannelSize__size8__subchannels;
typedef enum AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels {
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh15	= 0,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh14	= 1,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh13	= 2,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh12	= 3,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh11	= 4,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh10	= 5,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh9	= 6,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh8	= 7,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh7	= 8,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh6	= 9,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh5	= 10,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh4	= 11,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh3	= 12,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh2	= 13,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh1	= 14,
	AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels_subCh0	= 15
} e_AccessServiceClass_TDD_r7__subchannelSize__size16__subchannels;

/* AccessServiceClass-TDD-r7 */
typedef struct AccessServiceClass_TDD_r7 {
	BIT_STRING_t	*channelisationCodeIndices	/* OPTIONAL */;
	struct AccessServiceClass_TDD_r7__subchannelSize {
		AccessServiceClass_TDD_r7__subchannelSize_PR present;
		union AccessServiceClass_TDD_r7__subchannelSize_u {
			NULL_t	 size1;
			struct AccessServiceClass_TDD_r7__subchannelSize__size2 {
				long	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size2;
			struct AccessServiceClass_TDD_r7__subchannelSize__size4 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size4;
			struct AccessServiceClass_TDD_r7__subchannelSize__size8 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size8;
			struct AccessServiceClass_TDD_r7__subchannelSize__size16 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subchannelSize;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessServiceClass_TDD_r7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subchannels_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_TDD_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessServiceClass_TDD_r7_H_ */
