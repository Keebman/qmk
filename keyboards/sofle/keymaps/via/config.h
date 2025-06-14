/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define ENCODER_DIRECTION_FLIP
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define EE_HANDS
#define SPLIT_USB_DETECT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

// Add RGB underglow
//  #define RGB_DI_PIN D3
//  #define RGBLED_NUM 74
//  #define RGBLED_SPLIT {37,37}
//  #define RGBLIGHT_ANIMATIONS
//  #define RGBLIGHT_LIMIT_VAL 192
