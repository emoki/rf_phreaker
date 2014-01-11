/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rcc.txt"
 * 	`asn1c -S/skeletons -fnative-types -fcompound-names`
 */

#ifndef	_ActiveSetUpdate_r8_IEs_H_
#define	_ActiveSetUpdate_r8_IEs_H_


#include <rf_phreaker/umts_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include "rf_phreaker/umts_rrc_asn_library/ActivationTime.h"
#include "rf_phreaker/umts_rrc_asn_library/H-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/E-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/MaxAllowedUL-TX-Power.h"
#include "rf_phreaker/umts_rrc_asn_library/TX-DiversityMode.h"
#include "rf_phreaker/umts_rrc_asn_library/DPC-Mode.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DPDCH-PowerInterpolation.h"
#include <rf_phreaker/umts_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct U_RNTI;
struct CN_InformationInfo_r6;
struct DTX_DRX_TimingInfo_r7;
struct DTX_DRX_Info_r7;
struct HS_SCCH_LessInfo_r7;
struct MIMO_Parameters_r8;
struct RL_AdditionInformationList_r8;
struct ServingCellChangeParameters;
struct RL_RemovalInformationList;
struct Serving_HSDSCH_CellInformation_r8;
struct E_DCH_ReconfigurationInfo_r7;
struct UL_16QAM_Config;
struct E_DCH_RL_InfoSameServingCell;
struct E_TFC_Boost_Info_r7;
struct DL_SecondaryCellInfoFDD;

/* ActiveSetUpdate-r8-IEs */
typedef struct ActiveSetUpdate_r8_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*newU_RNTI	/* OPTIONAL */;
	H_RNTI_t	*newH_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newPrimary_E_RNTI	/* OPTIONAL */;
	E_RNTI_t	*newSecondary_E_RNTI	/* OPTIONAL */;
	struct CN_InformationInfo_r6	*cn_InformationInfo	/* OPTIONAL */;
	struct DTX_DRX_TimingInfo_r7	*dtx_drx_TimingInfo	/* OPTIONAL */;
	struct DTX_DRX_Info_r7	*dtx_drx_Info	/* OPTIONAL */;
	struct HS_SCCH_LessInfo_r7	*hs_scch_LessInfo	/* OPTIONAL */;
	struct MIMO_Parameters_r8	*mimoParameters	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct RL_AdditionInformationList_r8	*rl_AdditionInformationList	/* OPTIONAL */;
	struct ServingCellChangeParameters	*servingCellChangeParameters	/* OPTIONAL */;
	struct RL_RemovalInformationList	*rl_RemovalInformationList	/* OPTIONAL */;
	TX_DiversityMode_t	*tx_DiversityMode	/* OPTIONAL */;
	DPC_Mode_t	*dpc_Mode	/* OPTIONAL */;
	struct Serving_HSDSCH_CellInformation_r8	*serving_HSDSCH_CellInformation	/* OPTIONAL */;
	struct E_DCH_ReconfigurationInfo_r7	*e_dch_ReconfigurationInfo	/* OPTIONAL */;
	struct UL_16QAM_Config	*ul_16QAM_Config	/* OPTIONAL */;
	struct E_DCH_RL_InfoSameServingCell	*e_dch_ReconfInfoSameCell	/* OPTIONAL */;
	struct E_TFC_Boost_Info_r7	*e_TFC_Boost_Info	/* OPTIONAL */;
	E_DPDCH_PowerInterpolation_t	*e_DPDCH_PowerInterpolation	/* OPTIONAL */;
	struct DL_SecondaryCellInfoFDD	*dl_SecondaryCellInfoFDD	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ActiveSetUpdate_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ActiveSetUpdate_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/umts_rrc_asn_library/U-RNTI.h"
#include "rf_phreaker/umts_rrc_asn_library/CN-InformationInfo-r6.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-TimingInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DTX-DRX-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/HS-SCCH-LessInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/MIMO-Parameters-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/RL-AdditionInformationList-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/ServingCellChangeParameters.h"
#include "rf_phreaker/umts_rrc_asn_library/RL-RemovalInformationList.h"
#include "rf_phreaker/umts_rrc_asn_library/Serving-HSDSCH-CellInformation-r8.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-ReconfigurationInfo-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/UL-16QAM-Config.h"
#include "rf_phreaker/umts_rrc_asn_library/E-DCH-RL-InfoSameServingCell.h"
#include "rf_phreaker/umts_rrc_asn_library/E-TFC-Boost-Info-r7.h"
#include "rf_phreaker/umts_rrc_asn_library/DL-SecondaryCellInfoFDD.h"

#endif	/* _ActiveSetUpdate_r8_IEs_H_ */
