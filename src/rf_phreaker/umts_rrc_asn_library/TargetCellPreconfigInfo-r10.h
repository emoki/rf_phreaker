/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_TargetCellPreconfigInfo_r10_H_
#define	_TargetCellPreconfigInfo_r10_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTimeOffset.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/Serving-HSDSCH-CellInformation-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-ReconfigurationInfo-r7.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DTX_DRX_TimingInfo_r7;
struct DTX_DRX_Info_r7;
struct HS_SCCH_LessInfo_r7;
struct MIMO_Parameters_r9;
struct DL_SecondaryCellInfoFDD_r10;
struct AdditionalDLSecCellInfoListFDD;
struct UL_SecondaryCellInfoFDD;
struct E_DCH_ReconfigurationInfo_SecULFrequency;

/* TargetCellPreconfigInfo-r10 */
typedef struct TargetCellPreconfigInfo_r10 {
	ActivationTimeOffset_t	*activationTimeOffset	/* OPTIONAL */;
	H_RNTI_t	 new_H_RNTI;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	Serving_HSDSCH_CellInformation_r9_t	 serving_HSDSCH_CellInformation;
	E_DCH_ReconfigurationInfo_r7_t	 e_dch_ReconfigurationInfo;
	struct DTX_DRX_TimingInfo_r7	*dtx_drx_TimingInfo	/* OPTIONAL */;
	struct DTX_DRX_Info_r7	*dtx_drx_Info	/* OPTIONAL */;
	struct HS_SCCH_LessInfo_r7	*hs_scch_LessInfo	/* OPTIONAL */;
	struct MIMO_Parameters_r9	*mimoParameters	/* OPTIONAL */;
	struct DL_SecondaryCellInfoFDD_r10	*dl_SecondaryCellInfoFDD	/* OPTIONAL */;
	struct AdditionalDLSecCellInfoListFDD	*additionalDLSecCellInfoListFDD	/* OPTIONAL */;
	struct UL_SecondaryCellInfoFDD	*ul_SecondaryCellInfoFDD	/* OPTIONAL */;
	struct E_DCH_ReconfigurationInfo_SecULFrequency	*e_dch_ReconfigurationInfo_SecULFrequency	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TargetCellPreconfigInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TargetCellPreconfigInfo_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-TimingInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-LessInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/MIMO-Parameters-r9.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-SecondaryCellInfoFDD-r10.h"
#include "rf_phreaker/umts_rrc_asn_library/AdditionalDLSecCellInfoListFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-SecondaryCellInfoFDD.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-ReconfigurationInfo-SecULFrequency.h"

#endif	/* _TargetCellPreconfigInfo_r10_H_ */
