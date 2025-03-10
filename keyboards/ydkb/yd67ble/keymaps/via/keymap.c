#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
    { KC_GESC,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,KC_HOME,KC_NO,  },
    { KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,KC_PGUP,KC_NO,  },
    { KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NO,  KC_ENT, KC_PGDN,KC_NO,  },
    { KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_NO,  KC_RSFT,KC_UP,  KC_END, KC_NO,  },
    { KC_LCTL,KC_LGUI,KC_LALT,KC_NO,  KC_NO,  KC_SPC, KC_NO,  KC_NO,  KC_NO,  KC_RALT,MO(1),  KC_NO,  KC_LEFT,KC_DOWN,KC_RGHT,KC_NO,  }
    },
  [1] = {
    { KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS,KC_TRNS,},
    { USER00, KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_MS_BTN3,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,},
    { KC_TRNS,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_HOME,KC_PGUP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,},
    { KC_TRNS,USER03, KC_TRNS,KC_CALC,KC_TRNS,USER01, KC_TRNS,KC_TRNS,KC_END, KC_PGDN,KC_TRNS,KC_TRNS,KC_TRNS,KC_VOLU,KC_MUTE,KC_TRNS,},
    { KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MPRV,KC_VOLD,KC_MNXT,KC_TRNS,}
    },
  [2] = {
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, } 
    },
  [3] = {
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, }, 
    {_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, } 
    },
};
