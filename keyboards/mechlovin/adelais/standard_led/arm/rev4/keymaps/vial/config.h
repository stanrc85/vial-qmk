/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x68, 0x75, 0xF6, 0x35, 0xEF, 0xAB, 0xEF, 0xEA}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

#define RGBLIGHT_SLEEP  // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 60000  // 1 min (60 seconds) 


#define INDICATOR_PIN_0 B2
#define INDICATOR_PIN_1 C15
#define INDICATOR_PIN_2 B9