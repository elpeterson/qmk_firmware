#include QMK_KEYBOARD_H

#define _QW 0
#define _RAISE 1
#define _LOWER 2

enum custom_keycodes {
  COG,
  MIC,
  REC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | =      | -      | 6      | 7      | 8      | 9      | 0      | BSPC   |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | {      |      } | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------| [      |      ] |--------+--------+--------+-----------------+--------|
     * | LSHFT  | A      | S      | D      | F      | G      |--------+--------| H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------| HOME   | END    |--------+--------+--------------------------+--------|
     * | LCTRL  | Z      | X      | C      | V      | B      |        |        | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LATL   | WIN    | REC    | MIC    |      SPACE      | RAISE  | LOWER  | DEL    | PAUSE  | MUTEVOL| COG    | WIN    | RCTRL  |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_QW] = LAYOUT_hobbes(\
        KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_EQL,  KC_MINS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT, \
        KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,   KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, \
        KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME, KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
        KC_LALT,  KC_LGUI, REC,     MIC,     KC_SPC,  KC_SPC,  TG(1),   TG(2),   KC_DEL,  KC_MPLY, KC_MUTE, COG,     KC_RGUI, KC_RCTL \
    ),

    /* FNC
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | GRV    | F1     | F2     | F3     | F4     | F5     | F11    | F12    | F6     | F7     | F8     | F9     | F10    |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------|        |        |--------+--------+--------+-----------------+--------|
     * |        |        |        |        |        |        |--------+--------|        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------|        |        |--------+--------+--------------------------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
     * |        |        |        |        |                 | TRNS   | TRNS   |        |        |        |        |        |        |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_RAISE] = LAYOUT_hobbes(\
        KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_NO,   KC_NO,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_NO, \
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO \
    ),

    /* RGB
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------|        |        |--------+--------+--------+-----------------+--------|
     * |        |        |        |        |        |        |--------+--------|        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------|        |        |--------+--------+--------------------------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
     * |        |        |        |        |                 | TRNS   | TRNS   |        |        |        |        |        |        |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_LOWER] = LAYOUT_hobbes(\
        RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW,RGB_M_SN,RGB_M_K, RGB_M_X, RGB_M_G, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,   RGB_HUD, RGB_HUI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,   RGB_SAD, RGB_SAI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,   RGB_VAD, RGB_VAI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO \
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COG:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("THIS IS THE COG KEY");
      }
      return false;
      break;
    case MIC:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("THIS IS THE MIC KEY");
      }
      return false;
      break;
    case REC:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("THIS IS THE REC KEY");
      }
      return false;
      break;
  }
  return true;
};
