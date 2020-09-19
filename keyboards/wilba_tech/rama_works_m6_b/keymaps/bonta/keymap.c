#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* 0: Media Control 
		┌─────┬─────┬─────┐
		│ Prev│PL/PZ│ Next│
		├─────┼─────┼─────┤
		│ Mute│ Vol-│ Vol+│
		└─────┴─────┴─────┘
     */
    LAYOUT(
        KC_MPRV, KC_MPLY, KC_MNXT, 
        KC_MUTE, KC_VOLD, KC_VOLU),
};
