#include QMK_KEYBOARD_H

// make houndstooth:default
// avrdude -p atmega32u4 -P /dev/tty.usbmodem14201 -c avr109 -U flash:w:lets_split_rev2_layout1.hex

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _MAPLE  1
#define _MAC    2
#define _FUNCS  3
#define _NUMBS  4
#define _ADJUST 5

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  MAPLE,
  MAC,
};

#define FUNCS   MO(_FUNCS) 
#define NUMBS   MO(_NUMBS)                                                                     
#define ADJUST  MO(_ADJUST)
#define MAPLE   MO(_MAPLE)
#define MAC     MO(_MAC)
    
                                                                  
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
/* QWERTY
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+-w-----+-------------+------+------+------+------+-----|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;: |  '"  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /? | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  GUI | ALT  | VOLD | NUMBS|    Space    | FUNCS| VOLU |  \|  |  DEL | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT(
   KC_ESC,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
   KC_TAB,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE, \
   KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
   KC_LCTL,   KC_LGUI,  KC_LALT,  KC_VOLD,  NUMBS,    KC_SPC,  KC_SPC,  FUNCS,   KC_VOLU, KC_BSLS, KC_DEL,  KC_RCTL  \
),

/* MAPLE
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |  UP  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+-w-----+-------------+------+------+------+------+-----|
 * | Tab  | LEFT | DOWN | RGHT |   F  |   G  |   H  |   J  |   K  |   L  |   ;: |  '"  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /? | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  GUI | ALT  | VOLD | NUMBS|    Space    | FUNCS| VOLU |  \|  |  DEL | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_MAPLE] = LAYOUT( 
   KC_ESC,    KC_Q,     KC_UP,    KC_E,     KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
   KC_TAB,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE, \
   KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
   KC_LCTL,   KC_LGUI,  KC_LALT,  KC_VOLD,  NUMBS,    KC_SPC,  KC_SPC,  FUNCS,   KC_VOLU, KC_BSLS, KC_DEL,  KC_RCTL  \
),

/* MAC
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |  UP  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+-w-----+-------------+------+------+------+------+-----|
 * | Tab  | LEFT | DOWN | RGHT |   F  |   G  |   H  |   J  |   K  |   L  |   ;: |  '"  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /? | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CMD  | Ctrl | OPT  | VOLD | NUMBS|    Space    | FUNCS| VOLU |  \|  |  DEL | Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_MAC] = LAYOUT( 
   KC_ESC,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
   KC_TAB,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOTE, \
   KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
   KC_LGUI,   KC_LCTL,  KC_LALT,  KC_VOLD,  NUMBS,    KC_SPC,  KC_SPC,  FUNCS,   KC_VOLU, KC_BSLS, KC_DEL,  KC_RGUI  \
),

/* FUNC
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |  UP  |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | LEFT | DOWN | RGHT |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F11 |  F12 |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_FUNCS] = LAYOUT( \
  _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_UP,   _______, _______, KC_DEL, \
  _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
  _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* NUMB
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   \  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  =,+ |  -,_ |  [,{ |  ],} | ',"  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  INS |  HM  |  PUP |  PDN |  END |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMBS] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOTE, \
  _______, KC_INS,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,  _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),

/* ADJUST
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |QWERTY| MAPLE| MAC  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, QWERTY,  MAPLE,   MAC,     _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _FUNCS, _NUMBS, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case MAPLE:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAPLE);
      }
      return false;
    case MAC:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAC);
      }
      return false;
  }
  return true;
}