#pragma once

#include <QObject>
#include "rf_phreaker/rf_phreaker_api/rf_phreaker_api.h"
#include "rf_phreaker/common/common_types.h"

//namespace rf_phreaker { namespace gui {

class RpConversion : public QObject {
    Q_OBJECT

public:
    enum Tech {
        GSM = ::rp_technology::GSM,
        CDMA = ::rp_technology::CDMA,
        WCDMA = ::rp_technology::WCDMA,
        LTE = ::rp_technology::LTE,
        RAW_DATA = ::rp_technology::RAW_DATA
    };

    enum OperatingBand {
        OPERATING_BAND_UNKNOWN = ::rp_operating_band::OPERATING_BAND_UNKNOWN,

        GSM_T_380 = ::rp_operating_band::GSM_T_380, //	380	380.2�389.8	390.2�399.8	dynamic
        GSM_T_410 = ::rp_operating_band::GSM_T_410, //	410	410.2�419.8	420.2�429.8	dynamic
        GSM_450 = ::rp_operating_band::GSM_450, //	450	450.6�457.6	460.6�467.6	259�293
        GSM_480 = ::rp_operating_band::GSM_480, //	480	479.0�486.0	489.0�496.0	306�340
        GSM_710 = ::rp_operating_band::GSM_710, //	710	698.2�716.2	728.2�746.2	dynamic
        GSM_750 = ::rp_operating_band::GSM_750, //	750	747.2�762.2	777.2�792.2	438�511
        GSM_T_810 = ::rp_operating_band::GSM_T_810, //	810	806.2�821.2	851.2�866.2	dynamic
        GSM_850 = ::rp_operating_band::GSM_850, //	850	824.2�849.2	869.2�894.2	128�251
        GSM_P_900 = ::rp_operating_band::GSM_P_900, //	900	890.0�915.0	935.0�960.0	1�124
        GSM_E_900 = ::rp_operating_band::GSM_E_900, //	900	880.0�915.0	925.0�960.0	975�1023, 0-124
        GSM_R_900 = ::rp_operating_band::GSM_R_900, //	900	876.0�915.0	921.0�960.0	955�1023, 0-124
        GSM_T_900 = ::rp_operating_band::GSM_T_900, //	900	870.4�876.0	915.4�921.0	dynamic^
        GSM_DCS_1800 = ::rp_operating_band::GSM_DCS_1800, //	1800	1,710.2�1,784.8	1,805.2�1,879.8	512�885
        GSM_PCS_1900 = ::rp_operating_band::GSM_PCS_1900, //	1900	1,850.2�1,909.8	1,930.2�1,989.8	512�810

