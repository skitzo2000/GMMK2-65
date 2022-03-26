/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

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

//Skitzo200's QMK custom keymap.c for the GMMK 2 65%  qmk compile -kb gmmk/gmmk2/p65/ansi -km skitzo2000

#include QMK_KEYBOARD_H

enum custom_keycodes {
    TECHOPS = SAFE_RANGE,
    PRNTSCREEN,
    NAME,
    GOOD_MORNING,
    HAPPY_MONDAY,
    HAPPY_FRIDAY,
    POWERMUTE,
};

//  Skitzo2000's Custom Colors
#define ORANGE_RGB        120, 26, 0
#define DARKORANGE_RGB    60, 13, 0
#define BLUE_RGB          0, 26, 255
#define DARKBLUE_RGB      0, 60, 120
//  GMMK 2 65 Default Function Layer colors
#define FUNCTION_KEYS     RGB_GREEN
#define ARROW_KEYS        ORANGE_RGB
#define MISC_KEYS         RGB_YELLOW
#define RESET_KEY         RGB_RED
#define RGB_KEYS          RGB_PURPLE
#define MEDIA_KEYS        RGB_GOLD
//  Skitzo2000's custom keys
#define TO_KEYS           BLUE_RGB

// Side LED Arrays
int side1[] = {69,70,71,72,73,74,75,76,77,78};
int side2[] = {79,80,81,82,83,84,85,86,87,88};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TECHOPS:
        if (record->event.pressed) {
            // when keycode TECHOPS is pressed
            SEND_STRING("~/.ssh/techops_shared.pem");
        } else {

        }
        break;

    case PRNTSCREEN:
        if (record->event.pressed) {
            // when keycode PRNTSCREEN is pressed
            SEND_STRING(SS_RGUI(SS_RSFT("s")));
        } else {

        }
        break;
    case NAME:
        if (record->event.pressed) {
            // when keycode PRNTSCREEN is pressed
            SEND_STRING("Paul Norton");
        } else {

        }
        break;
    case GOOD_MORNING:
        if (record->event.pressed) {
            // when keycode PRNTSCREEN is pressed
            SEND_STRING("Good Morning, ");
        } else {

        }
        break;
    case HAPPY_MONDAY:
        if (record->event.pressed) {
            // when keycode PRNTSCREEN is pressed
            SEND_STRING("Happy Monday, ");
        } else {

        }
        break;
    case HAPPY_FRIDAY:
        if (record->event.pressed) {
            // when keycode PRNTSCREEN is pressed
            SEND_STRING("Happy Friday, ");
        } else {

        }
        break;
    case POWERMUTE:
        if (record->event.pressed) {
            //POWERMUTE
            SEND_STRING(SS_RGUI(SS_RSFT("a")));
        } else {

        }
        break;
    }
    return true;
};


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.

// Blank Template
//[X] = LAYOUT(
//  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,
//  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,
//  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,
//  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,
//  _______,  _______,  _______,                                _______,                                _______,  _______,  _______,   _______,  _______)
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
  KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   KC_PGUP,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,            KC_PGDN,
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
  KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(3),    KC_LEFT,  KC_DOWN,  KC_RGHT),

[1] = LAYOUT(
  KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   KC_PGUP,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,            KC_PGDN,
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
  KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(3),    KC_LEFT,  KC_DOWN,  KC_RGHT),

[2] = LAYOUT(
  KC_GESC,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_DEL,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   KC_PGUP,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,            KC_PGDN,
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
  KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(3),    KC_LEFT,  KC_DOWN,  KC_RGHT),

[3] = LAYOUT(
   KC_GRV,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,  KC_INS,
  _______,  TO(0),  TO(1),  TO(2),  _______,  _______,  _______,  _______,  _______,  _______,  KC_PSCR,  KC_SCRL,  KC_PAUS,   _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,
  _______,  _______,  RGB_HUI,  RGB_HUD,  RGB_SPD,  RGB_SPI,  KC_MUTE,  KC_VOLU,  KC_VOLD,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,   RGB_VAI,  KC_HOME,
  _______,  _______,  _______,                                RESET,                                  _______,  _______,  RGB_RMOD,  RGB_VAD,  RGB_MOD),
};


enum LEDLAYER {
    L0 = 0x1,
    L1 = 0x2,
    L2 = 0x4,
    L3 = 0x8,
};

uint32_t layer_state_set_user(uint32_t state) {
    if ((state & L3) == L3) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    }
    else if ((state & L2) == L2) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_TYPING_HEATMAP);
    }
    else if ((state & L1) == L1) {
        rgblight_set_speed(150);
        rgblight_sethsv_noeeprom(RGB_PURPLE);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_MULTISPLASH);
    }
    else if ((state & L0) == L0) {
        rgblight_set_speed(100);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    }
    else {
        rgblight_set_speed(100);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    }
    return state;
}

// RGB LED layout for GMMK 2 65%
// By skitzo2000
// led number, function of the key

