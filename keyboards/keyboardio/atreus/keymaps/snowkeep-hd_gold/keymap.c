/* Copyright 2021 Craig J. (snowkeep)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or    
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "snowkeep-hd.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HD] = LAYOUT( /* Qwerty */
    KC_J,    KC_G,    KC_M,    KC_P,    KC_V,                      KC_COLN, KC_DOT,  KC_SLSH, KC_DQT,  KC_QUOT ,
    GUI_R,   ALT_S,   CTR_N,   SFT_D,   KC_B,                      KC_COMM, SFT_A,   CTR_E,   ALT_I,   GUI_H   ,
    KC_X,    AGR_F,   KC_L,    KC_C,    KC_W,    KC_HOME, KC_END,  KC_MINS, KC_U,    KC_O,    KC_Y,    KC_K    ,
    KC_DEL,  KC_TAB,  KC_ESC,  NAV,     KC_ENT,  KC_SPC,  KC_T,    SYM,     FUNC,    KC_BSPC, KC_UNDS, M_BRACES
  ),

  [_SYM] = LAYOUT(
    KC_GRV,  KC_LT,   KC_GT,   KC_DQT,  KC_DOT,                    KC_AMPR, KC_UNDS, KC_LBRC, KC_RBRC, KC_PERC,
    KC_EXLM, KC_MINS, KC_PLUS, KC_EQL,  KC_HASH,                   KC_PIPE, KC_COLN, KC_LPRN, KC_RPRN, KC_QUES,
    KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, M_UPDIR, _______, _______, KC_TILD, KC_DLR,  KC_LCBR, KC_RCBR, KC_AT  ,
    _______, KC_INS,  _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, KC_PAUS
  ),

  [_NAV] = LAYOUT(
    XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_UP,   KC_7,    KC_8,    KC_9,    KC_MINS ,
    KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_DOWN, KC_4,    KC_5,    KC_6,    KC_PLUS ,
    _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_1,    KC_2,    KC_3,    KC_EQL  ,
    RESET,   XXXXXXX, KC_PSCR, XXXXXXX, KC_SLCK, KC_DEL,  KC_BSPC, KC_SPC,  KC_0,    KC_DOT,  _______, KC_PAUS
  ),

  [_FUNC] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    XXXXXXX, KC_MPRV, KC_VOLU, KC_MNXT, XXXXXXX,                   XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11  ,
    XXXXXXX, KC_MPLY, KC_VOLD, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12  ,
    XXXXXXX, KC_MSTP, KC_MUTE, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET
  )
};
