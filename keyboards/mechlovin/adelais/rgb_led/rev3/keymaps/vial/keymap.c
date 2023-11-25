/* Copyright 2020 Team Mechlovin
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
#include QMK_KEYBOARD_H

enum my_keycodes {
  BL_TOG = QK_KB_0,
  BL_EFFECT,
  BL_ISPD,
  BL_DSPD,
  BL_IHUE,
  BL_DHUE,
  BL_ISAT,
  BL_DSAT,
  BL_IVAL,
  BL_DVAL
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
     KC_SPC, KC_ESC,  KC_1, KC_2,    KC_3, KC_4,   KC_5, KC_6,            KC_7, KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
     KC_SPC, KC_TAB,  KC_Q, KC_W,    KC_E, KC_R,   KC_T,                  KC_Y, KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_SLSH,
     KC_SPC, KC_CAPS, KC_A, KC_S,    KC_D, KC_F,   KC_G,                  KC_H, KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
             KC_LSFT,       KC_Z,    KC_X, KC_C,   KC_V, KC_B,            KC_N, KC_M,   KC_COMM, KC_DOT,  KC_BSLS, MO(1),   KC_RSFT, KC_UP,
             KC_LCTL,       KC_LALT,       KC_SPC,       MO(2),                 KC_SPC,          KC_RALT,                            KC_RCTL ),
    [1] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [2] = LAYOUT_all(
     QK_BOOT, KC_TRNS, BL_TOG, BL_EFFECT, BL_ISPD, BL_DSPD, BL_IHUE, BL_DHUE,         BL_ISAT, BL_DSAT, BL_IVAL, BL_DVAL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS,   KC_P7,   KC_P8,   KC_P9, KC_PSLS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS,   KC_P4,   KC_P5,   KC_P6, KC_PAST,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS,   KC_P1,   KC_P2,   KC_P3, KC_PPLS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,            KC_P0,          KC_PDOT,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [3] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
    //                  Encoder 1                
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
#ifdef RGB_MATRIX_ENABLE
            case BL_TOG: // toggle rgb matrix
                rgb_matrix_toggle();
                return false;
            case BL_EFFECT:
                rgb_matrix_step();
                return false;
            case BL_ISPD:
                rgb_matrix_increase_speed();
                return false;
            case BL_DSPD:
                rgb_matrix_decrease_speed();
                return false;
            case BL_IHUE:
                rgb_matrix_increase_hue();
                return false;
            case BL_DHUE:
                rgb_matrix_decrease_hue();
                return false;
            case BL_ISAT:
                rgb_matrix_increase_sat();
                return false;
            case BL_DSAT:
                rgb_matrix_decrease_sat();
                return false;
            case BL_IVAL:
                rgb_matrix_increase_val();
                return false;
            case BL_DVAL:
                rgb_matrix_decrease_val();
                return false;
#endif
            default:
                break;
        }
    }
    return true;
}

bool rgb_matrix_indicators_user(void) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 1:
                rgb_matrix_set_color(0, 0, 255, 0);
                break;
            case 2:
                rgb_matrix_set_color(0, 0, 0, 255);
                break;
            case 3:
                rgb_matrix_set_color(0, 255, 255, 255);
                break;
            default:
                break;
        }
    return true;
}

static uint32_t key_timer; // timer to track the last keyboard activity
static void refresh_rgb(void); // refreshes the activity timer and RGB, invoke whenever activity happens
static void check_rgb_timeout(void); // checks if enough time has passed for RGB to timeout
bool is_rgb_timeout = false; // store if RGB has timed out or not in a boolean


void refresh_rgb() {
  key_timer = timer_read32(); // store time of last refresh
  if (is_rgb_timeout) { // only do something if rgb has timed out
    print("Activity detected, turning on RGB\n");
    is_rgb_timeout = false;
    rgb_matrix_set_suspend_state(false);
    rgblight_wakeup();
  }
}

void check_rgb_timeout() {
  if (!is_rgb_timeout && timer_elapsed32(key_timer) > RGBLIGHT_TIMEOUT) {
    rgblight_suspend();
    rgb_matrix_set_suspend_state(true);
    print("Idle timeout reached, turning off RGB\n");
    is_rgb_timeout = true;
  }
}


void housekeeping_task_user(void) {
  #ifdef RGBLIGHT_TIMEOUT
  check_rgb_timeout();
  #endif
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  #ifdef RGBLIGHT_TIMEOUT
  if (record->event.pressed) refresh_rgb();
  #endif
}


void post_encoder_update_user(uint8_t index, bool clockwise) {
  #ifdef RGBLIGHT_TIMEOUT
  refresh_rgb();
  #endif
}