/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

/**
 * Animated boot screen example
 *
 * Create your own with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_ANIMATED
#define CUSTOM_BOOTSCREEN_TIMEOUT    500        // (ms) Extra timeout after the animation

/**
 * Enable one of the following two options depending on your needs.
 * Also edit the "custom_bootscreen_animation" at the bottom of this file.
 */
#define CUSTOM_BOOTSCREEN_FRAME_TIME 100        // (ms) Same time for all frames
//#define CUSTOM_BOOTSCREEN_ANIMATED_FRAME_TIME // Each frame also has a duration

#define CUSTOM_BOOTSCREEN_BMPWIDTH   120

const unsigned char custom_start_bmp[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00001100,B00110000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00001100,B00110000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00001100,B00000000,B00001111,
  B10001100,B00110000,B11000111,B10000011,B10001100,B00110000,B11100111,
  B10001100,B00110000,B11001111,B11000111,B11001100,B00110001,B11110011,
  B10001100,B00110000,B11011100,B11101100,B11101100,B00110011,B10111001,
  B10001100,B00110000,B11011000,B01101100,B01101100,B00110011,B00011001,
  B10001100,B00110000,B11010000,B01101100,B00001100,B00110011,B00011001,
  B10001100,B00110000,B11011000,B01101100,B00001100,B00110011,B00011001,
  B10001100,B00110000,B11011100,B01101100,B00001110,B00111011,B00011001,
  B10001100,B00110000,B11001111,B01111100,B00000111,B10011111,B00011001,
  B10001100,B00110000,B11000111,B01111100,B00000011,B10001111,B00011001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

#ifdef CUSTOM_BOOTSCREEN_ANIMATED

const unsigned char custom_start_bmp1[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

const unsigned char custom_start_bmp2[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00000000,B00000000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00000000,B00000000,B00001111,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000111,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000011,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000000,B00000000,B00000000,B00000000,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

const unsigned char custom_start_bmp3[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00000000,B00000000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00000000,B00000000,B00001111,
  B10001100,B00110000,B11000111,B10000000,B00000000,B00000000,B00000111,
  B10001100,B00110000,B11001111,B11000000,B00000000,B00000000,B00000011,
  B10001100,B00110000,B11011100,B11100000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01100000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11010000,B01100000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01100000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11011100,B01100000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11001111,B01110000,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000111,B01110000,B00000000,B00000000,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

const unsigned char custom_start_bmp4[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00000000,B00000000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00000000,B00000000,B00001111,
  B10001100,B00110000,B11000111,B10000011,B10000000,B00000000,B00000111,
  B10001100,B00110000,B11001111,B11000111,B11000000,B00000000,B00000011,
  B10001100,B00110000,B11011100,B11101100,B11100000,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B01100000,B00000000,B00000001,
  B10001100,B00110000,B11010000,B01101100,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11011100,B01101100,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11001111,B01111100,B00000000,B00000000,B00000001,
  B10001100,B00110000,B11000111,B01111100,B00000000,B00000000,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

const unsigned char custom_start_bmp5[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00001100,B00000000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00001100,B00000000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00001100,B00000000,B00001111,
  B10001100,B00110000,B11000111,B10000011,B10001100,B00000000,B00000111,
  B10001100,B00110000,B11001111,B11000111,B11001100,B00000000,B00000011,
  B10001100,B00110000,B11011100,B11101100,B11101100,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B01101100,B00000000,B00000001,
  B10001100,B00110000,B11010000,B01101100,B00001100,B00000000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B00001100,B00000000,B00000001,
  B10001100,B00110000,B11011100,B01101100,B00001110,B00000000,B00000001,
  B10001100,B00110000,B11001111,B01111100,B00000111,B10000000,B00000001,
  B10001100,B00110000,B11000111,B01111100,B00000011,B10000000,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

const unsigned char custom_start_bmp6[] PROGMEM = {
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,
  B10000011,B11001111,B00000000,B00000000,B00001100,B00110000,B00111111,
  B10000111,B11111111,B10000000,B00000000,B00001100,B00110000,B00011111,
  B10000110,B01111001,B10000000,B00000000,B00001100,B00000000,B00001111,
  B10001100,B00110000,B11000111,B10000011,B10001100,B00110000,B00000111,
  B10001100,B00110000,B11001111,B11000111,B11001100,B00110000,B00000011,
  B10001100,B00110000,B11011100,B11101100,B11101100,B00110000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B01101100,B00110000,B00000001,
  B10001100,B00110000,B11010000,B01101100,B00001100,B00110000,B00000001,
  B10001100,B00110000,B11011000,B01101100,B00001100,B00110000,B00000001,
  B10001100,B00110000,B11011100,B01101100,B00001110,B00111000,B00000001,
  B10001100,B00110000,B11001111,B01111100,B00000111,B10011100,B00000001,
  B10001100,B00110000,B11000111,B01111100,B00000011,B10001100,B00000001,
  B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,
  B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000
};

#ifdef CUSTOM_BOOTSCREEN_ANIMATED_FRAME_TIME

  // Each Frame has its own custom duration
  const boot_frame_t custom_bootscreen_animation[] PROGMEM = {
    { custom_start_bmp1, 2000 },  // 2.0s
    { custom_start_bmp2,  100 },  // 0.1s x 5 frames
    { custom_start_bmp3,  100 },
    { custom_start_bmp4,  100 },
    { custom_start_bmp5,  100 },
    { custom_start_bmp6,  100 },
    { custom_start_bmp,   500 }   // 0.5s
  };

#else

  // Each frames shows for CUSTOM_BOOTSCREEN_FRAME_TIME
  const unsigned char * const custom_bootscreen_animation[] PROGMEM = {
    custom_start_bmp1, custom_start_bmp2, custom_start_bmp3,
    custom_start_bmp4, custom_start_bmp5, custom_start_bmp6,
    custom_start_bmp
  };

#endif

#endif // CUSTOM_BOOTSCREEN_ANIMATED
