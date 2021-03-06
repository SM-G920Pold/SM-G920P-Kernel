/* linux/arch/arm64/mach-exynos/include/mach/asv-exynos7580.h
*
* Copyright (c) 2014 Samsung Electronics Co., Ltd.
*              http://www.samsung.com/
*
* EXYNOS7580 - Adoptive Support Voltage Header file
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_EXYNOS7580_ASV_H
#define __ASM_ARCH_EXYNOS7580_ASV_H __FILE__

#include <mach/map.h>

#define CHIPID_ASV_INFO S5P_VA_CHIPID6

#define BIG_MAX_VOLT		(1300000)
#define LIT_MAX_VOLT		(1300000)
#define G3D_MAX_VOLT		(1187500)
#define INT_MAX_VOLT		(962500)
#define MIF_MAX_VOLT		(962500)
#define ISP_MAX_VOLT		(962500)

#define SYSC_DVFS_END_LVL_BIG		SYSC_DVFS_L20
#define SYSC_DVFS_END_LVL_LIT		SYSC_DVFS_L20
#define SYSC_DVFS_END_LVL_G3D		SYSC_DVFS_L8
#define SYSC_DVFS_END_LVL_INT		SYSC_DVFS_L8
#define SYSC_DVFS_END_LVL_MIF		SYSC_DVFS_L9
#define SYSC_DVFS_END_LVL_CAM		SYSC_DVFS_L5

#define MAX_ASV_GROUP			16
#define ASV_RSVD						0xFFFF

const u32 ids_table[MAX_ASV_GROUP] = {
	/*  0  1  2  3  4  5  6   7   8   9  10  11  12  13  14   15	*/
		0, 3, 4, 5, 6, 8, 10, 12, 15, 19, 23, 29, 36, 45, 46, ASV_RSVD,
};

/* ASV_V0 */
const u32 abb_table_big_v0[SYSC_DVFS_END_LVL_BIG+1][MAX_ASV_GROUP+1] = {
	/*	ASV0	      ASV1	  ASV2	      ASV3	  ASV4	      ASV5	   ASV6	      ASV7       ASV8        ASV9        ASV10        ASV11       ASV12       ASV13      ASV 14       ASV15 */
	{2000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1600000,        0x2,        0x4,        0x4,        0x4, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1100000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,       0xA,        0xA,        0xA,         0xA},
	{600000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{300000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{200000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{100000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
};

const u32 abb_table_lit_v0[SYSC_DVFS_END_LVL_LIT+1][MAX_ASV_GROUP+1] = {
	/*	ASV0	      ASV1	  ASV2	      ASV3	  ASV4	      ASV5	   ASV6	      ASV7       ASV8        ASV9        ASV10        ASV11       ASV12       ASV13      ASV 14       ASV15 */
	{2000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1600000,        0x2,        0x4,        0x4,        0x4, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1300000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1200000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1100000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{1000000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{900000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{800000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS},
	{700000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,       0xA,        0xA,        0xA,         0xA},
	{600000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{500000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{400000, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{300000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{200000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{100000,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
};

const u32 abb_table_int_v0[SYSC_DVFS_END_LVL_INT+1][MAX_ASV_GROUP+1] = {
	{400, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA, },
	{334, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA, },
	{267, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA, },
	{200, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{160, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{134, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{111, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
	{100, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA,        0xA},
};

const u32 volt_table_big_v0[SYSC_DVFS_END_LVL_BIG+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	{2000000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1900000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1800000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1700000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1600000, 1300000, 1300000, 1300000, 1300000, 1300000, 1287500, 1275000, 1262500, 1250000, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1175000},
	{1500000, 1287500, 1287500, 1275000, 1262500, 1250000, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1125000},
	{1400000, 1237500, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1075000},
	{1300000, 1187500, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1125000, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1025000},
	{1200000, 1150000, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  987500},
	{1100000, 1112500, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000},
	{1000000, 1075000, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  912500},
	{ 900000, 1037500, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  875000},
	{ 800000, 1000000, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  850000,  850000},
	{ 700000,  962500,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 600000,  925000,  925000,  912500,  900000,  887500,  875000,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 500000,  887500,  887500,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 400000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 300000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 200000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 100000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
};

const u32 volt_table_lit_v0[SYSC_DVFS_END_LVL_LIT+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	{2000000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1900000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1800000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1700000,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{1600000, 1300000, 1300000, 1300000, 1300000, 1300000, 1287500, 1275000, 1262500, 1250000, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1175000},
	{1500000, 1287500, 1287500, 1275000, 1262500, 1250000, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1125000},
	{1400000, 1237500, 1237500, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1075000},
	{1300000, 1187500, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1125000, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1025000},
	{1200000, 1150000, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  987500},
	{1100000, 1112500, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000},
	{1000000, 1075000, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  912500},
	{ 900000, 1037500, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  875000},
	{ 800000, 1000000, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  850000,  850000},
	{ 700000,  962500,  962500,  950000,  937500,  925000,  912500,  900000,  887500,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 600000,  925000,  925000,  912500,  900000,  887500,  875000,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 500000,  887500,  887500,  875000,  862500,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 400000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 300000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 200000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
	{ 100000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000},
};

const u32 volt_table_g3d_v0[SYSC_DVFS_END_LVL_G3D+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	{800,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0,       0},
	{734, 1187500, 1187500, 1175000, 1187500, 1075000, 1062500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1025000},
	{668, 1137500, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  975000},
	{534, 1062500, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000,  950000,  950000,  950000,  950000},
	{440, 1012500, 1012500, 1000000,  987500,  975000,  962500,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000},
	{350,  987500,  987500,  975000,  962500,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000},
	{266,  962500,  962500,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000},
	{160,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000,  950000},
};

const u32 volt_table_int_v0[SYSC_DVFS_END_LVL_INT+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	{400, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{334, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{267, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{200, 950000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{160, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{134, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{111, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{100, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
};

const u32 volt_table_mif_v0[SYSC_DVFS_END_LVL_MIF+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	{825, 962500,  962500,	950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{741, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{728, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{667, 950000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{559, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{416, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{338, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{273, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{200, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
};

const u32 volt_table_cam_v0[SYSC_DVFS_END_LVL_CAM+1][MAX_ASV_GROUP+1] = {
	/*	 ASV0	  ASV1	   ASV2	    ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14    ASV15 */
	/* FIXME: CAM ASV0, ASV15 Table has not been fixed yet */
	{530, 962500,  962500,	950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{480, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{430, 962500,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{400, 950000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{200, 900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
};

#endif