        UMTS_OPERATING_BAND_1 = ::rp_operating_band::UMTS_OPERATING_BAND_1,	//  2100	IMT	1920 - 1980	2110 � 2170
        UMTS_OPERATING_BAND_2 = ::rp_operating_band::UMTS_OPERATING_BAND_2,	//  1900	PCS�A-F	1850 � 1910	1930 � 1990
        UMTS_OPERATING_BAND_3 = ::rp_operating_band::UMTS_OPERATING_BAND_3,	//	1800	DCS	1710 � 1785	1805 � 1880
        UMTS_OPERATING_BAND_4 = ::rp_operating_band::UMTS_OPERATING_BAND_4,	//	1700	AWS�A-F	1710 � 1755	2110 � 2155
        UMTS_OPERATING_BAND_5 = ::rp_operating_band::UMTS_OPERATING_BAND_5,	//	850	CLR	824 � 849	869 � 894
        UMTS_OPERATING_BAND_6 = ::rp_operating_band::UMTS_OPERATING_BAND_6,	//	800		830 � 840	875 � 885
        UMTS_OPERATING_BAND_7 = ::rp_operating_band::UMTS_OPERATING_BAND_7,	//	2600	IMT-E	2500 � 2570	2620 � 2690
        UMTS_OPERATING_BAND_8 = ::rp_operating_band::UMTS_OPERATING_BAND_8,	//	900	E-GSM	880 � 915	925 � 960
        UMTS_OPERATING_BAND_9 = ::rp_operating_band::UMTS_OPERATING_BAND_9,	//	1700		1749.9 � 1784.9	1844.9 � 1879.9
        UMTS_OPERATING_BAND_10 = ::rp_operating_band::UMTS_OPERATING_BAND_10,	//	1700	EAWS A-G	1710 � 1770	2110 � 2170
        UMTS_OPERATING_BAND_11 = ::rp_operating_band::UMTS_OPERATING_BAND_11,	//	1500	LPDC	1427.9 � 1447.9	1475.9 � 1495.9
        UMTS_OPERATING_BAND_12 = ::rp_operating_band::UMTS_OPERATING_BAND_12,	//	700	LSMH A/B/C	699 � 716	729 � 746
        UMTS_OPERATING_BAND_13 = ::rp_operating_band::UMTS_OPERATING_BAND_13,	//	700	USMH C	777 � 787	746 � 756
        UMTS_OPERATING_BAND_14 = ::rp_operating_band::UMTS_OPERATING_BAND_14,	//	700	USMH D	788 � 798	758 � 768
        UMTS_OPERATING_BAND_19 = ::rp_operating_band::UMTS_OPERATING_BAND_19,	//	800		832.4 � 842.6	877.4 � 887.6
        UMTS_OPERATING_BAND_20 = ::rp_operating_band::UMTS_OPERATING_BAND_20,	//	800	EUDD	832 � 862	791 � 821
        UMTS_OPERATING_BAND_21 = ::rp_operating_band::UMTS_OPERATING_BAND_21,	//	1500	UPDC	1447.9 � 1462.9	1495.9 � 1510.9
        UMTS_OPERATING_BAND_22 = ::rp_operating_band::UMTS_OPERATING_BAND_22,	//	3500		3410 � 3490	3510 � 3590
        UMTS_OPERATING_BAND_25 = ::rp_operating_band::UMTS_OPERATING_BAND_25,	//	1900	EPCS A-G	1850 � 1915	1930 � 1995
        UMTS_OPERATING_BAND_26 = ::rp_operating_band::UMTS_OPERATING_BAND_26,	//	850	ECLR	814 � 849	859 � 894