//  0,  Esc         1,  1       2,  2       3,  3       4,  4   5,  5   6,  6   7,  7   8,  8       9,  9       10, 0       11, -          12, =      13, Backspace   14, Del
//  15, Tab         16, Q       17, W       18, E       19, R       20, T   21, Y       22, U       23, I       24, O       25, P   26, [          27, ]      28, \|          29, PgUp
//  30 Caps Lock    31, A       32, S       33, D       34, F       35, G   36, H       37, J       38, K       39, L       40, ;   41, '          42, Enter  43, PgDn
//  44, Shift_L     45, Z       46, X       47, C       48, V       49, B   50, N       51, M       52, ,       53, .       54, /   55, Shift_R    56, Up     57, END
//  58, Ctrl_L      59, Win_L   60, Alt_L   61, Space   62, Alt_R   63, FN  64, Left    65, Down    66, Right

//  69, LED 1
//  70, LED 2
//  71, LED 3
//  72, LED 4
//  73, LED 5
//  74, LED 6
//  75, LED 7
//  76, LED 8
//  77, LED 9
//  78, LED 10

//  79, LED 11
//  80, LED 12
//  81, LED 13
//  82, LED 14
//  83, LED 15
//  84, LED 16
//  85, LED 17
//  86, LED 18
//  87, LED 19
//  88, LED 20

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
        RGB_MATRIX_INDICATOR_SET_COLOR(30, 255, 255, 255); //capslock key
    }

    switch(get_highest_layer(layer_state)){  // special handling per layer
        case 0:  //Layer 0
        case 1:  //layer 1
            for(int i = 0; i > sizeof side1; i++ ){
                rgb_matrix_set_color(side1[i], RGB_RED);
            }
            for(int j = 0; j > sizeof side2; j++ ){
                rgb_matrix_set_color(side2[j], RGB_BLUE);
            }
            break;
        case 2:  //layer 2
            break;
        case 3:  //layer 2
            rgb_matrix_set_color(0, DARKBLUE_RGB);  //  `~
            //Function Keys
            rgb_matrix_set_color(1, FUNCTION_KEYS);
            rgb_matrix_set_color(2, FUNCTION_KEYS);
            rgb_matrix_set_color(3, FUNCTION_KEYS);
            rgb_matrix_set_color(4, FUNCTION_KEYS);
            rgb_matrix_set_color(5, FUNCTION_KEYS);
            rgb_matrix_set_color(6, FUNCTION_KEYS);
            rgb_matrix_set_color(7, FUNCTION_KEYS);
            rgb_matrix_set_color(8, FUNCTION_KEYS);
            rgb_matrix_set_color(9, FUNCTION_KEYS);
            rgb_matrix_set_color(10, FUNCTION_KEYS);
            rgb_matrix_set_color(11, FUNCTION_KEYS);
            rgb_matrix_set_color(12, FUNCTION_KEYS);
            //TO(Layers)
            rgb_matrix_set_color(16, TO_KEYS);
            rgb_matrix_set_color(17, TO_KEYS);
            rgb_matrix_set_color(18, TO_KEYS);
            // KC_INS, KC_PSCR,  KC_SCRL,  KC_PAUS, KC_HOME
            rgb_matrix_set_color(14, MISC_KEYS);  //  KC_INS
            rgb_matrix_set_color(25, MISC_KEYS);  //  KC_PSCR
            rgb_matrix_set_color(26, MISC_KEYS);  //  KC_SCRL
            rgb_matrix_set_color(27, MISC_KEYS);  //  KC_PAUS
            rgb_matrix_set_color(57, MISC_KEYS);  //  KC_HOME
            rgb_matrix_set_color(0, MISC_KEYS);  //  `~
            // Reset
            rgb_matrix_set_color(61, RESET_KEY);  //  KC_HOME
            //RGBMatrix
            rgb_matrix_set_color(45, RGB_KEYS);  // RGB_HUI
            rgb_matrix_set_color(46, RGB_KEYS);  // RGB_HUD
            rgb_matrix_set_color(47, RGB_KEYS);  // RGB_SPD
            rgb_matrix_set_color(48, RGB_KEYS);  // RGB_SPI
            //Media
            rgb_matrix_set_color(49, MEDIA_KEYS);  // KC_MUTE
            rgb_matrix_set_color(50, MEDIA_KEYS);  // KC_VOLU
            rgb_matrix_set_color(51, MEDIA_KEYS);  // KC_VOLD
            rgb_matrix_set_color(52, MEDIA_KEYS);  // KC_MPRV
            rgb_matrix_set_color(53, MEDIA_KEYS);  // KC_MPLY
            rgb_matrix_set_color(54, MEDIA_KEYS);  // KC_MNXT
            //  Arrow Keys
            rgb_matrix_set_color(56, ARROW_KEYS);  // RGB_VAI
            rgb_matrix_set_color(64, ARROW_KEYS);  // RGB_RMOD
            rgb_matrix_set_color(65, ARROW_KEYS);  // RGB_VAD
            rgb_matrix_set_color(66, ARROW_KEYS);  // RGB_MOD
            break;
        default:
        break;
        //case #:
            //Sample options
            //rgb_matrix_set_color(1, 238, 65, 23);
            //rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_NEXUS);
            //rgb_matrix_set_color_all(238, 65, 23);
            //RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 0, 255);   //Set Color per key
    }
}

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_set_speed(25);
}
