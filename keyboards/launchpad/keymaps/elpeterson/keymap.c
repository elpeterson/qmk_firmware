#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _ARROWS 0
#define _RGB 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* ARROWS
     * ,-------------.
     * | LEFT | ESC  |
     * |------+------|
     * | DOWN |  UP  |
     * |------+------|
     * | RGHT | DEL  |
     * |------+------|
     * |    ENTER    |
     * `-------------'
     */
    [_ARROWS] = LAYOUT( \
        KC_LEFT, LT(1,KC_ESC), \
        KC_DOWN, KC_UP, \
        KC_RGHT, KC_DEL, \
        KC_ENT,  KC_ENT \
      ),

    /* RGB
     * ,-------------.
     * | SAT- |      |
     * |------+------|
     * | HUE- | HUE+ |
     * |------+------|
     * | SAT+ | Mode+|
     * |------+------|
     * |    RGBTOG   |
     * `-------------'
     */
    [_RGB] = LAYOUT( \
        RGB_SAD, _______, \
        RGB_HUD, RGB_HUI, \
        RGB_SAI, RGB_RMOD, \
        RGB_TOG, RGB_TOG \
      )

};

void matrix_init_user(void) {}
