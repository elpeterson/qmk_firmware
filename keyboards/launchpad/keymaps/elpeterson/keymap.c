#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _MACROS 0
#define _RGB 1

enum custom_keycodes {
  STATUS = SAFE_RANGE,
  MASTER,
  ADD,
  COMMIT,
  PUSH,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case STATUS:
      if (record->event.pressed) {
        SEND_STRING("git status" SS_TAP(X_ENTER));
      }
      break;
    case MASTER:
      if (record->event.pressed) {
        SEND_STRING("git pull origin master" SS_TAP(X_ENTER));
      }
      break;
    case ADD:
      if (record->event.pressed) {
        SEND_STRING("git add --all" SS_TAP(X_ENTER));
      }
      break;
    case COMMIT:
      if (record->event.pressed) {
        SEND_STRING("git commit -m \"\"" SS_TAP(X_LEFT));
      }
      break;
    case PUSH:
      if (record->event.pressed) {
        SEND_STRING("git push" SS_TAP(X_ENTER));
      }
      break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* MACROS
     * ,-----------------.
     * | STATUS | MASTER |
     * |--------+--------|
     * | ADD    | COMMIT |
     * |--------+--------|
     * | GRV    | (RBG)  |
     * |--------+--------|
     * |      PUSH       |
     * `-----------------'
     */
    [_MACROS] = LAYOUT(STATUS, MASTER, ADD, COMMIT, KC_GRV, TO(_RGB), PUSH, PUSH),

    /* RGB
     * ,-----------------.
     * | SAT+   | SAT-   |
     * |--------+--------|
     * | HUE+   | HUE-   |
     * |--------+--------|
     * | MODE+  | MODE-  |
     * |--------+--------|
     * |  ENTER(MACROS)  |
     * `-----------------'
     */
    [_RGB] = LAYOUT(RGB_SAI, RGB_SAD, RGB_HUI, RGB_HUD, RGB_RMOD, TO(_MACROS), RGB_TOG, RGB_TOG)

};

void matrix_init_user(void) {}
