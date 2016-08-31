/*
 * battery-ini-model-data.h: Battery INI model data for different platforms.
 *
 * Copyright (c) 2013, NVIDIA Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _MACH_TEGRA_BATTERY_INI_MODEL_DATA_H
#define _MACH_TEGRA_BATTERY_INI_MODEL_DATA_H

#include <linux/max17048_battery.h>
#include <linux/power/max17042_battery.h>

/*
 * Battery model data for YOKU 4100mA for MAX17048 for TN8.
 * System shutdown voltage: 3.0V
 * INI Files: 1283683
 */
static struct max17048_battery_model __maybe_unused
			tn8_yoku_4100mA_max17048_battery = {
	.rcomp		= 57,
	.soccheck_A	= 119,
	.soccheck_B	= 121,
	.bits		= 18,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0200,
	.hibernate	= 0x3080,
	.vreset		= 0x3c96,
	.valert		= 0x00ff,
	.ocvtest	= 55952,
	.data_tbl = {
		0x98, 0x80, 0xB3, 0x50, 0xB7, 0x90, 0xB9, 0x00,
		0xBA, 0x70, 0xBC, 0x10, 0xBC, 0x50, 0xBC, 0xA0,
		0xBD, 0x20, 0xBE, 0x30, 0xBF, 0x40, 0xC2, 0xF0,
		0xC4, 0x20, 0xC7, 0xE0, 0xCB, 0xF0, 0xD0, 0x90,
		0x00, 0x40, 0x06, 0x70, 0x0E, 0x50, 0x12, 0x00,
		0x18, 0xD0, 0x33, 0x10, 0x31, 0x40, 0x35, 0xD0,
		0x18, 0xD0, 0x19, 0x00, 0x0B, 0xF0, 0x0C, 0x10,
		0x0D, 0x10, 0x07, 0x90, 0x08, 0x00, 0x08, 0x00,
	},
};

/*
 * Battery model data for YOKU 4100mA for MAX17048 for Macallan.
 * System shutdown voltage: 3.0V
 * INI Files: 1283683
 */
static struct max17048_battery_model __maybe_unused
			macallan_yoku_4100mA_max17048_battery = {
	.rcomp		= 57,
	.soccheck_A	= 119,
	.soccheck_B	= 121,
	.bits		= 18,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0200,
	.hibernate	= 0x3080,
	.vreset		= 0x3c96,
	.valert		= 0x00ff,
	.ocvtest	= 55952,
	.data_tbl = {
		0x98, 0x80, 0xB3, 0x50, 0xB7, 0x90, 0xB9, 0x00,
		0xBA, 0x70, 0xBC, 0x10, 0xBC, 0x50, 0xBC, 0xA0,
		0xBD, 0x20, 0xBE, 0x30, 0xBF, 0x40, 0xC2, 0xF0,
		0xC4, 0x20, 0xC7, 0xE0, 0xCB, 0xF0, 0xD0, 0x90,
		0x00, 0x40, 0x06, 0x70, 0x0E, 0x50, 0x12, 0x00,
		0x18, 0xD0, 0x33, 0x10, 0x31, 0x40, 0x35, 0xD0,
		0x18, 0xD0, 0x19, 0x00, 0x0B, 0xF0, 0x0C, 0x10,
		0x0D, 0x10, 0x07, 0x90, 0x08, 0x00, 0x08, 0x00,
	},
};

/*
 * Battery model data for YOKU 3900mA for MAX17048 for Macallan.
 * System shutdown voltage: 3.0V
 * INI Files: 1283683
 */
