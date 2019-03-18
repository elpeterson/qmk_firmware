#include QMK_KEYBOARD_H

#define _ALPHAS 0
#define _NUM 1
#define _FNC 2
#define _RGB 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* QWERTY
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | =      | -      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | LSHFT  | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LCTRL  | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LATL   | LGUI   | MUTE   | VOL-   | VOL+   | SPACE  | SPACE  | DEL    | (NUM)  | WIN    | BSLS   | RALT   | RCTL   | (FN)   |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_ALPHAS] = LAYOUT_elpeterson(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_HOME, KC_PGUP, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END, KC_PGDN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, KC_LGUI, KC_MUTE, KC_VOLD, KC_VOLU, KC_SPC, KC_DEL, TO(1), KC_RGUI, KC_BSLS, KC_RALT, KC_RCTL, OSL(2)),

    /* NUM
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | LSHFT  | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LCTRL  | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LATL   | LGUI   | MUTE   | VOL-   | VOL+   | SPACE  | SPACE  | DEL    | (NUM)  | WIN    | BSLS   | RALT   | RCTL   | (FN)   |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_NUM] = LAYOUT_elpeterson(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_HOME, KC_PGUP, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END, KC_PGDN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, KC_LGUI, KC_MUTE, KC_VOLD, KC_VOLU, KC_SPC, KC_DEL, TO(1), KC_RGUI, KC_BSLS, KC_RALT, KC_RCTL, OSL(2)),

    /* FNC
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | LSHFT  | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LCTRL  | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LATL   | LGUI   | MUTE   | VOL-   | VOL+   | SPACE  | SPACE  | DEL    | (NUM)  | WIN    | BSLS   | RALT   | RCTL   | (FN)   |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_FNC] = LAYOUT_elpeterson(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_QUOT, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_HOME, KC_PGUP, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_END, KC_PGDN, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, KC_LGUI, KC_MUTE, KC_VOLD, KC_VOLU, KC_SPC, KC_DEL, TO(3), KC_RGUI, KC_BSLS, KC_RALT, KC_RCTL, OSL(2)),

    /* RGB
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | LSHFT  | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LCTRL  | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LATL   | LGUI   | MUTE   | VOL-   | VOL+   | SPACE  | SPACE  | DEL    | (NUM)  | WIN    | BSLS   | RALT   | RCTL   | (FN)   |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */

    [_RGB] = LAYOUT_elpeterson(RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_HUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};
