#
# Copyright (c) 2023 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#

# Add net_core project
ExternalZephyrProject_Add(
    APPLICATION net_core
    SOURCE_DIR ${APP_DIR}/net_core
    BOARD nrf5340dk_nrf5340_cpunet
  )
set_property(GLOBAL APPEND PROPERTY PM_DOMAINS CPUNET)
set_property(GLOBAL APPEND PROPERTY PM_CPUNET_IMAGES net_core)
set_property(GLOBAL PROPERTY DOMAIN_APP_CPUNET net_core)
set(CPUNET_PM_DOMAIN_DYNAMIC_PARTITION net_core CACHE INTERNAL "")

# Add a dependency so that the net_core sample will be built and flashed first
add_dependencies(nrf5340_sysbuild net_core)
# Add dependency so that the net_core image is flashed first.
sysbuild_add_dependencies(FLASH nrf5340_sysbuild net_core)
