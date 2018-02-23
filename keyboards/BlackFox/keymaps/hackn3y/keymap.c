#include "gh60.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty 12, 11, 11, 8*/
    KEYMAP(
        KC_A, KC_ESC, 		 KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_PGUP,\
        KC_B, KC_DEL, 		 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,          KC_PGDN,\
        KC_C, CTL_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,           		 KC_HOME,\
        KC_D, KC_LSPO, 		 KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSPC,                   KC_UP,   KC_END,\
        KC_E, BL_STEP,		 KC_LGUI,  KC_LALT,                   KC_SPC, KC_SPC,            MO(2),  TO(1),        KC_LEFT, KC_DOWN, KC_RGHT
	),
	
	/* Layer 1: Gaming */
	KEYMAP( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 			_______,\
        _______, KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 					_______, \
        _______, KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 				   _______, _______, \
        _______, KC_LCTL, _______, _______,                   _______,          _______,	       _______,   TO(0),    			  _______, _______, _______
    ),
	
	/* Layer 2: Functions */
	KEYMAP( \
        _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______,\
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 			_______,\
        _______, _______, RESET,   _______, _______, _______, _______, _______, _______, BL_TOGG, BL_DEC,  BL_INC,  _______, _______, 					_______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_PSCR,				   _______, _______, \
        _______, _______, _______, _______,                   _______,          _______, 			  _______, _______, 			  _______, _______, _______
    ),
};

/*const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

void matrix_scan_user(void) {

};*/
