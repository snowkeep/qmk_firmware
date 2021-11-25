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
#include "snowkeep-hd_gold.h"

__attribute__ ((weak))
void keyboard_post_init_user_kb(void) { }

void keyboard_post_init_user(void) {
    keyboard_post_init_user_kb();
}

const key_override_t coln_scln = ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);
const key_override_t dot_amper = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_AMPR);
const key_override_t slsh_astr = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_ASTR);
const key_override_t dqt_ques  = ko_make_basic(MOD_MASK_SHIFT, KC_DQT, KC_QUES);
const key_override_t quot_bang = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_EXLM);
const key_override_t mins_plus = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_PLUS);
const key_override_t comm_pipe = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_PIPE);
const key_override_t unds_eql  = ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_EQL);

const key_override_t **key_overrides = (const key_override_t *[]){
  &coln_scln,
  &dot_amper,
  &slsh_astr,
  &dqt_ques,
  &quot_bang,
  &mins_plus,
  &comm_pipe,
  &unds_eql,
  NULL
};


enum combo_events {
  CMB_Q,
  CMB_Z,
  CMB_TH,
  CMB_CH,
  CMB_SH,
  CMB_PH,
  CMB_GH,
  CMB_WH
};

const uint16_t PROGMEM q_combo[] = {KC_U, KC_K, COMBO_END};
const uint16_t PROGMEM z_combo[] = {KC_F, KC_M, COMBO_END};
const uint16_t PROGMEM th_combo[] = {SFT_D, CTR_N, COMBO_END};
const uint16_t PROGMEM ch_combo[] = {KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM sh_combo[] = {ALT_S, CTR_N, COMBO_END};
const uint16_t PROGMEM ph_combo[] = {KC_P, KC_M, COMBO_END};
const uint16_t PROGMEM gh_combo[] = {KC_G, KC_L, COMBO_END};
const uint16_t PROGMEM wh_combo[] = {KC_W, SFT_D, COMBO_END};
//const uint16_t PROGMEM undo_combo[] = {KC_G, KC_C, COMBO_END};
//const uint16_t PROGMEM cut_combo[] = {KC_J, KC_L, COMBO_END};
//const uint16_t PROGMEM copy_combo[] = {KC_M, KC_D, COMBO_END};
//const uint16_t PROGMEM paste_combo[] = {KC_L, KC_B, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [CMB_Q] = COMBO_ACTION(q_combo),
  [CMB_Z] = COMBO_ACTION(z_combo),
  [CMB_TH] = COMBO_ACTION(th_combo),
  [CMB_CH] = COMBO_ACTION(ch_combo),
  [CMB_SH] = COMBO_ACTION(sh_combo),
  [CMB_PH] = COMBO_ACTION(ph_combo),
  [CMB_GH] = COMBO_ACTION(gh_combo),
  [CMB_WH] = COMBO_ACTION(wh_combo),
//  [UNDO] = COMBO_ACTION(undo_combo),
//  [CUT] = COMBO_ACTION(cut_combo),
//  [COPY] = COMBO_ACTION(copy_combo),
//  [PASTE] = COMBO_ACTION(paste_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CMB_Q:
      if (pressed) {
        tap_code16(KC_Q);
      }
      break;

    case CMB_Z:
      if (pressed) {
        tap_code16(KC_Z);
      }
      break;

    case CMB_TH:
      if (pressed) {
        SEND_STRING("th");
      }
      break;

    case CMB_CH:
      if (pressed) {
        SEND_STRING("ch");
      }
      break;

    case CMB_SH:
      if (pressed) {
        SEND_STRING("sh");
      }
      break;

    case CMB_PH:
      if (pressed) {
        SEND_STRING("ph");
      }
      break;

    case CMB_GH:
      if (pressed) {
        SEND_STRING("gh");
      }
      break;

    case CMB_WH:
      if (pressed) {
        SEND_STRING("wh");
      }
      break;

//  case UNDO:
//    if (pressed) {
//      tap_code16(LCTL(KC_Z));
//    }
//    break;
//
//  case CUT:
//      if (pressed) {
//        tap_code16(LCTL(KC_X));
//      }
//      break;
//
//  case COPY:
//    if (pressed) {
//      tap_code16(LCTL(KC_C));
//    }
//    break;
//
//  case PASTE:
//    if (pressed) {
//      tap_code16(LCTL(KC_V));
//    }
//    break;
  }
}
