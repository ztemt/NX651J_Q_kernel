/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2017, 2019 The Linux Foundation. All rights reserved.
 */

#ifndef __BATTERY_H
#define __BATTERY_H

struct charger_param {
	u32 fcc_step_delay_ms;
	u32 fcc_step_size_ua;
	u32 smb_version;
	u32 hvdcp3_max_icl_ua;
	//Begin  [0016004715,fix the QC3.0 charge power problem 20191128]
	u32 forced_main_fcc;
	//End     [0016004715,fix the QC3.0 charge power problem 20191128]
};

int qcom_batt_init(struct charger_param *param);
void qcom_batt_deinit(void);
#endif /* __BATTERY_H */