static struct max17048_battery_model __maybe_unused
			macallan_yoku_3900mA_max17048_battery = {
	.rcomp		= 102,
	.soccheck_A	= 237,
	.soccheck_B	= 239,
	.bits		= 19,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x3c96,
	.valert		= 0xD4AA,
	.ocvtest	= 55952,
	.data_tbl = {
		0x98, 0x60, 0xB0, 0xC0, 0xB7, 0xB0, 0xBA, 0x10,
		0xBB, 0xE0, 0xBC, 0x10, 0xBC, 0xC0, 0xBD, 0xF0,
		0xBF, 0x00, 0xC0, 0x10, 0xC1, 0xF0, 0xC4, 0x00,
		0xC6, 0x70, 0xC8, 0xE0, 0xCA, 0x80, 0xD0, 0x90,
		0x00, 0x80, 0x06, 0xA0, 0x21, 0x40, 0x22, 0x80,
		0x49, 0x90, 0x6C, 0x80, 0x45, 0xA0, 0x2D, 0xE0,
		0x2D, 0xC0, 0x17, 0x80, 0x1A, 0x00, 0x18, 0xA0,
		0x18, 0x20, 0x15, 0x40, 0x0E, 0xA0, 0x0E, 0xA0,
	},
};

/*
 * Battery model data for YOKU 2000mA for MAX17042 for Pluto.
 * System shutdown voltage: 2.9V
 * INI Files: 1264825
 */
static struct max17042_config_data __maybe_unused
			pluto_yoku_2000mA_max17042_battery = {
	.valrt_thresh = 0xff00,
	.talrt_thresh = 0xff00,
	.soc_alrt_thresh = 0xff00,
	.shdntimer = 0xe000,
	.design_cap = 0x1085,
	.at_rate = 0x0000,
	.tgain = 0xBC94,
	.toff = 0x84BA,
	.vempty = 0x93DA,
	.qrtbl00 = 0x2184,
	.qrtbl10 = 0x1300,
	.qrtbl20 = 0x0c00,
	.qrtbl30 = 0x0880,
	.full_soc_thresh = 0x5A00,
	.rcomp0 = 0x0052,
	.tcompc0 = 0x1F2D,
	.ichgt_term = 0x0140,
	.temp_nom = 0x1400,
	.temp_lim = 0x2305,
	.filter_cfg = 0x87A4,
	.config = 0x2210,
	.learn_cfg = 0x2606,
	.misc_cfg = 0x0810,
	.fullcap =  0x1085,
	.fullcapnom = 0x1085,
	.lavg_empty = 0x1000,
	.dqacc = 0x01f4,
	.dpacc = 0x3200,
	.fctc = 0x05e0,
	.kempty0 = 0x0600,
	.cell_technology = POWER_SUPPLY_TECHNOLOGY_LION,
	.cell_char_tbl = {
		/* Data to be written from 0x80h */
		0x9380, 0xAB70, 0xAFA0, 0xB3E0, 0xB790, 0xBB40,
		0xBBD0, 0xBC70, 0xBD90, 0xBE30, 0xC0F0, 0xC380,
		0xC710, 0xCA90, 0xCF70, 0xD480,
		/* Data to be written from 0x90h */
		0x00B0, 0x0610, 0x0600, 0x06F0, 0x0700, 0x2410,
		0x2040, 0x2460, 0x1CE0, 0x09F0, 0x0AB0, 0x08E0,
		0x0880, 0x06F0, 0x05D0, 0x05D0,
		/* Data to be written from 0xA0h */
		0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100,
		0x0100, 0x0100, 0x0100, 0x0100, 0x0100, 0x0100,
		0x0100, 0x0100, 0x0100, 0x0100,
	},
};

/*
 * Battery model data for YOKU 2000mA for MAX17048 for ceres.
 * System shutdown voltage: 3.1V
 * INI Files: 1178638
 */