        LTE_OPERATING_BAND_1 = ::rp_operating_band::LTE_OPERATING_BAND_1,	//	1920�- 1980	2110�- 2170	FDD
        LTE_OPERATING_BAND_2 = ::rp_operating_band::LTE_OPERATING_BAND_2,	//	1850�- 1910	1930�- 1990	FDD
        LTE_OPERATING_BAND_3 = ::rp_operating_band::LTE_OPERATING_BAND_3,	//	1710�- 1785	1805�- 1880	FDD
        LTE_OPERATING_BAND_4 = ::rp_operating_band::LTE_OPERATING_BAND_4,	//	1710�- 1755	2110�- 2155	FDD
        LTE_OPERATING_BAND_5 = ::rp_operating_band::LTE_OPERATING_BAND_5,	//	824�- 849	869�- 894	FDD
        LTE_OPERATING_BAND_6 = ::rp_operating_band::LTE_OPERATING_BAND_6,	//	830�- 840	875�- 885	FDD
        LTE_OPERATING_BAND_7 = ::rp_operating_band::LTE_OPERATING_BAND_7,	//	2500�- 2570	2620�- 2690	FDD
        LTE_OPERATING_BAND_8 = ::rp_operating_band::LTE_OPERATING_BAND_8,	//	880�- 915	925�- 960	FDD
        LTE_OPERATING_BAND_9 = ::rp_operating_band::LTE_OPERATING_BAND_9,	//	1749.9�- 1784.9	1844.9�- 1879.9	FDD
        LTE_OPERATING_BAND_10 = ::rp_operating_band::LTE_OPERATING_BAND_10,	//	1710�- 1770	2110�- 2170	FDD
        LTE_OPERATING_BAND_11 = ::rp_operating_band::LTE_OPERATING_BAND_11,	//	1427.9�- 1447.9	1475.9�- 1495.9	FDD
        LTE_OPERATING_BAND_12 = ::rp_operating_band::LTE_OPERATING_BAND_12,	//	699�- 716	729�- 746	FDD
        LTE_OPERATING_BAND_13 = ::rp_operating_band::LTE_OPERATING_BAND_13,	//	777�- 787	746�- 756	FDD
        LTE_OPERATING_BAND_14 = ::rp_operating_band::LTE_OPERATING_BAND_14,	//	788�- 798	758�- 768	FDD
        LTE_OPERATING_BAND_17 = ::rp_operating_band::LTE_OPERATING_BAND_17,	//	704�- 716	734�- 746	FDD
        LTE_OPERATING_BAND_18 = ::rp_operating_band::LTE_OPERATING_BAND_18,	//	815�- 830	860�- 875	FDD
        LTE_OPERATING_BAND_19 = ::rp_operating_band::LTE_OPERATING_BAND_19,	//	830�- 845	875�- 890	FDD
        LTE_OPERATING_BAND_20 = ::rp_operating_band::LTE_OPERATING_BAND_20,	//	832�- 862	791�- 821	FDD
        LTE_OPERATING_BAND_21 = ::rp_operating_band::LTE_OPERATING_BAND_21,	//	1447.9�- 1462.9	1495.9�- 1510.9	FDD
        LTE_OPERATING_BAND_22 = ::rp_operating_band::LTE_OPERATING_BAND_22,	//	3410�- 3490	3510�- 3590	FDD
        LTE_OPERATING_BAND_23 = ::rp_operating_band::LTE_OPERATING_BAND_23,	//	2000�- 2020	2180�- 2200	FDD
        LTE_OPERATING_BAND_24 = ::rp_operating_band::LTE_OPERATING_BAND_24,	//	1626.5�- 1660.5	1525�- 1559	FDD
        LTE_OPERATING_BAND_25 = ::rp_operating_band::LTE_OPERATING_BAND_25,	//	1850�- 1915	1930�- 1995	FDD
        LTE_OPERATING_BAND_26 = ::rp_operating_band::LTE_OPERATING_BAND_26,	//	814�- 849	859�- 894	FDD
        LTE_OPERATING_BAND_27 = ::rp_operating_band::LTE_OPERATING_BAND_27,	//	807�- 824	852�- 869	FDD
        LTE_OPERATING_BAND_28 = ::rp_operating_band::LTE_OPERATING_BAND_28,	//	703�- 748	758�- 803	FDD
        LTE_OPERATING_BAND_29 = ::rp_operating_band::LTE_OPERATING_BAND_29,	//	N/A	716�- 728	FDD
        LTE_OPERATING_BAND_30 = ::rp_operating_band::LTE_OPERATING_BAND_30,	//	2305 - 2315	 2350 - 2360 FDD
        LTE_OPERATING_BAND_33 = ::rp_operating_band::LTE_OPERATING_BAND_33,	//	1900�- 1920		TDD
        LTE_OPERATING_BAND_34 = ::rp_operating_band::LTE_OPERATING_BAND_34,	//	2010�- 2025		TDD
        LTE_OPERATING_BAND_35 = ::rp_operating_band::LTE_OPERATING_BAND_35,	//	1850�- 1910		TDD
        LTE_OPERATING_BAND_36 = ::rp_operating_band::LTE_OPERATING_BAND_36,	//	1930�- 1990		TDD
        LTE_OPERATING_BAND_37 = ::rp_operating_band::LTE_OPERATING_BAND_37,	//	1910�- 1930		TDD
        LTE_OPERATING_BAND_38 = ::rp_operating_band::LTE_OPERATING_BAND_38,	//	2570�- 2620		TDD
        LTE_OPERATING_BAND_39 = ::rp_operating_band::LTE_OPERATING_BAND_39,	//	1880�- 1920		TDD
        LTE_OPERATING_BAND_40 = ::rp_operating_band::LTE_OPERATING_BAND_40,	//	2300�- 2400		TDD
        LTE_OPERATING_BAND_41 = ::rp_operating_band::LTE_OPERATING_BAND_41,	//	2496�- 2690		TDD
        LTE_OPERATING_BAND_42 = ::rp_operating_band::LTE_OPERATING_BAND_42,	//	3400�- 3600		TDD
        LTE_OPERATING_BAND_43 = ::rp_operating_band::LTE_OPERATING_BAND_43,	//	3600�- 3800		TDD
        LTE_OPERATING_BAND_44 = ::rp_operating_band::LTE_OPERATING_BAND_44,	//	703�- 803		TDD

