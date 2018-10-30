
#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define __ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Basic QWERTY */
      KC_ESC,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
      KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
      MO(1),    KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,  KC_L,     KC_SCLN,  KC_QUOT,  XXXXXXX,  KC_ENT,   \
      KC_LSFT,  XXXXXXX,  KC_Z,     KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  XXXXXXX,  KC_RSFT,  \
      KC_LCTL,  KC_LGUI,  KC_LALT,                     KC_SPC,                             XXXXXXX,  MO(1),    KC_RGUI,  KC_APP,   KC_RCTL   \
      ),
  [1] = LAYOUT( /* KBP v60-like arrows, media keys, etc */
                /* Only the '~' on the third line below 'F7' is missing */
      KC_GRV,   KC_F1,    KC_F2,    KC_F3,     KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,    KC_F12,  KC_DEL,   \
      KC_CAPS,  _______,  KC_UP,    _______,   KC_BSPC,  KC_HOME,  KC_PGUP,  KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    BL_INC,    BL_DEC,  BL_STEP,  \
      _______,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_DEL,   KC_END,   KC_PGDN,  _______,  KC_INS,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  XXXXXXX, _______,  \
      _______,  XXXXXXX,  KC_MPRV,  KC_MPLY,   KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MUTE,  _______,  _______,  _______,  KC_APP,    XXXXXXX, _______,  \
      _______,  _______,  _______,                       KC_SPC,                                 XXXXXXX,  _______,  _______,   _______, _______   \
      ),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  return MACRO_NONE;
};
