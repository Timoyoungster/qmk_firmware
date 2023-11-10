#include QMK_KEYBOARD_H

#define MLALT(key) MT(MOD_LALT, key)
#define MLCTL(key) MT(MOD_LCTL, key)
#define MLGUI(key) MT(MOD_LGUI, key)
#define MRALT(key) MT(MOD_RALT, key)
#define MRCTL(key) MT(MOD_RCTL, key)
#define MRGUI(key) MT(MOD_RGUI, key)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_2(
    MLALT(KC_QUOTE),       KC_COMMA,   KC_DOT,   KC_P,   KC_Y,         KC_F,   KC_G,   KC_C,   KC_R,   KC_L,
    MLCTL(KC_A),           KC_O,       KC_E,     KC_U,   KC_I,         KC_D,   KC_H,   KC_T,   KC_N,   MRCTL(KC_S),
    MLGUI(KC_SEMICOLON),   KC_Q,       KC_J,     KC_K,   KC_X,         KC_B,   KC_M,   KC_W,   KC_V,   MRGUI(KC_Z),
                                                MO(1), KC_LSFT, KC_SPACE, KC_ENTER
  ),

  [1] = LAYOUT_split_3x5_2( // symbol layer
    MLALT(KC_GRAVE),       KC_TILDE,   KC_QUESTION,    KC_DOLLAR,    UC(0x20AC),         KC_UNDERSCORE,   KC_EQUAL,              KC_PLUS,                KC_MINUS,          MRALT(KC_ASTERISK),
    MLCTL(KC_SLASH),       KC_PIPE,    KC_AMPERSAND,   KC_EXCLAIM,   KC_PERCENT,         KC_COLON,        KC_LEFT_PAREN,         KC_RIGHT_PAREN,         KC_LEFT_BRACKET,   MRCTL(KC_RIGHT_BRACKET),
    MLGUI(KC_BACKSLASH),   KC_DELETE,  KC_ESCAPE,      KC_HASH,      KC_AT,              KC_CIRC,         KC_LEFT_CURLY_BRACE,   KC_RIGHT_CURLY_BRACE,   KC_BACKSPACE,      MRGUI(KC_TAB),
                                                                   KC_TRNS, KC_LSFT, KC_SPACE, KC_ENTER
  ),

  [2] = LAYOUT_split_3x5_2( // arrow layer - left lower
    KC_LALT,          KC_NO,     KC_NO,     KC_PASTE,   KC_COPY,           KC_FIND,       KC_WWW_HOME,   KC_COPY,   KC_AGAIN,          KC_RIGHT,
    KC_LCTL,          KC_NO,     KC_NO,     KC_UNDO,    KC_INSERT,         KC_WWW_BACK,   KC_LEFT,       KC_NO,     KC_WWW_FORWARD,    MRCTL(KC_WWW_SEARCH),
    MLGUI(KC_HOME),   KC_END,    KC_DOWN,   KC_UP,      KC_CUT,            KC_NO,         KC_NO,         KC_NO,     KC_NO,             KC_RGUI,
                                                       TO(0), KC_LSFT, KC_SPACE, KC_ENTER
  ),

  [3] = LAYOUT_split_3x5_2( // misc layer - right lower
    MLALT(KC_F1),    KC_F2,    KC_F3,    KC_F4,                KC_F5,                    KC_F6,                KC_F7,                 KC_F8,            KC_F9,   MRALT(KC_MEDIA_NEXT_TRACK),
    MLCTL(KC_F10),   KC_F11,   KC_F12,   KC_NO,                KC_NO,                    KC_BRIGHTNESS_UP,     KC_MEDIA_PREV_TRACK,   KC_NO,            KC_NO,   MRCTL(KC_MEDIA_STOP),
    MLGUI(KC_F13),   KC_F14,   KC_F15,   KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,          KC_BRIGHTNESS_DOWN,   KC_AUDIO_MUTE,         KC_SYSTEM_WAKE,   KC_NO,   KC_RGUI,
                                                                    TO(0), KC_NO, KC_MEDIA_PLAY_PAUSE, KC_ENTER
  ),

  [4] = LAYOUT_split_3x5_2( // mouse layer - right upper
    KC_LALT,   KC_NO,   KC_NO,           KC_NO,         KC_MS_ACCEL2,         KC_NO,   KC_MS_BTN1,   KC_MS_BTN3,   KC_MS_BTN2,   KC_MS_RIGHT,
    KC_LCTL,   KC_NO,   KC_MS_WH_DOWN,   KC_MS_WH_UP,   KC_MS_ACCEL1,         KC_NO,   KC_MS_LEFT,   KC_MS_BTN1,   KC_MS_BTN2,   KC_RCTL,
    KC_LGUI,   KC_NO,   KC_MS_DOWN,      KC_MS_UP,      KC_MS_ACCEL0,         KC_NO,   KC_NO,        KC_MS_BTN4,   KC_MS_BTN5,   KC_RGUI,
                                                               TO(0), KC_LSFT, KC_NO, KC_LSFT
  ),

  [5] = LAYOUT_split_3x5_2( // number layer - left upper
    KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_PLUS,    KC_7,   KC_8,   KC_9,   MRALT(KC_ASTERISK),
    KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_EQUAL,         KC_0,       KC_4,   KC_5,   KC_6,   MRCTL(KC_QUOT),
    KC_LGUI,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_MINUS,   KC_1,   KC_2,   KC_3,   MRGUI(KC_SLASH),
                                             TO(0), KC_LSFT, KC_SPACE, KC_ENTER
  ),

  /*
   * gaming section
   */

  [6] = LAYOUT_split_3x5_2( // gaming layer 1
    KC_QUOTE,       KC_COMMA,   KC_DOT,   KC_P,   KC_Y,            KC_F,   KC_G,   KC_C,   KC_R,   MLALT(KC_L),
    KC_A,           KC_O,       KC_E,     KC_U,   KC_I,            KC_D,   KC_H,   KC_T,   KC_N,   MLCTL(KC_S),
    KC_SEMICOLON,   KC_Q,       KC_J,     KC_K,   KC_X,            KC_B,   KC_M,   KC_W,   KC_V,   MLGUI(KC_Z),
                                            MO(7), KC_SPACE, KC_SPACE, KC_ENTER
  ),

  [7] = LAYOUT_split_3x5_2( // gaming layer 2
    KC_0,       KC_1,       KC_2,     KC_3,              KC_4,                     KC_F1,    KC_F2,    KC_F3,    KC_F4,          KC_F5,
    KC_5,       KC_6,       KC_7,     KC_8,              KC_9,                     KC_F6,    KC_F7,    KC_F8,    KC_F9,          KC_F10,
    KC_MINUS,   KC_EQUAL,   KC_ESC,   KC_LEFT_BRACKET,   KC_RIGHT_BRACKET,         KC_F11,   KC_F12,   KC_F13,   KC_BACKSPACE,   KC_TAB,
                                                            KC_TRNS, KC_SPACE, TO(0), KC_LSFT
  ),

};

/*
 * Combos
 */
const uint16_t PROGMEM combo_layer2[] = {KC_Q, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_layer3[] = {KC_M, KC_W, KC_V, COMBO_END};
const uint16_t PROGMEM combo_layer4[] = {KC_G, KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM combo_layer5[] = {KC_COMMA, KC_DOT, KC_P, COMBO_END};
combo_t key_combos[] = {
  COMBO(combo_layer2, TO(2)),
  COMBO(combo_layer3, TO(3)),
  COMBO(combo_layer4, TO(4)),
  COMBO(combo_layer5, TO(5)),
};
