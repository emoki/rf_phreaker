/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_EllipsoidPointUncertEllipse_H_
#define	_EllipsoidPointUncertEllipse_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/umts_rrc_asn_library/NativeEnumerated.h>
#include <rf_phreaker/umts_rrc_asn_library/NativeInteger.h>
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EllipsoidPointUncertEllipse__latitudeSign {
	EllipsoidPointUncertEllipse__latitudeSign_north	= 0,
	EllipsoidPointUncertEllipse__latitudeSign_south	= 1
} e_EllipsoidPointUncertEllipse__latitudeSign;

/* EllipsoidPointUncertEllipse */
typedef struct EllipsoidPointUncertEllipse {
	long	 latitudeSign;
	long	 latitude;
	long	 longitude;
	long	 uncertaintySemiMajor;
	long	 uncertaintySemiMinor;
	long	 orientationMajorAxis;
	long	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EllipsoidPointUncertEllipse_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_latitudeSign_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EllipsoidPointUncertEllipse;

#ifdef __cplusplus
}
#endif

#endif	/* _EllipsoidPointUncertEllipse_H_ */
