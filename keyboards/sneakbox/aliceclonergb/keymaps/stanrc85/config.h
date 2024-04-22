  #define INDICATOR_PIN_0 D7
  #define INDICATOR_PIN_1 D6
  #define INDICATOR_PIN_2 D4
  #define VIAL_KEYBOARD_UID {0xCD, 0x6D, 0xFB, 0xBE, 0x43, 0x43, 0xD2, 0x7E}
  #define VIAL_UNLOCK_COMBO_ROWS { 0, 9 }
  #define VIAL_UNLOCK_COMBO_COLS { 0, 3 }
  #define RGBLIGHT_SLEEP  // allows us to use rgblight_suspend() and rgblight_wakeup() in keymap.c
  //#define RGBLIGHT_TIMEOUT 60000  // 1 min (60 seconds) 
  #define RGBLIGHT_TIMEOUT 300000
  #define VIAL_TAP_DANCE_ENTRIES 8