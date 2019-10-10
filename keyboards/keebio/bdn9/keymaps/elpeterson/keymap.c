#include QMK_KEYBOARD_H

enum layer {
    MACRO,
    ARROW,
    GLOW,
};

#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(AG_SWAP_SONG)
  #define GOODBYE_SONG SONG(AG_NORM_SONG)
#endif

/* Toggle between layers */
#define LYRTOG TG(MACRO)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MACRO] = LAYOUT(
        KC_NO,   LYRTOG,  KC_NO,
        KC_HOME, KC_UP,   KC_END,
        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [ARROW] = LAYOUT(
        RESET,   KC_TRNS, RESET,
        KC_HOME, KC_UP,   KC_END,
        KC_LEFT, KC_DOWN, KC_RGHT
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 1) { /* Second encoder */
    if (clockwise) {
      tap_code(KC_UP);
    } else {
      tap_code(KC_DOWN);
    }
  }
}
