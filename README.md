# NRF5340 sysbuild repository without a 32kHz crystal

This repository contains the sysbuild configuration for projects using the NRF5340 chipset without a 32kHz crystal, supporting the build of both the application core and network core outside of the nrf SDK (ncs)

Added sysbuild folder structure to overlay mcuboot.conf to synthesize its own LFCLK from HFCLK if you don't have a 32kHz attached to it.

## Repository Structure

This repository includes all necessary configuration files and scripts to build and run applications targeting both cores of the NRF5340 chipset:

- `prj.conf` - Application core prj.conf file.
- `CMakeLists.txt` - Application core CMakeLists.txt file.
- `src/` - Application core source files (parent).
- `net_core/` - Network core configurations and source files.

## Prerequisites

Before building the sysbuild, ensure you have the following software installed:
- ARM GCC Compiler
- NRF Command Line Tools
- NRF Connect SDK

## Tools and notes

When making the build configuration in Visual Studio code remember to tick the "sysbuild" configuration.

This was tested on:
  - nrf5340dk_nrf5340 development kit
  - nRF SDK v2.6.0
