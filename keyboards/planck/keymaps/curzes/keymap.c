#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Colemak
  * ,-----------------------------------------------------------------------------------.
  * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   Ö  |   Å  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Back |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |   Ä  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   -  |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |  Win |      |  Alt |Lower |    Space    |Raise | RAlt |      |      |      |
  * `-----------------------------------------------------------------------------------'
  */
  [0] = LAYOUT_planck_grid(
      KC_TAB,  SE_Q,    SE_W,    SE_F,    SE_P ,   SE_G ,   SE_J ,   SE_L,    SE_U,    SE_Y,    SE_ODIA ,SE_ARNG,
      KC_BSPC, SE_A,    SE_R,    SE_S,    SE_T,    SE_D,    SE_H,    SE_N,    SE_E,    SE_I,    SE_O ,   SE_ADIA,
      KC_LSFT, SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,    SE_K,    SE_M,    SE_COMM, SE_DOT,  SE_MINS, XXXXXXX,
      KC_LCTL, KC_LGUI, XXXXXXX, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX
  ),



  /* Lower
  * ,-----------------------------------------------------------------------------------.
  * |  Esc |  F1  |  F2  |  F3  |  F4  |      |      |      |   Up |      |      |      | 
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Back |  F5  |  F6  |  F7  |  F8  |      |      | Left | Down | Right|  '*´ |      |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|  F9  |  F10 |  F11 |  F12 |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |  Win |      |  Alt |Lower |    Space    |Raise | RAlt |      |      |      |
  * `-----------------------------------------------------------------------------------'
  */
  [1] = LAYOUT_planck_grid(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
    _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_NUHS, XXXXXXX,
    _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Raise
  * ,-----------------------------------------------------------------------------------.
  * |   ~  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  +?\ |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Back |      |      |      |      |      |      |  Cut | Copy | Paste|  Ins | Enter|
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * | Shift|      |      |      |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |  Win |      |  Alt |Lower |    Space    |Raise | RAlt |      |      |      |
  * `-----------------------------------------------------------------------------------'
  */
  [2] = LAYOUT_planck_grid(
    SE_TILD, SE_1,    SE_2,    SE_3,    SE_4,    SE_5,    SE_6,    SE_7,    SE_8,    SE_9,    SE_0,    SE_PLUS,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CUT,  KC_COPY, KC_PSTE, KC_INS,  KC_ENT,
    _______, SE_LABK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

};