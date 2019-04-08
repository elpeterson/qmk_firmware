#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _ALPHAS 0
#define _RGB 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ALPHAS
 * ,-----------------------------------------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | QUOT |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | LSFT |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | ENT  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | LCTL |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | RSFT |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | LALT | LGUI | RGB  | DEL  | SPC  | SPC  | LEFT | UP   | DOWN | RGHT | RGUI | RCTL |
 * `-----------------------------------------------------------------------------------'
 */
[_ALPHAS] = LAYOUT( \
  KC_ESC,  KC_1,    KC_2,     KC_3,   KC_4,   KC_5,    KC_6,    KC_7,  KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,     KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,  KC_I,    KC_O,    KC_P,    KC_QUOT, \
  KC_LSFT, KC_A,    KC_S,     KC_D,   KC_F,   KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT, \
  KC_LCTL, KC_Z,    KC_X,     KC_C,   KC_V,   KC_B,    KC_N,    KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LALT, KC_LGUI, TO(_RGB), KC_DEL, KC_SPC, KC_SPC,  KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_RGUI, KC_RCTL \
),

/* RGB (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | RESET|      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RGB] =  LAYOUT( \
  _______, _______, _______,     _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
  _______, _______, _______,     _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
  _______, _______, _______,     _______, _______, _______, _______,  _______, _______, _______, _______, _______, \
  _______, _______, _______,     _______, _______, _______, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, \
  RESET,   _______, TO(_ALPHAS), _______, _______, _______, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_TOG \
)


};
