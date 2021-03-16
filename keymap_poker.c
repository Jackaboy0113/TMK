#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
KEYMAP(        ESC,   FN1,  FN2,  FN3,  FN4,  FN5,  FN6,  FN7,  FN8,  FN9,  FN10,          FN11,  FN12,                                                                  \
       FN13,   GRV,   1,    2,    3,    4,    5,    6,    7,    8,    9,    0,             MINS,  EQL, BSPC,        PSCR,              PAUS,                      PGUP,  \
       FN14,   TAB,   Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,             LBRC,  RBRC,BSLS,        KC_AUDIO_VOL_UP,   KC_AUDIO_VOL_DOWN,         PGDN,  \
       FN15,   CAPS,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN,          GRV,   ENT
       FN16,   LSFT,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,          RSFT                                        UP,                               \
       FN17,   LCTL,  LGUI,                  SPC,                     ALT,  KC_WWW_SEARCH, APP,   RCTL              LEFT,              DOWN,                      RGHT,  \



)
};

const uint16_t PROGMEM fn_actions[] = {

};