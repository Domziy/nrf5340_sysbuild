/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/logging/log.h>
#include <zephyr/kernel.h>



LOG_MODULE_REGISTER(main_app, LOG_LEVEL_DBG);

int main(void)
{
	LOG_DBG("Hello World! %s\n", CONFIG_BOARD);

	while(1)
	{

		k_msleep(1000);
	}
	return 0;
}