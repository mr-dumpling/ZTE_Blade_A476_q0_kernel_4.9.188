/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/
/*
 * Definitions for TMD2771 als/ps sensor chip.
 */
#ifndef __TMD2771_H__
#define __TMD2771_H__

#include <linux/ioctl.h>


#define TMD2771_CMM_ENABLE		0X80
#define TMD2771_CMM_ATIME		0X81
#define TMD2771_CMM_PTIME		0X82
#define TMD2771_CMM_WTIME		0X83
/*for interrupt work mode support*/
#define TMD2771_CMM_INT_LOW_THD_LOW   0X88
#define TMD2771_CMM_INT_LOW_THD_HIGH  0X89
#define TMD2771_CMM_INT_HIGH_THD_LOW  0X8A
#define TMD2771_CMM_INT_HIGH_THD_HIGH 0X8B
#define TMD2771_CMM_Persistence       0X8C
#define TMD2771_CMM_STATUS            0X93
#define TAOS_TRITON_CMD_REG           0X80
#define TAOS_TRITON_CMD_SPL_FN        0x60

#define TMD2771_CMM_CONFIG		0X8D
#define TMD2771_CMM_PPCOUNT		0X8E
#define TMD2771_CMM_CONTROL		0X8F

#define TMD2771_CMM_PDATA_L		0X98
#define TMD2771_CMM_PDATA_H		0X99
#define TMD2771_CMM_C0DATA_L	0X94
#define TMD2771_CMM_C0DATA_H	0X95
#define TMD2771_CMM_C1DATA_L	0X96
#define TMD2771_CMM_C1DATA_H	0X97

#ifdef CONFIG_CUSTOM_KERNEL_ALSPS_MODULE
extern bool alsps_success_Flag;
#endif

#endif