        FIRST_GSM_OPERATING_BAND = GSM_T_380,
        LAST_GSM_OPERATING_BAND = GSM_PCS_1900,
        FIRST_UMTS_OPERATING_BAND = UMTS_OPERATING_BAND_1,
        LAST_UMTS_OPERATING_BAND = UMTS_OPERATING_BAND_26,
        FIRST_LTE_OPERATING_BAND = LTE_OPERATING_BAND_1,
        LAST_LTE_OPERATING_BAND = LTE_OPERATING_BAND_44
    };

    Q_INVOKABLE static rf_phreaker::specifier toSpecifier(Tech s) {
        switch(s) {
        case GSM:
            return rf_phreaker::GSM_LAYER_3_DECODE;
        case CDMA:
            return rf_phreaker::CDMA_LAYER_3_DECODE;
        case WCDMA:
            return rf_phreaker::UMTS_LAYER_3_DECODE;
        case LTE:
            return rf_phreaker::LTE_LAYER_3_DECODE;
        case RAW_DATA:
            return rf_phreaker::RAW_DATA;
        default:
            return rf_phreaker::UNKOWN_SPECIFIER;

        }
    }

    Q_INVOKABLE static QString toQString(OperatingBand t) {
        switch(t) {
        case GSM_T_380: //	380	380.2�389.8	390.2�399.8	dynamic
            return "GSM_T_380";
        case GSM_T_410:
            return "GSM_T_410"; //	410	410.2�419.8	420.2�429.8	dynamic
        case GSM_450:
            return "GSM_450"; //	450	450.6�457.6	460.6�467.6	259�293
        case GSM_480:
            return "GSM_480"; //	480	479.0�486.0	489.0�496.0	306�340
        case GSM_710:
            return "GSM_710"; //	710	698.2�716.2	728.2�746.2	dynamic
        case GSM_750:
            return "GSM_750"; //	750	747.2�762.2	777.2�792.2	438�511
        case GSM_T_810:
            return "GSM_T_810"; //	810	806.2�821.2	851.2�866.2	dynamic
        case GSM_850:
            return "GSM_850"; //	850	824.2�849.2	869.2�894.2	128�251
        case GSM_P_900:
            return "GSM_P_900"; //	900	890.0�915.0	935.0�960.0	1�124
        case GSM_E_900:
            return "GSM_E_900"; //	900	880.0�915.0	925.0�960.0	975�1023, 0-124
        case GSM_R_900:
            return "GSM_R_900"; //	900	876.0�915.0	921.0�960.0	955�1023, 0-124
        case GSM_T_900:
            return "GSM_T_900"; //	900	870.4�876.0	915.4�921.0	dynamic^
        case GSM_DCS_1800:
            return "GSM_DCS_1800"; //	1800 1,710.2�1,784.8	1,805.2�1,879.8	512�885
        case GSM_PCS_1900:
            return "GSM_PCS_1900"; //	1900 1,850.2�1,909.8	1,930.2�1,989.8	512�810

        case UMTS_OPERATING_BAND_1:
            return "UMTS_OPERATING_BAND_1";	//  2100	IMT	1920 - 1980	2110 � 2170
        case UMTS_OPERATING_BAND_2:
            return "UMTS_OPERATING_BAND_2";	//  1900	PCS�A-F	1850 � 1910	1930 � 1990
        case UMTS_OPERATING_BAND_3:
            return "UMTS_OPERATING_BAND_3";	//	1800	DCS	1710 � 1785	1805 � 1880
        case UMTS_OPERATING_BAND_4:
            return "UMTS_OPERATING_BAND_4";	//	1700	AWS�A-F	1710 � 1755	2110 � 2155
        case UMTS_OPERATING_BAND_5:
            return "UMTS_OPERATING_BAND_5";	//	850	CLR	824 � 849	869 � 894
        case UMTS_OPERATING_BAND_6:
            return "UMTS_OPERATING_BAND_6";	//	800		830 � 840	875 � 885
        case UMTS_OPERATING_BAND_7:
            return "UMTS_OPERATING_BAND_7";	//	2600	IMT-E	2500 � 2570	2620 � 2690
        case UMTS_OPERATING_BAND_8:
            return "UMTS_OPERATING_BAND_8";	//	900	E-GSM	880 � 915	925 � 960
        case UMTS_OPERATING_BAND_9:
            return "UMTS_OPERATING_BAND_9";	//	1700		1749.9 � 1784.9	1844.9 � 1879.9
        case UMTS_OPERATING_BAND_10:
            return "UMTS_OPERATING_BAND_10";	//	1700	EAWS A-G	1710 � 1770	2110 � 2170
        case UMTS_OPERATING_BAND_11:
            return "UMTS_OPERATING_BAND_11";	//	1500	LPDC	1427.9 � 1447.9	1475.9 � 1495.9
        case UMTS_OPERATING_BAND_12:
            return "UMTS_OPERATING_BAND_12";	//	700	LSMH A/B/C	699 � 716	729 � 746
        case UMTS_OPERATING_BAND_13:
            return "UMTS_OPERATING_BAND_13";	//	700	USMH C	777 � 787	746 � 756
        case UMTS_OPERATING_BAND_14:
            return "UMTS_OPERATING_BAND_14";	//	700	USMH D	788 � 798	758 � 768
        case UMTS_OPERATING_BAND_19:
            return "UMTS_OPERATING_BAND_19";	//	800		832.4 � 842.6	877.4 � 887.6
        case UMTS_OPERATING_BAND_20:
            return "UMTS_OPERATING_BAND_20";	//	800	EUDD	832 � 862	791 � 821
        case UMTS_OPERATING_BAND_21:
            return "UMTS_OPERATING_BAND_21";	//	1500	UPDC	1447.9 � 1462.9	1495.9 � 1510.9
        case UMTS_OPERATING_BAND_22:
            return "UMTS_OPERATING_BAND_22";	//	3500		3410 � 3490	3510 � 3590
        case UMTS_OPERATING_BAND_25:
            return "UMTS_OPERATING_BAND_25";	//	1900	EPCS A-G	1850 � 1915	1930 � 1995
        case UMTS_OPERATING_BAND_26:
            return "UMTS_OPERATING_BAND_26";	//	850	ECLR	814 � 849	859 � 894

        case LTE_OPERATING_BAND_1:
            return "LTE_OPERATING_BAND_1";	//	1920�- 1980	2110�- 2170	FDD
        case LTE_OPERATING_BAND_2:
            return "LTE_OPERATING_BAND_2";	//	1850�- 1910	1930�- 1990	FDD
        case LTE_OPERATING_BAND_3:
            return "LTE_OPERATING_BAND_3";	//	1710�- 1785	1805�- 1880	FDD
        case LTE_OPERATING_BAND_4:
            return "LTE_OPERATING_BAND_4";	//	1710�- 1755	2110�- 2155	FDD
        case LTE_OPERATING_BAND_5:
            return "LTE_OPERATING_BAND_5";	//	824�- 849	869�- 894	FDD
        case LTE_OPERATING_BAND_6:
            return "LTE_OPERATING_BAND_6";	//	830�- 840	875�- 885	FDD
        case LTE_OPERATING_BAND_7:
            return "LTE_OPERATING_BAND_7";	//	2500�- 2570	2620�- 2690	FDD
        case LTE_OPERATING_BAND_8:
            return "LTE_OPERATING_BAND_8";	//	880�- 915	925�- 960	FDD
        case LTE_OPERATING_BAND_9:
            return "LTE_OPERATING_BAND_9";	//	1749.9�- 1784.9	1844.9�- 1879.9	FDD
        case LTE_OPERATING_BAND_10:
            return "LTE_OPERATING_BAND_10";	//	1710�- 1770	2110�- 2170	FDD
        case LTE_OPERATING_BAND_11:
            return "LTE_OPERATING_BAND_11";	//	1427.9�- 1447.9	1475.9�- 1495.9	FDD
        case LTE_OPERATING_BAND_12:
            return "LTE_OPERATING_BAND_12";	//	699�- 716	729�- 746	FDD
        case LTE_OPERATING_BAND_13:
            return "LTE_OPERATING_BAND_13";	//	777�- 787	746�- 756	FDD
        case LTE_OPERATING_BAND_14:
            return "LTE_OPERATING_BAND_14";	//	788�- 798	758�- 768	FDD
        case LTE_OPERATING_BAND_17:
            return "LTE_OPERATING_BAND_17";	//	704�- 716	734�- 746	FDD
        case LTE_OPERATING_BAND_18:
            return "LTE_OPERATING_BAND_18";	//	815�- 830	860�- 875	FDD
        case LTE_OPERATING_BAND_19:
            return "LTE_OPERATING_BAND_19";	//	830�- 845	875�- 890	FDD
        case LTE_OPERATING_BAND_20:
            return "LTE_OPERATING_BAND_20";	//	832�- 862	791�- 821	FDD
        case LTE_OPERATING_BAND_21:
            return "LTE_OPERATING_BAND_21";	//	1447.9�- 1462.9	1495.9�- 1510.9	FDD
        case LTE_OPERATING_BAND_22:
            return "LTE_OPERATING_BAND_22";	//	3410�- 3490	3510�- 3590	FDD
        case LTE_OPERATING_BAND_23:
            return "LTE_OPERATING_BAND_23";	//	2000�- 2020	2180�- 2200	FDD
        case LTE_OPERATING_BAND_24:
            return "LTE_OPERATING_BAND_24";	//	1626.5�- 1660.5	1525�- 1559	FDD
        case LTE_OPERATING_BAND_25:
            return "LTE_OPERATING_BAND_25";	//	1850�- 1915	1930�- 1995	FDD
        case LTE_OPERATING_BAND_26:
            return "LTE_OPERATING_BAND_26";	//	814�- 849	859�- 894	FDD
        case LTE_OPERATING_BAND_27:
            return "LTE_OPERATING_BAND_27";	//	807�- 824	852�- 869	FDD
        case LTE_OPERATING_BAND_28:
            return "LTE_OPERATING_BAND_28";	//	703�- 748	758�- 803	FDD
        case LTE_OPERATING_BAND_29:
            return "LTE_OPERATING_BAND_29";	//	N/A	716�- 728	FDD
        case LTE_OPERATING_BAND_30:
            return "LTE_OPERATING_BAND_30";	//	2305 - 2315	 2350 - 2360 FDD
        case LTE_OPERATING_BAND_33:
            return "LTE_OPERATING_BAND_33";	//	1900�- 1920		TDD
        case LTE_OPERATING_BAND_34:
            return "LTE_OPERATING_BAND_34";	//	2010�- 2025		TDD
        case LTE_OPERATING_BAND_35:
            return "LTE_OPERATING_BAND_35";	//	1850�- 1910		TDD
        case LTE_OPERATING_BAND_36:
            return "LTE_OPERATING_BAND_36";	//	1930�- 1990		TDD
        case LTE_OPERATING_BAND_37:
            return "LTE_OPERATING_BAND_37";	//	1910�- 1930		TDD
        case LTE_OPERATING_BAND_38:
            return "LTE_OPERATING_BAND_38";	//	2570�- 2620		TDD
        case LTE_OPERATING_BAND_39:
            return "LTE_OPERATING_BAND_39";	//	1880�- 1920		TDD
        case LTE_OPERATING_BAND_40:
            return "LTE_OPERATING_BAND_40";	//	2300�- 2400		TDD
        case LTE_OPERATING_BAND_41:
            return "LTE_OPERATING_BAND_41";	//	2496�- 2690		TDD
        case LTE_OPERATING_BAND_42:
            return "LTE_OPERATING_BAND_42";	//	3400�- 3600		TDD
        case LTE_OPERATING_BAND_43:
            return "LTE_OPERATING_BAND_43";	//	3600�- 3800		TDD
        case LTE_OPERATING_BAND_44:
            return "LTE_OPERATING_BAND_44";	//	703�- 803		TDD

        case OPERATING_BAND_UNKNOWN:
        default:
            return "OPERATING_BAND_UNKNOWN";
        }
    }
};

//}}