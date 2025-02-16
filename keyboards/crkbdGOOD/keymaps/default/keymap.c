/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "keycodes.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSLS,
        KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  LT(3, KC_PSCR),
                                              KC_LCTL, KC_SPC, LT(1, KC_LGUI),  LT(2, KC_ENT), KC_BSPC, KC_ENT
    ),

    [1] = LAYOUT_split_3x6_3(
        ES_AT,    ES_DLR,  ES_PERC,  ES_LCBR,  ES_RCBR,  ES_LABK,                    ES_RABK,  ES_MINS,  ES_UNDS,  ES_HASH,  ES_PIPE,  ES_CIRC,
        ES_GRV,   ES_ASTR, ES_AT,    ES_LPRN,  ES_LPRN,  KC_EXLM,                    ES_QUES,  ES_EQL,   ES_PLUS,  ES_COLN,  ES_SLSH,  ES_GRV,
        KC_LSFT,  ES_AMPR, ES_MORD,  ES_LBRC,  ES_RBRC,  ES_IEXL,                    ES_IQUE,  ES_QUOT,  ES_DQUO,  ES_CCED,  ES_NTIL,  ES_ACUT,
                                              KC_RCTL,  KC_LALT,  KC_NO,        KC_NO,  KC_DEL,  KC_NO 
    ),

    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,                        KC_NO,   KC_LALT, KC_ENT,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,                        KC_RGUI, KC_WFWD, KC_WBAK, KC_NO,   KC_NO,   KC_NO,
        KC_CAPS, KC_RCTL, KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT,
                                              KC_LGUI, KC_NO,   KC_NO,             KC_NO,   KC_NO,   KC_NO
    ),

    [3] = LAYOUT_split_3x6_3(
        TO(4),   KC_0,    KC_1,    KC_2,    KC_3,    KC_SLSH,                      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_TILD,
        KC_NO,   KC_DLR,  KC_4,    KC_5,    KC_6,    KC_ASTR,                      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_DQUO,
        KC_NO,   KC_PERC, KC_7,    KC_8,    KC_9,    KC_MINS,                      KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_RSFT,
                                              KC_PPLS, KC_NO,   KC_BSPC,           KC_NO,   KC_NO,   KC_PSCR
    ),

    [4] = LAYOUT_split_3x6_3(
        TO(0),   RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,                      TO(5),   RGB_SPI, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
        _______, _______, _______, _______, _______, RGB_MODE_PLAIN,               _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
                                              _______, _______, _______,           _______, _______, _______
    ),

    [5] = LAYOUT_split_3x6_3(
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_ESC,   KC_U,   KC_F3,   KC_F4,   KC_F5,  KC_BSLS,
        KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         TO(0),    KC_T,   KC_G,    KC_H,    KC_S,   KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,     KC_A,   KC_F,    KC_DOT,  KC_LSFT,LT(3, KC_PSCR),
                                              KC_LCTL, KC_SPC, KC_M,               LT(2, KC_ENT), KC_BSPC, KC_ENT
    )
};
