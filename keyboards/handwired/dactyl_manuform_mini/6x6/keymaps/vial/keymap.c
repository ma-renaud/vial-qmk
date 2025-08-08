// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NUMPAD,
    _SYMBOLS,
    _ARROWS,
    _GAMING,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_PGUP,
    KC_BACKSLASH, KC_Q, KC_W, KC_E, KC_R, KC_T,                                         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PGDN,
    KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G,                                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_HOME,
    KC_SEMICOLON, KC_Z, KC_X, KC_C, KC_V, KC_B,                                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END,
                  KC_COPY, KC_PASTE,                                                                RALT(KC_QUOTE), RALT(KC_BACKSLASH),
                                    KC_BACKSPACE,                                             KC_SPACE,
                                          KC_DELETE, KC_RIGHT,                   KC_UP, KC_ENTER,                                                                 
                                          LT(_NUMPAD, KC_ESC), KC_LEFT,          KC_DOWN, KC_TAB),

	[_NUMPAD] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                               _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                               RALT(KC_SEMICOLON), LSFT(KC_4), KC_GRV, RALT(KC_2), LSFT(KC_1), LSFT(KC_6),
    _______, _______, _______, _______, _______, _______,                               KC_BACKSLASH, KC_7, KC_8, KC_9, LSFT(KC_SEMICOLON), LSFT(KC_5),
    _______, _______, _______, _______, _______, _______,                               LSFT(KC_BACKSLASH), KC_4, KC_5, KC_6, KC_MINS, LSFT(KC_EQL),
    _______, _______, _______, _______, _______, _______,                               KC_EQL, KC_1, KC_2, KC_3, LSFT(KC_3), LSFT(KC_8),
                  _______, _______,                                                                   RALT(KC_QUOTE), RALT(KC_BACKSLASH),
                                        _______,                                                KC_0,
                                                 _______, _______,              KC_TAB, KC_DOT,                                                                 
                                                 _______, _______,              KC_ENTER, KC_COMMA),

	[_SYMBOLS] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_PGUP,
    KC_BACKSLASH, KC_Q, KC_W, KC_E, KC_R, KC_T,                                         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PGDN,
    KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G,                                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_HOME,
    KC_SEMICOLON, KC_Z, KC_X, KC_C, KC_V, KC_B,                                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END,
                  KC_COPY, KC_PASTE,                                                                RALT(KC_QUOTE), RALT(KC_BACKSLASH),
                                    KC_BACKSPACE,                                             KC_SPACE,
                                        KC_DELETE, KC_RIGHT,                     KC_UP, KC_ENTER,                                                                 
                                        KC_ESC, KC_LEFT,                         KC_DOWN, KC_TAB),
	[_ARROWS] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_PGUP,
    KC_BACKSLASH, KC_Q, KC_W, KC_E, KC_R, KC_T,                                         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PGDN,
    KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G,                                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_HOME,
    KC_SEMICOLON, KC_Z, KC_X, KC_C, KC_V, KC_B,                                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END,
                  KC_COPY, KC_PASTE,                                                                RALT(KC_QUOTE), RALT(KC_BACKSLASH),
                                    KC_BACKSPACE,                                             KC_SPACE,
                                        KC_DELETE, KC_RIGHT,                     KC_UP, KC_ENTER,                                                                 
                                        KC_ESC, KC_LEFT,                         KC_DOWN, KC_TAB),

	[_GAMING] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5,                                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_PGUP,
    KC_BACKSLASH, KC_Q, KC_W, KC_E, KC_R, KC_T,                                         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_PGDN,
    KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G,                                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_HOME,
    KC_SEMICOLON, KC_Z, KC_X, KC_C, KC_V, KC_B,                                         KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_END,
                  KC_COPY, KC_PASTE,                                                                RALT(KC_QUOTE), RALT(KC_BACKSLASH),
                                    KC_BACKSPACE,                                             KC_SPACE,
                                        KC_DELETE, KC_RIGHT,                     KC_UP, KC_ENTER,                                                                 
                                        KC_ESC, KC_LEFT,                         KC_DOWN, KC_TAB)
};

