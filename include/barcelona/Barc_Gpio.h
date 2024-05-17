/* include/barcelona/Barc_Gpio.h
 *
 * Public interface for the GPIO driver.
 *
 * Copyright (C) 2004-2007 TomTom BV <http://www.tomtom.com/>
 * Author: Dimitry Andric <dimitry.andric@tomtom.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __INCLUDE_BARCELONA_BARC_GPIO_H
#define __INCLUDE_BARCELONA_BARC_GPIO_H

#ifndef __INCLUDE_BARCELONA_TYPES_H
#include <barcelona/types.h>
#endif /* __INCLUDE_BARCELONA_TYPES_H */

#include <linux/ioctl.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define GPIO_DEVNAME					"hwstatus"
#define GPIO_MAJOR						240

/* For IOR_HWSTATUS ioctl */
typedef struct {
	UINT16 u8InputStatus;
	UINT8 u8DockStatus;
} HARDWARE_STATUS;

/* For HARDWARE_STATUS::u8InputStatus */
#define ONOFF_MASK                   0x001	/* On-off button      */
#define USB_DETECT_MASK              0x002	/* USB power detect   */
#define DOCK_LIGHTS_MASK             0x004	/* Lights detect */
#define DOCK_IGNITION_MASK           0x008	/* Ignition detect */
#define DOCK_EXTMIC_MASK             0x010	/* External microphone detect */
#define DOCK_HEADPHONE_MASK          0x020	/* Headphone detect */
#define DOCK_LINEIN_MASK             0x040	/* Line in detect PIN on K4 dock conn */
#define DOCK_RXD_DETECT_MASK         0x080	/* Serial detect via RXD break / interrupt signalling */
#define DOCK_ONOFF_MASK              0x100
#define DOCK_FM_TRANSMITTER_MASK     0x200
#define DOCK_MAINPOWER_ONOFF         0x400
#define DOCK_IPOD_DETECT             0x800
#define DOCK_TMC_DETECT              0x1000
#define LOW_DC_VCC_DETECT            0x2000	/* Sample the LOW_DC_VCC line using GetInput() */
#define LOW_DC_VCC_PEAK_DETECT       0x4000	/* Low peak(s) detected using edge triggered IRQ */

/* For HARDWARE_STATUS::u8DockStatus */
#define DOCK_NONE	0
#define DOCK_WINDSCREEN	1
#define DOCK_CRIB	2
#define DOCK_DESK	3
#define DOCK_VIB	4
#define DOCK_MOTOR	5
#define DOCK_RADIO	6
#define DOCK_PERMANENT	DOCK_CRIB
#define DOCK_WINDSCR_WO_FM	7

/* GPIO driver ioctls */
#define GPIO_DRIVER_MAGIC	'U'
#define IOR_HWSTATUS		_IOR(GPIO_DRIVER_MAGIC, 0, HARDWARE_STATUS)
#define IOR_DISK_ACCESS		_IOR(GPIO_DRIVER_MAGIC, 7, UINT32)
#define IOR_BT_MODE		_IOR(GPIO_DRIVER_MAGIC, 8, UINT32)
#define IOR_GET_BT_ERROR	_IOW(GPIO_DRIVER_MAGIC, 9, UINT32)
#define IOR_SET_BT_ERROR	_IOR(GPIO_DRIVER_MAGIC, 10, UINT32)
#define IOW_RESET_ONOFF_STATE	_IOR(GPIO_DRIVER_MAGIC, 12, UINT32)
#define IOW_ENABLE_DOCK_UART	_IOW(GPIO_DRIVER_MAGIC, 13, UINT32)
#define IOW_GSM_ON		_IO(GPIO_DRIVER_MAGIC,  14)
#define OBSOLETE_IOW_SET_FM_FREQUENCY	_IOW(GPIO_DRIVER_MAGIC, 15, UINT32)
#define IOW_SET_MEMBUS_SPEED	_IOW(GPIO_DRIVER_MAGIC, 16, UINT32)
#define IOW_CYCLE_DOCK_POWER	_IO(GPIO_DRIVER_MAGIC,  17)
#define IOW_GSM_OFF		_IO(GPIO_DRIVER_MAGIC,  18)
#define IOW_FACTORY_TEST_POINT  _IOW(GPIO_DRIVER_MAGIC, 19, UINT32)
#define IOW_POKE_RESET_BUTTON	_IOW(GPIO_DRIVER_MAGIC, 20, UINT32)
#define IOW_RTCALARM_SUICIDE	_IOW(GPIO_DRIVER_MAGIC, 21, UINT32)
/* IOW_SET_DVS_HACK removed, solved using CPUFREQ in mainbranch */
#define IOW_USB_VBUS_WAKEUP	_IOW(GPIO_DRIVER_MAGIC, 23, UINT32)
#define IOW_KRAKOW_RDSTMC_HACK_VBUSOFF	_IOW(GPIO_DRIVER_MAGIC, 24, UINT32)
#define IOW_KRAKOW_RDSTMC_HACK_VBUSINP	_IOW(GPIO_DRIVER_MAGIC, 25, UINT32)
#define IOW_RTCALARM_WAKEUP	_IOW(GPIO_DRIVER_MAGIC, 26, UINT32)
#define IOW_FORCE_LOW_DC_VCC_HIGH	_IOW(GPIO_DRIVER_MAGIC, 27, UINT32)
#define IOW_FORCE_LOW_DC_VCC_IRQ	_IOW(GPIO_DRIVER_MAGIC, 28, UINT32)
#define IOW_RTCALARM_APP_SUICIDE	_IOW(GPIO_DRIVER_MAGIC, 29, UINT32)

void gpio_suicide(void);
void gpio_force_update(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __INCLUDE_BARCELONA_BARC_GPIO_H */

/* EOF */
