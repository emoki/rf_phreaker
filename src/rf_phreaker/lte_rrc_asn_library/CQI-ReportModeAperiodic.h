/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_CQI_ReportModeAperiodic_H_
#define	_CQI_ReportModeAperiodic_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportModeAperiodic {
	CQI_ReportModeAperiodic_rm12	= 0,
	CQI_ReportModeAperiodic_rm20	= 1,
	CQI_ReportModeAperiodic_rm22	= 2,
	CQI_ReportModeAperiodic_rm30	= 3,
	CQI_ReportModeAperiodic_rm31	= 4,
	CQI_ReportModeAperiodic_rm32_v12xx	= 5,
	CQI_ReportModeAperiodic_spare2	= 6,
	CQI_ReportModeAperiodic_spare1	= 7
} e_CQI_ReportModeAperiodic;

/* CQI-ReportModeAperiodic */
typedef long	 CQI_ReportModeAperiodic_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportModeAperiodic;
asn_struct_free_f CQI_ReportModeAperiodic_free;
asn_struct_print_f CQI_ReportModeAperiodic_print;
asn_constr_check_f CQI_ReportModeAperiodic_constraint;
ber_type_decoder_f CQI_ReportModeAperiodic_decode_ber;
der_type_encoder_f CQI_ReportModeAperiodic_encode_der;
xer_type_decoder_f CQI_ReportModeAperiodic_decode_xer;
xer_type_encoder_f CQI_ReportModeAperiodic_encode_xer;
per_type_decoder_f CQI_ReportModeAperiodic_decode_uper;
per_type_encoder_f CQI_ReportModeAperiodic_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportModeAperiodic_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
