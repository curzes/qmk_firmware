#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

enum planck_keycodes {
  AE_ENT = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AE_ENT: {
      static uint8_t kc;
      if (record->event.pressed) {
        bool isShifted = get_mods() & MOD_MASK_SHIFT;
        if (isShifted) {
          del_mods(MOD_MASK_SHIFT);
          kc = KC_ENT;
        } else {
          kc = SE_AE;
        }
        register_code(kc);
        if (isShifted) {
          register_code(KC_LSFT);
        }
      } else {
        unregister_code(kc);
      }
    }
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Colemak
  * ,-----------------------------------------------------------------------------------.
  * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   Ö  |   Å  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |   Ä  |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   -  |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * | Ctrl |  Win |  Alt | RAlt |Lower |    Space    |Raise | Left | Down |  Up  |Right |
  * `-----------------------------------------------------------------------------------'
  */
  [0] = LAYOUT_planck_grid(
      KC_TAB,  SE_Q,    SE_W,    SE_F,    SE_P ,   SE_G ,   SE_J ,   SE_L,    SE_U,    SE_Y,    SE_OSLH ,SE_AA,
      KC_BSPC, SE_A,    SE_R,    SE_S,    SE_T,    SE_D,    SE_H,    SE_N,    SE_E,    SE_I,    SE_O ,   AE_ENT,
      KC_LSFT, SE_Z,    SE_X,    SE_C,    SE_V,    SE_B,    SE_K,    SE_M,    SE_COMM, SE_DOT,  SE_MINS, _______,
      KC_LCTL, KC_LGUI, KC_LALT, _______, MO(1),   KC_SPC,  KC_SPC,  MO(2),   KC_RALT, _______, _______, _______
  ),

  /* Lower
  * ,-----------------------------------------------------------------------------------.
  * |   ~  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |      |   {} |  []  |  {}  |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |Reset |      |      |      |      |             |      |      |      |      |      |
  * `-----------------------------------------------------------------------------------'
  */
  [1] = LAYOUT_planck_grid(
    KC_TILD, SE_1,    SE_2,    SE_3,    SE_4,    SE_5,    SE_6,    SE_7,    SE_8,    SE_9,    SE_0,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, _______, SE_LBRC, SE_LPRN, SE_LCBR,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  /* Raise
  * ,-----------------------------------------------------------------------------------.
  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |      |      |Enter |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |Reset |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
  * `-----------------------------------------------------------------------------------'
  */
  [2] = LAYOUT_planck_grid(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______,
    RESET,   _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
  ),


};
