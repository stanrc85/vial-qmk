/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x79, 0x23, 0xBB, 0xEF, 0xD1, 0xA9, 0x46, 0x7B}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define RGBLIGHT_SLEEP  // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
//#define RGBLIGHT_TIMEOUT 60000  // 1 min (60 seconds) 
#define RGBLIGHT_TIMEOUT 300000