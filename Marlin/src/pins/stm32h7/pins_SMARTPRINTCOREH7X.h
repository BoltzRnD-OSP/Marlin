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
#define X_ENABLE_PIN PG0
//#define X_MIN_PIN !PC0
//#define X_MAX_POS 200
//#define X_HOME_BUMP_MM 2
#define X_CURRENT 800  // Adjust the current as needed

// Motor-2 (Y-axis)
#define Y_STEP_PIN PG8
#define Y_DIR_PIN PG9
#define Y_ENABLE_PIN PG5
//#define Y_MIN_PIN !PC1
//#define Y_MAX_POS 200
//#define Y_HOME_BUMP_MM 2
#define Y_CURRENT 800  // Adjust the current as needed

// Motor-3 (Z-axis)
#define Z_STEP_PIN PG13
#define Z_DIR_PIN PG14
#define Z_ENABLE_PIN PG10
//#define Z_MAX_POS 200
//#define Z_HOME_BUMP_MM 2
#define Z_CURRENT 800  // Adjust the current as needed


// End Stops
#define X_STOP_PIN PC0
#define Y_STOP_PIN PC1
#define Z_STOP_PIN PC_2

// Extruder (E0)
#define E0_STEP_PIN PF4
#define E0_DIR_PIN PF15
#define E0_ENABLE_PIN PG15
//#define E0_CURRENT 800  // Adjust the current as needed

// Extruder1 (E1)
#define E1_STEP_PIN PD7
#define E1_DIR_PIN PD10
#define E1_ENABLE_PIN PD4
//#define E1_CURRENT 800  // Adjust the current as needed

// Bed
#define HEATER_BED_PIN PB2
#define TEMP_BED_PIN PF13

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
//#define SERIAL_PORT_2 -1
//#define BAUDRATE 115200

// Printer
//#define X_BED_SIZE 200
//#define Y_BED_SIZE 200
//#define Z_MAX_POS 200
//#define MAX_FEEDRATE {300, 300, 5, 100}  // Adjust as needed

// TMC2209 configuration
//#define X_TMC_UART_PIN PG1
//#define Y_TMC_UART_PIN PG6
//#define Z_TMC_UART_PIN PG11
//#define E0_TMC_UART_PIN PF2
//#define E1_TMC_UART_PIN PD5
//
// SPI pins for TMC2130 stepper drivers
//
//#define TMC_USE_SW_SPI
//#ifndef TMC_SPI_MOSI
//  #define TMC_SPI_MOSI                      PA7
//#endif
//#ifndef TMC_SPI_MISO
//  #define TMC_SPI_MISO                      PA6
//#endif
//#ifndef TMC_SPI_SCK
//  #define TMC_SPI_SCK                       PA5
//#endif

#if HAS_TMC_UART
  //
  // Software serial
  // No Hardware serial for steppers
  //
  #define X_SERIAL_TX_PIN                   PG1
  #define X_SERIAL_RX_PIN        X_SERIAL_TX_PIN

  #define Y_SERIAL_TX_PIN                   PG6
  #define Y_SERIAL_RX_PIN        Y_SERIAL_TX_PIN

  #define Z_SERIAL_TX_PIN                   PG11
  #define Z_SERIAL_RX_PIN        Z_SERIAL_TX_PIN

  #define E0_SERIAL_TX_PIN                  PF2
  #define E0_SERIAL_RX_PIN      E0_SERIAL_TX_PIN

  #define E1_SERIAL_TX_PIN                  PD5
  #define E1_SERIAL_RX_PIN      E1_SERIAL_TX_PIN

  // Reduce baud rate to improve software serial reliability
  #ifndef TMC_BAUD_RATE
    #define TMC_BAUD_RATE                  19200
  #endif

#endif // HAS_TMC_UART

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
#define SERVO0_PIN PB5
//#define SERVO1_PIN PB6
//#define SERVO2_PIN PB7
//#define SERVO3_PIN PB8

// SD Card
#define SD_DETECT_PIN                       PC13
#define SDCARD_CONNECTION ONBOARD
#define ONBOARD_SDIO

