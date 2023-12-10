#include QMK_KEYBOARD_H

// Combos
const uint16_t PROGMEM test_combo1[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM test_combo3[] = {KC_L, RSFT_T(KC_SCLN), COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, KC_BSPC),
    COMBO(test_combo3, KC_ENT),
};

// Tap dance
enum {
  	DANCE_0,
};

// Tap Dance Definitions
tap_dance_action_t tap_dance_actions[] = {
  [DANCE_0] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_EXLM)
};

// Layouts
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Normal keys
	[0] = LAYOUT_split_3x5_2(
		KC_Q,			KC_W, 	KC_E, 	KC_R, 			LCAG_T(KC_T),		KC_Y, 		KC_U, 			KC_I, 		KC_O, 		KC_P, 
		LSFT_T(KC_A),	KC_S, 	KC_D, 	LGUI_T(KC_F), 	KC_G, 				KC_H,		RGUI_T(KC_J), 	KC_K,		KC_L, 		RSFT_T(KC_SCLN), 
		LCTL_T(KC_Z),	KC_X, 	KC_C, 	KC_V, 			KC_B, 				KC_N, 		KC_M, 			KC_COMM, 	KC_DOT, 	RCTL_T(KC_SLSH), 
										KC_SPC, 		KC_SPC, 			KC_SPC, 	TO(1)
	),

	// Special characters + media control
	[1] = LAYOUT_split_3x5_2(
		KC_1, 			KC_2, 		KC_3, 		KC_4, 		KC_5, 			KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 
		LSFT_T(KC_NO), 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		RSFT_T(KC_NO), 
		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
												TO(0),		KC_NO, 			KC_NO, 		TO(2)
	),

	// Numpad
	[2] = LAYOUT_split_3x5_2(
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 			KC_NO,		KC_P7,		KC_P8,		KC_P9,		KC_BSPC, 
		KC_NO,		KC_NO,		KC_NO, 		KC_NO,		KC_NO, 			KC_NO, 		KC_P4, 		KC_P5, 		KC_P6,	 	KC_ENT, 
		KC_NO, 		KC_NO,		KC_NO,		KC_NO, 		KC_NO, 			KC_P0, 		KC_P1, 		KC_P2, 		KC_P3, 		KC_NO, 
											TO(0), 		KC_NO, 			KC_NO, 		TO(3)
	),

	// Navigation
	[3] = LAYOUT_split_3x5_2(
		KC_ESCAPE, 	KC_WH_L, 	KC_MS_U, 	KC_WH_R, 	KC_PSTE,		LGUI(KC_LBRC),		LCTL(LSFT(KC_TAB)),	RCTL(KC_TAB),	LGUI(KC_RBRC),		KC_BSPC, 
		KC_TAB,		KC_MS_L,	KC_MS_D,	KC_MS_R,	KC_COPY,		KC_LEFT,			KC_UP,				KC_DOWN,		KC_RGHT,			KC_ENT, 
		KC_NO,		KC_BTN2,	KC_WH_U,	KC_WH_D,	KC_NO,			KC_NO, 				KC_BTN1, 			KC_NO, 			KC_NO, 				KC_NO, 
											TO(0), 		KC_NO,			KC_NO,				TO(2)
	),
	
	// Cmd+Tab layer
	[4] = LAYOUT_split_3x5_2(
		KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 			KC_NO,		KC_NO,		KC_NO,		KC_NO,		KC_NO, 
		KC_NO,		KC_NO,		KC_NO, 		KC_NO,		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	 	KC_NO, 
		KC_NO, 		KC_NO,		KC_NO,		KC_NO, 		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
											KC_NO, 		KC_NO, 			KC_NO, 		KC_NO
	),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
