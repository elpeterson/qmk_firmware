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
#define TOL0 TO(MACRO)
#define TOL1 TO(ARROW)
#define TOL2 TO(GLOW)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MACRO] = LAYOUT(
        KC_MUTE, TOL1,   KC_MUTE,
        KC_F7,   KC_F8,  KC_F9,
        KC_F10,  KC_F11, KC_F12
    ),
    [ARROW] = LAYOUT(
        RESET,   TOL2,    RESET,
        KC_HOME, KC_UP,   KC_END,
        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [GLOW] = LAYOUT(
        RGB_TOG, TOL0,    RGB_MOD,
        RGB_HUI, RGB_SAI, RGB_VAI,
        RGB_HUD, RGB_SAD, RGB_VAD
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        /* Top-left encoder (volume): */
        case 0:
            tap_code(clockwise ? KC_VOLU : KC_VOLD);
            break;
    
        /* Top-right encoder (page up and down): */
        case 1:
            tap_code(clockwise ? KC_PGUP: KC_PGDN);
            break;
    }
}