//
// EEPROM
//
#define FLASH_EEPROM_EMULATION
//#define SDCARD_EEPROM_EMULATION
//#define QSPI_EEPROM
//#define SPI_EEPROM

#if HAS_SPI_TFT

  #define TFT_SCK_PIN                PE2
  #define TFT_MISO_PIN               PE5
  #define TFT_MOSI_PIN               PE6

  #define BTN_ENC                    PC14
  #define BTN_EN1                    PD14
  #define BTN_EN2                    PD15

  #ifndef TFT_WIDTH
    #define TFT_WIDTH                      480
  #endif
  #ifndef TFT_HEIGHT
    #define TFT_HEIGHT                     320
  #endif

  /**
   *       J18                                       J24
   *      ------                                    ------
   *      |  1 | 5V_SPARE                           |  1 | 5V_SPARE
   *      |  2 | SC_BTN_ENC (PC14)                  |  2 | RST_IN
   *      |  3 | SC_BEEPER  (PC15)                  |  3 | EM_STOP    (PD13)
   *      |  4 | LCD_EN     (PE15)                  |  4 | SC_BTN_EN2 (PD15)
   *      |  5 | LCD_RS     (PE14)                  |  5 | SC_BTN_EN1 (PD14)
   *      |  6 | LCD_D4     (PE13)                  |  6 | SPI4_CS1   (PE3)
   *      |  7 | LCD_D5     (PE12)                  |  7 | SPI4_SCK   (PE2)
   *      |  8 | LCD_D6     (PE11)                  |  8 | SPI4_MOSI  (PE6)
   *      |  9 | LCD_D7     (PE10)                  |  9 | SPI4_MISO  (PE5)
   *      | 10 | GND                                | 10 | GND
   *      ------                                    ------
   */
  #define TFT_CS_PIN               PE3  // SPI1_CS
  #define TFT_DC_PIN               PE10  // SPI1_RS
  #define TFT_A0_PIN                TFT_DC_PIN

  #define TFT_RESET_PIN            PE14

  #define LCD_BACKLIGHT_PIN        PE15
  #define TFT_BACKLIGHT_PIN  LCD_BACKLIGHT_PIN

  #define TOUCH_BUTTONS_HW_SPI
  #define TOUCH_BUTTONS_HW_SPI_DEVICE 4

  #define TOUCH_CS_PIN             PE13  // SPI1_NSS
  #define TOUCH_SCK_PIN            PE2  // SPI1_SCK
  #define TOUCH_MISO_PIN           PE5  // SPI1_MISO
  #define TOUCH_MOSI_PIN           PE6  // SPI1_MOSI

  #define LCD_READ_ID                     0xD3
  #define LCD_USE_DMA_SPI

  #define TFT_BUFFER_WORDS               14400

  #ifndef TOUCH_CALIBRATION_X
    #define TOUCH_CALIBRATION_X         -17253
  #endif
  #ifndef TOUCH_CALIBRATION_Y
    #define TOUCH_CALIBRATION_Y          11579
  #endif
  #ifndef TOUCH_OFFSET_X
    #define TOUCH_OFFSET_X                 514
  #endif
  #ifndef TOUCH_OFFSET_Y
    #define TOUCH_OFFSET_Y                 -24
  #endif
  #ifndef TOUCH_ORIENTATION
    #define TOUCH_ORIENTATION TOUCH_LANDSCAPE
  #endif

#elif ENABLED(CR10_STOCKDISPLAY)

      #define LCD_PINS_RS            PE14
      #define LCD_PINS_EN            PE15
      #define LCD_PINS_D4            PE13
      #define BTN_EN1                PD14
      #define BTN_EN2                PD15
      #define BEEPER_PIN             PC15
      #define BTN_ENC                PC14

#endif

// Enable SDMMC support for the onboard SD card
//#define SDMMC_SUPPORT

// Set the pin configuration for SDMMC (for STM32H7xx)
//#define SDMMC_CLK_PIN PC12
//#define SDMMC_CMD_PIN PD2
//#define SDMMC_D0_PIN PC8
//#define SDMMC_D1_PIN PC9
//#define SDMMC_D2_PIN PC10
//#define SDMMC_D3_PIN PC11

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
