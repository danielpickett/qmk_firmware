#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_DEL, KC_ENT, 
		KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, MO(2), 
		KC_RSFT, KC_SLSH, KC_DOT, KC_COMM, KC_M, KC_N, KC_F17, 
		KC_QUOT, KC_SCLN, KC_L, KC_K, KC_J, KC_H, KC_F16, 
		KC_BSPC, KC_P, KC_O, KC_I, KC_U, KC_Y, KC_F15, 
		
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_F12, 
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_F13, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_F14, 
		LSFT(KC_TAB), KC_ESC, 
		LCTL(KC_LSFT), KC_LCTL, KC_LALT, KC_LGUI, MO(2)),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_3, KC_2, KC_1, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_6, KC_5, KC_4, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_9, KC_8, KC_7, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_BSLS, KC_TAB, KC_TILD, LSFT(KC_TAB), KC_NO, KC_TRNS, 
		KC_TRNS, KC_MINS, KC_RGHT, KC_DOWN, KC_LEFT, KC_RCBR, KC_TRNS, 
		KC_TRNS, KC_PLUS, KC_EQL, KC_UP, LSFT(KC_COMM), LSFT(KC_RCBR), KC_TRNS, 
		KC_TRNS, KC_EXLM, KC_AT, KC_LPRN, KC_RPRN, LSFT(KC_LCBR), RESET, 
		KC_TRNS, KC_AMPR, KC_ASTR, KC_DLR, KC_PERC, KC_LCBR, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_CIRC, KC_HASH, KC_NO, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

// flash command ------------------------------------> make dpickett_split:default:avrdude <--------------------------------------------

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
// 	keyevent_t event = record->event;

// 	switch (id) {

// 	}
// 	return MACRO_NONE;
// }

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