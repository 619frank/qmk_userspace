// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_no_ball( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
XXX,   XXX,   XXX,   K32,   K33,   K34,   K35,   K36,   XXX, XXX, XXX, K37 \
)

// needed for building more layers
// FIXME: why do we need to undefine previous value?
#undef LAYER_STATE_8BIT
#define LAYER_STATE_32BIT

// needed to make RGB work
#define RGB_DI_PIN WS2812_DI_PIN

// disable split detection - should help with sleeping issues
#undef SPLIT_USB_DETECT

// right half is the master
/* #define MASTER_RIGHT */

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,    "Base") \
MIRYOKU_X(EXTRA,   "Extra") \
MIRYOKU_X(TAP,     "Tap") \
MIRYOKU_X(BUTTON,  "Button") \
MIRYOKU_X(NAV,     "Nav") \
MIRYOKU_X(MOUSE,   "Mouse") \
MIRYOKU_X(MEDIA,   "Media") \
MIRYOKU_X(NUM,     "Num") \
MIRYOKU_X(SYM,     "Sym") \
MIRYOKU_X(FUN,     "Fun") \
MIRYOKU_X(MOUSELEFT,  "MouseLeft") \
MIRYOKU_X(MOUSERIGHT, "MouseRight") 

#define MIRYOKU_LAYER_MOUSELEFT \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
KC_BTN3,           KC_BTN1,           KC_BTN2,           SCRL_MO,           KC_LSFT,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSERIGHT \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              KC_LSFT,           SCRL_MO,           KC_BTN2,           KC_BTN1,           KC_BTN3,           \
U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                    KC_Y,                     KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,                    KC_H,                     LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,                    KC_N,                     KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSELEFT,KC_TAB),  LT(U_MOUSERIGHT,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_LAYERMAPPING_MOUSELEFT MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_MOUSERIGHT MIRYOKU_MAPPING


