#
# Copyright (c) 2022 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
if (NOT SYSBUILD)
	message(WARNING
		" This is multi-image application that should be build using sysbuild.\n"
		" Add --sysbuild argument to west build command to prepare all the images.")
endif()

project(GatewayFW_sysbuild)

# Example to add sources zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/HAL)
zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# Example to add sources FILE(GLOB app_sources HAL/*.c src/*.c)
FILE(GLOB app_sources src/*.c)

target_sources(app PRIVATE ${app_sources})
