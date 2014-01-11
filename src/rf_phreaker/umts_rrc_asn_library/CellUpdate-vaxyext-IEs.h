/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_CellUpdate_vaxyext_IEs_H_
#define	_CellUpdate_vaxyext_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellUpdate_vaxyext_IEs__securityRevertStatusIndicator {
	CellUpdate_vaxyext_IEs__securityRevertStatusIndicator_true	= 0
} e_CellUpdate_vaxyext_IEs__securityRevertStatusIndicator;
typedef enum CellUpdate_vaxyext_IEs__loggedMeasAvailable {
	CellUpdate_vaxyext_IEs__loggedMeasAvailable_true	= 0
} e_CellUpdate_vaxyext_IEs__loggedMeasAvailable;

/* CellUpdate-vaxyext-IEs */
typedef struct CellUpdate_vaxyext_IEs {
	long	*securityRevertStatusIndicator	/* OPTIONAL */;
	long	*loggedMeasAvailable	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdate_vaxyext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_securityRevertStatusIndicator_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_loggedMeasAvailable_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdate_vaxyext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _CellUpdate_vaxyext_IEs_H_ */
