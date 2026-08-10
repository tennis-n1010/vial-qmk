// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
    							                            KC_Q,   KC_A,   KC_Z,
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE, KC_SPACE, KC_RALT, KC_RGUI, KC_RCTL
    ),
    [1] = LAYOUT(
    							                            _______,   _______,   _______,
        KC_TAB,   _______,   KC_UP,   _______,   _______,   _______,   _______,   MS_WHLU,   _______,   _______,
        KC_CAPS,   KC_LEFT,   KC_DOWN,   KC_RIGHT,   _______,   _______,   MS_BTN1,   MS_BTN2,   MS_BTN3,   _______,
        KC_LSFT,   _______,   _______,   _______,   _______,   _______,   MS_BTN4,   MS_WHLD,   MS_BTN5,
        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [2] = LAYOUT(
    							                            _______,   _______,   _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,   KC_NUM_LOCK,   KC_KP_7,   KC_KP_8,   KC_KP_9,   KC_KP_PLUS,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,   KC_KP_DOT,   KC_KP_4,   KC_KP_5,   KC_KP_6,   KC_KP_MINUS,
        KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_KP_0,   KC_KP_1,   KC_KP_2,   KC_KP_3,   KC_KP_ASTERISK,
        _______, _______, _______, _______, _______, _______, _______, KC_KP_SLASH
    ),
    [3] = LAYOUT(
    							                            _______,   _______,   _______,
        KC_GRAVE,   _______,   _______,   _______,   _______,   _______,   _______,   KC_LEFT_BRACKET,   KC_RIGHT_BRACKET,   KC_BACKSLASH,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   KC_SEMICOLON,   KC_ENT,   KC_ENT,
        KC_LSFT,   _______,   _______,   _______,   _______,   KC_COMMA,   KC_DOT,   KC_SLASH,   KC_RSFT,
        _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [4] = LAYOUT(
    							                            _______,   _______,   _______,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______
    )
};

const uint16_t PROGMEM test_combo1[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM test_combo3[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM test_combo4[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM test_combo5[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM test_combo6[] = {KC_Q, KC_W, KC_E, COMBO_END};
combo_t key_combos[] = {
    COMBO(test_combo1, KC_TAB),
    COMBO(test_combo2, KC_BSPC),
    COMBO(test_combo3, KC_MINUS),
    COMBO(test_combo4, KC_MINUS),
    COMBO(test_combo5, KC_EQUAL),
    COMBO(test_combo6, KC_ESC),
};