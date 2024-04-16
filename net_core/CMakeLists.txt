#
# Copyright (c) 2022 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
#

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(net_core)

zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

FILE(GLOB app_sources src/*.c)

target_sources(app PRIVATE ${app_sources})

