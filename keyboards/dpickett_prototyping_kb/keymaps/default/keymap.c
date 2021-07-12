#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  //KC_LSFT, KC_RSFT

  // LAYER 0
	KEYMAP(
		MO(2),      KC_Q,       KC_W,       KC_E,      KC_R,      KC_T,      KC_Y,       KC_U,       KC_I,       KC_O,     KC_P,        KC_BSPC,
		MO(1),      KC_A,       KC_S,       KC_D,      KC_F,      KC_G,      KC_H,       KC_J,       KC_K,       KC_L,     KC_SCOLON,   KC_QUOT,
		KC_LSFT,    KC_Z,       KC_X,       KC_C,      KC_V,      KC_B,      KC_N,       KC_M,       KC_COMM,    KC_DOT,   KC_SLSH,     KC_RSFT,
		                        KC_RCTRL,   KC_LALT,   KC_LGUI,   KC_LSFT,   KC_RSFT,    KC_SPC,     MO(1),      MO(3),                                 KC_ENT),

  // LAYER 1
	KEYMAP(
		KC_TRNS,    KC_EXLM,    KC_AT,      KC_LPRN,   KC_RPRN,   KC_LBRC,   KC_RBRC,    S(KC_DOT),  KC_UP,      KC_EQL,   KC_PPLS,     KC_DEL,
		KC_TRNS,    KC_AMPR,    KC_ASTR,    KC_DLR,    KC_PERC,   KC_LCBR,   KC_RCBR,    KC_LEFT,    KC_DOWN,    KC_RGHT,  KC_MINS,     KC_ENT,
		KC_TRNS,    KC_F23,     KC_F24,     KC_CIRC,   KC_HASH,   KC_EXLM,   KC_NO,      S(KC_TAB),  KC_GRV,     KC_TAB,   KC_BSLS,     KC_TRNS,
		                        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_ESC,     KC_TRNS,    KC_TRNS,                               KC_TRNS),
  // LAYER 2
	KEYMAP(
		KC_TRNS,    KC_EXLM,    KC_AT,      KC_LPRN,   KC_RPRN,   KC_LBRC,   KC_RBRC,    KC_7,       KC_8,       KC_9,     KC_PPLS,     KC_BSPC,
		KC_TRNS,    KC_AMPR,    KC_ASTR,    KC_DLR,    KC_PERC,   KC_LCBR,   KC_RCBR,    KC_4,       KC_5,       KC_6,     KC_MINS,     KC_ENT,
		KC_TRNS,    KC_F23,     KC_F24,     KC_CIRC,   KC_HASH,   KC_NO,     KC_0,       KC_1,       KC_2,       KC_3,     KC_DOT,      KC_TRNS,
									          KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_0,      KC_TRNS,     KC_TRNS,                               KC_TRNS),
  // LAYER 3
	KEYMAP(
		RESET,      KC_VOLD,    KC_VOLU,    KC_MPRV,   KC_MNXT,   KC_NO,     KC_NO,      KC_NO,      KC_UP,      KC_NO,    KC_F12,      KC_DEL,
		KC_TRNS,    KC_NO,      KC_NO,      KC_NO,     KC_NO,     KC_NO,     KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,  KC_F11,      KC_ENT,
		KC_TRNS,    KC_F1,      KC_F2,      KC_F3,     KC_F4,     KC_F5,     KC_F6,      KC_F7,      KC_F8,      KC_F9,    KC_F10,      G(C(KC_Q)),
		                        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_MPLY,    KC_TRNS,    KC_TRNS,                               KC_TRNS)
};

// flash command ------------------------------------> make dpickett_prototyping_kb:default:avrdude <--------------------------------------------

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}