static struct max17048_battery_model __maybe_unused
			ceres_yoku_2000_ssv_3_1_max17048_battery = {
	.rcomp		= 71,
	.soccheck_A	= 223,
	.soccheck_B	= 225,
	.bits		= 19,
	.alert_threshold= 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x3c96,
	.valert		= 0xD4AA,
	.ocvtest	= 57040,
	.data_tbl = {
		0xA5, 0xF0, 0xAF, 0xB0, 0xB6, 0x60, 0xBA, 0xE0,
		0xBC, 0x00, 0xBC, 0x60, 0xBC, 0xB0, 0xBD, 0x60,
		0xBE, 0x20, 0xC1, 0x50, 0xC4, 0x40, 0xC7, 0x00,
		0xC9, 0xF0, 0xCD, 0x70, 0xD0, 0xF0, 0xD4, 0xD0,
		0x06, 0x60, 0x0E, 0x20, 0x0E, 0x00, 0x32, 0x00,
		0x6C, 0x80, 0x79, 0x60, 0x1D, 0x40, 0x4D, 0x20,
		0x13, 0xC0, 0x15, 0x60, 0x11, 0x80, 0x13, 0x80,
		0x0D, 0xE0, 0x0D, 0xE0, 0x09, 0xE0, 0x09, 0xE0,
	},
};

/*
 * Battery model data for p2454 MAX17048 for Shiled.
 * System shutdown voltage: 3.1V
 */
static struct max17048_battery_model __maybe_unused
			max17048_mdata_p2454 = {
	.rcomp		= 152,
	.soccheck_A	= 206,
	.soccheck_B	= 208,
	.bits		= 19,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg	= 0x0080,
	.hibernate	= 0x3080,
	.vreset		= 0x3c96,
	.valert		= 0xD4AA,
	.ocvtest	= 55744,
	.data_tbl = {
		0xA2, 0x80, 0xA8, 0xF0, 0xAE, 0xD0, 0xB0, 0x90,
		0xB2, 0x60, 0xB3, 0xF0, 0xB5, 0x80, 0xB7, 0x20,
		0xB8, 0xD0, 0xBC, 0x00, 0xBE, 0x20, 0xC0, 0x20,
		0xC3, 0xD0, 0xC9, 0x80, 0xCE, 0xA0, 0xCF, 0xC0,
		0x0A, 0x60, 0x0D, 0xE0, 0x1D, 0x00, 0x1D, 0xE0,
		0x1F, 0xE0, 0x1F, 0xE0, 0x11, 0xC0, 0x11, 0x20,
		0x14, 0x60, 0x0B, 0xE0, 0x14, 0x80, 0x14, 0xC0,
		0x0E, 0x20, 0x12, 0xA0, 0x03, 0x60, 0x03, 0x60,
	},
};

/*
 * Battery model data for p2560  MAX17048 for Shiled.
 * System shutdown voltage: 3.1V
 */
static struct max17048_battery_model __maybe_unused
			max17048_mdata_p2560 = {
	.rcomp          = 105,
	.soccheck_A     = 240,
	.soccheck_B     = 242,
	.bits           = 19,
	.alert_threshold = 0x00,
	.one_percent_alerts = 0x40,
	.alert_on_reset = 0x40,
	.rcomp_seg      = 0x0080,
	.hibernate      = 0x3080,
	.vreset         = 0x3c96,
	.valert         = 0xD4AA,
	.ocvtest        = 55728,
	.data_tbl = {
		0xA9, 0x90, 0xB1, 0x60, 0xB5, 0xC0, 0xB7, 0x80,
		0xBA, 0xF0, 0xBB, 0xA0, 0xBB, 0xE0, 0xBC, 0x50,
		0xBC, 0xC0, 0xBD, 0x30, 0xBE, 0xD0, 0xC0, 0x90,
		0xC1, 0xD0, 0xC6, 0x70, 0xCA, 0xD0, 0xCF, 0xB0,
		0x0A, 0xF0, 0x0D, 0xE0, 0x0B, 0x30, 0x01, 0x90,
		0x53, 0xB0, 0x78, 0xD0, 0x77, 0xB0, 0x7C, 0xF0,
		0x7A, 0x70, 0x13, 0xE0, 0x13, 0x90, 0x1F, 0x30,
		0x19, 0x00, 0x12, 0x10, 0x10, 0xB0, 0x10, 0xB0,
	},
};

#endif