/* Copyright 2017 Wunder
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

// Layer shorthand
#define _QW  0
#define _RGB 1
#define _FN  2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LSHIFT | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LCTRL  | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LGUI   | LALT   | 1      | 2      | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | MUTE   | VOL-   | VOL+   | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_QW] = LAYOUT_ortho_5x15(
    KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_EQL,  KC_GRV,  KC_MINS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_LSFT, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LCTL, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LALT, KC_LGUI, TO(1),  OSL(2), KC_SPC, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_MUTE, KC_VOLD, KC_VOLU, KC_RALT, KC_RGUI, KC_RCTL
  ),

/* RGB EXTRAS
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | PLAIN  | BREATHE| RAINBOW| SWIRL  | SNAKE  | KRIDER | XMAS   | GRADNT |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | MODE-  | SPD+   | MODE+  |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | HUE-   | SPD-   | HUE+   |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | SAT-   |        | SAT+   |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | BRGT-  | TOGGLE | BRGT+  |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_RGB] = LAYOUT_ortho_5x15(
    RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X,  RGB_M_G, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,   RGB_RMOD, RGB_SPI, RGB_MOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,   RGB_HUD,  RGB_SPD, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,   RGB_SAD,  KC_NO,   RGB_SAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO,   KC_NO,   TO(0),   KC_NO,    KC_NO,    KC_NO,   RGB_VAD,  RGB_TOG, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | F1     | F2     | F3     | F4     | F5     | F11    |        | F12    | F6     | F7     | F8     | F9     | F10    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        | RESET  |        |        |        |        | 0      |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  [_FN] = LAYOUT_ortho_5x15(
    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_NO, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  RESET, KC_NO,  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,  KC_NO
  )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
