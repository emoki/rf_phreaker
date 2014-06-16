/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#ifndef	_PhysicalConfigDedicatedSCell_r10_H_
#define	_PhysicalConfigDedicatedSCell_r10_H_


#include <rf_phreaker/lte_rrc_asn_library/asn_application.h>

/* Including external dependencies */
#include <rf_phreaker/lte_rrc_asn_library/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_RS_ConfigNZPToReleaseList_r11;
struct CSI_RS_ConfigNZPToAddModList_r11;
struct CSI_RS_ConfigZPToReleaseList_r11;
struct CSI_RS_ConfigZPToAddModList_r11;
struct EPDCCH_Config_r11;
struct PDSCH_ConfigDedicated_v1130;
struct CQI_ReportConfig_v1130;
struct PUSCH_ConfigDedicated_v1130;
struct UplinkPowerControlDedicated_v1130;
struct AntennaInfoDedicated_v12xx;
struct AntennaInfoDedicated_r10;
struct CrossCarrierSchedulingConfig_r10;
struct CSI_RS_Config_r10;
struct PDSCH_ConfigDedicated;
struct AntennaInfoUL_r10;
struct PUSCH_ConfigDedicatedSCell_r10;
struct UplinkPowerControlDedicatedSCell_r10;
struct CQI_ReportConfigSCell_r10;
struct SoundingRS_UL_ConfigDedicated;
struct SoundingRS_UL_ConfigDedicated_v1020;
struct SoundingRS_UL_ConfigDedicatedAperiodic_r10;

/* PhysicalConfigDedicatedSCell-r10 */
typedef struct PhysicalConfigDedicatedSCell_r10 {
	struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10 {
		struct AntennaInfoDedicated_r10	*antennaInfo_r10	/* OPTIONAL */;
		struct CrossCarrierSchedulingConfig_r10	*crossCarrierSchedulingConfig_r10	/* OPTIONAL */;
		struct CSI_RS_Config_r10	*csi_RS_Config_r10	/* OPTIONAL */;
		struct PDSCH_ConfigDedicated	*pdsch_ConfigDedicated_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonUL_Configuration_r10;
	struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10 {
		struct AntennaInfoUL_r10	*antennaInfoUL_r10	/* OPTIONAL */;
		struct PUSCH_ConfigDedicatedSCell_r10	*pusch_ConfigDedicatedSCell_r10	/* OPTIONAL */;
		struct UplinkPowerControlDedicatedSCell_r10	*uplinkPowerControlDedicatedSCell_r10	/* OPTIONAL */;
		struct CQI_ReportConfigSCell_r10	*cqi_ReportConfigSCell_r10	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicated	*soundingRS_UL_ConfigDedicated_r10	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicated_v1020	*soundingRS_UL_ConfigDedicated_v1020	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_r10	*soundingRS_UL_ConfigDedicatedAperiodic_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_Configuration_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CSI_RS_ConfigNZPToReleaseList_r11	*csi_RS_ConfigNZPToReleaseList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigNZPToAddModList_r11	*csi_RS_ConfigNZPToAddModList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigZPToReleaseList_r11	*csi_RS_ConfigZPToReleaseList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigZPToAddModList_r11	*csi_RS_ConfigZPToAddModList_r11	/* OPTIONAL */;
	struct EPDCCH_Config_r11	*epdcch_Config_r11	/* OPTIONAL */;
	struct PDSCH_ConfigDedicated_v1130	*pdsch_ConfigDedicated_v1130	/* OPTIONAL */;
	struct CQI_ReportConfig_v1130	*cqi_ReportConfig_v1130	/* OPTIONAL */;
	struct PUSCH_ConfigDedicated_v1130	*pusch_ConfigDedicated_v1130	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_v1130	*uplinkPowerControlDedicatedSCell_v1130	/* OPTIONAL */;
	struct AntennaInfoDedicated_v12xx	*antennaInfo_v12xx	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicatedSCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-ConfigNZPToReleaseList-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-ConfigNZPToAddModList-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-ConfigZPToReleaseList-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-ConfigZPToAddModList-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/EPDCCH-Config-r11.h"
#include "rf_phreaker/lte_rrc_asn_library/PDSCH-ConfigDedicated-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportConfig-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/PUSCH-ConfigDedicated-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/UplinkPowerControlDedicated-v1130.h"
#include "rf_phreaker/lte_rrc_asn_library/AntennaInfoDedicated-v12xx.h"
#include "rf_phreaker/lte_rrc_asn_library/AntennaInfoDedicated-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/CrossCarrierSchedulingConfig-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/CSI-RS-Config-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/PDSCH-ConfigDedicated.h"
#include "rf_phreaker/lte_rrc_asn_library/AntennaInfoUL-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/PUSCH-ConfigDedicatedSCell-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/UplinkPowerControlDedicatedSCell-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/CQI-ReportConfigSCell-r10.h"
#include "rf_phreaker/lte_rrc_asn_library/SoundingRS-UL-ConfigDedicated.h"
#include "rf_phreaker/lte_rrc_asn_library/SoundingRS-UL-ConfigDedicated-v1020.h"
#include "rf_phreaker/lte_rrc_asn_library/SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"

#endif	/* _PhysicalConfigDedicatedSCell_r10_H_ */
#include <rf_phreaker/lte_rrc_asn_library/asn_internal.h>
