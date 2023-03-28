#include "stanrc85.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

#if defined(HAS_ROTARY)
  bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    return true;
  }
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case KC_MAKE:
    if (!record->event.pressed) {
      uint8_t mods = get_mods();
      clear_mods();
        if (mods & MOD_MASK_SHIFT) {
          send_string_with_delay_P(PSTR("qmk flash -j 6 -kb " QMK_KEYBOARD " -km " QMK_KEYMAP "\n"), 10); //New way
          reset_keyboard();
        }
        else
          send_string_with_delay_P(PSTR("qmk compile -j 6 -kb " QMK_KEYBOARD " -km " QMK_KEYMAP "\n"), 10); //New way
      set_mods(mods);
      }
    break;
  case KC_RDP: //Opens Windows RDP
    if (!record->event.pressed) {
      register_code(KC_LGUI);
      tap_code(KC_R);
      unregister_code(KC_LGUI);
      wait_ms(200);
      send_string_with_delay_P(PSTR("mstsc"), 10);
      send_string_with_delay_P(PSTR(SS_TAP(X_ENTER)), 10);
    }
    break;
  }
  return process_record_keymap(keycode, record);
}
