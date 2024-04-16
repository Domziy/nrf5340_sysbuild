/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main_net, LOG_LEVEL_DBG);


int main(void)
{
	LOG_DBG("Hello World! %s\n", CONFIG_BOARD);
	while(1)
	{
		k_msleep(1000);
	}

	return 0; /* Dummy application. Unused main */
}
