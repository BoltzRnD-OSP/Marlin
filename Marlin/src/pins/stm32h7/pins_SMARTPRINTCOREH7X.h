/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define BOARD_INFO_NAME      "SMARTPRINTCOREH7X"

// Motor-1 (X-axis)
#define X_STEP_PIN PG3
#define X_DIR_PIN PG4
#define X_ENABLE_PIN !PG0
#define X_MIN_PIN !PC0
//#define X_MAX_POS 200
//#define X_HOME_BUMP_MM 2
#define X_CURRENT 800  // Adjust the current as needed

// Motor-2 (Y-axis)
#define Y_STEP_PIN PG8
#define Y_DIR_PIN PG9
#define Y_ENABLE_PIN !PG5
#define Y_MIN_PIN !PC1
//#define Y_MAX_POS 200
//#define Y_HOME_BUMP_MM 2
#define Y_CURRENT 800  // Adjust the current as needed

// Motor-3 (Z-axis)
#define Z_STEP_PIN PG13
#define Z_DIR_PIN PG14
#define Z_ENABLE_PIN !PG10
#define Z_MIN_PIN !PC_2
//#define Z_MAX_POS 200
//#define Z_HOME_BUMP_MM 2
#define Z_CURRENT 800  // Adjust the current as needed

// Extruder (E0)
#define E0_STEP_PIN PF4
#define E0_DIR_PIN PF15
#define E0_ENABLE_PIN !PG15
#define E0_CURRENT 800  // Adjust the current as needed

// Extruder1 (E1)
#define E1_STEP_PIN PD7
#define E1_DIR_PIN PD10
#define E1_ENABLE_PIN !PD4
#define E1_CURRENT 800  // Adjust the current as needed

// Bed
#define HEATER_BED_PIN PB2
#define TEMP_BED_PIN PF11

// Heaters
#define HEATER_0_PIN PA10
#define HEATER_1_PIN PB11
#define TEMP_0_PIN PF11
#define TEMP_1_PIN PF12

// Fans
#define FAN0_PIN PB0
#define FAN1_PIN PB3
#define FAN2_PIN PB1
#define FAN3_PIN PB4

// MCU
#define SERIAL_PORT_2 -1
#define BAUDRATE 115200

// Printer
//#define X_BED_SIZE 200
//#define Y_BED_SIZE 200
//#define Z_MAX_POS 200
//#define MAX_FEEDRATE {300, 300, 5, 100}  // Adjust as needed

// TMC2208 configuration
#define X_TMC_UART_PIN PG1
#define Y_TMC_UART_PIN PG6
#define Z_TMC_UART_PIN PG11
#define E0_TMC_UART_PIN PF2

// NeoPixel Config
#define NEOPIXEL_PIN PB9
#define NEOPIXEL_COUNT 10
#define NEOPIXEL_COLOR_ORDER GRB
#define NEOPIXEL_RED 0.1
#define NEOPIXEL_GREEN 0.6
#define NEOPIXEL_BLUE 0.2

// Led Effect
#define NEOPIXEL_PANEL_IDLE true
#define NEOPIXEL_FRAME_RATE 24

// Uncomment the following lines if you have a BLTouch or other specific features
//#define BLTOUCH
//#define PROBE_PIN PA4
//#define PS_ON_PIN PA8
//#define CUSTOM_PROBE

// Uncomment the following lines if you have additional servos
//#define NUM_SERVOS 4
//#define SERVO0_PIN PB5
//#define SERVO1_PIN PB6
//#define SERVO2_PIN PB7
//#define SERVO3_PIN PB8

// Configuration.h

// Enable SD Card support using SDMMC
#define SDSUPPORT

// Select the SD card type
#define SDCARD_CONNECTION ONBOARD
#define SDCARD_CS_PIN -1  // Set to -1 for SDMMC

// Enable SDMMC support for the onboard SD card
#define SDMMC_SUPPORT

// Set the pin configuration for SDMMC (for STM32H7xx)
#define SDMMC_CLK_PIN PC12
#define SDMMC_CMD_PIN PD2
#define SDMMC_D0_PIN PC8
#define SDMMC_D1_PIN PC9
#define SDMMC_D2_PIN PC10
#define SDMMC_D3_PIN PC11

// Additional settings
//#define SD_ALWAYS_CHECK_AUTOREPORT
//#define SDCARD_SORT_ALPHA
//#define SD_ABORT_ON_ENDSTOP_HIT
//#define FILAMENT_LCD_DISPLAY

// Uncomment the following line if you want to enable the SD card menu on the LCD
//#define ULTRA_LCD

// Enable the specific LCD you are using
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

// If you are using a different LCD, uncomment and set the appropriate option
//#define DOGLCD
//#define ANET_FULL_GRAPHICS_LCD

// ...

// Other configurations in Configuration.h
