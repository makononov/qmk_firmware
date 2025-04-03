#include QMK_KEYBOARD_H
#include "stdint.h"
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


enum layers {
    BASE,
    SYMB,
    QWERTY,
    NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ergodox(
        // Left hand
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_BSLS,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_ESC,
        KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_TAB,
        KC_LGUI, KC_HOME, KC_END,  MO(NUM), MO(SYMB),
                                                      KC_LCTL, KC_LALT,
                                                               KC_INS,
                                            KC_BSPC,  KC_DEL,  TO(QWERTY),
        // Right hand
        KC_APP,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
        KC_ESC,  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
                 KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
        KC_TAB,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
                          MO(SYMB),KC_LEFT, KC_UP, KC_DOWN,   KC_RGHT,
        KC_LALT, KC_ESC,
        KC_PGUP,
        KC_PGDN, KC_ENT,  KC_SPC
    ),

    [SYMB] = LAYOUT_ergodox(
        // Left hand
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,
        KC_NO, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
        KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        LGUI(KC_L),   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
                                                      KC_NO,   KC_NO,
                                                               KC_NO,
                                            KC_TRNS, KC_TRNS,  KC_NO,
        // Right hand
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPLY,
        KC_NO,   KC_NO,   KC_LCBR, KC_RCBR, KC_QUOT, KC_DQUO, KC_VOLU,
                 KC_NO,   KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_VOLD,
        KC_NO,   KC_NO,   KC_PEQL, KC_PPLS, KC_PMNS, KC_PAST, KC_MUTE,
                          KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,
        KC_NO,
        KC_NO,   KC_TRNS,   KC_TRNS
    ),

    [QWERTY] = LAYOUT_ergodox(
        // Left hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,
        KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                      KC_TRNS, KC_TRNS,
                                                               KC_TRNS,
                                            KC_TRNS,  KC_TRNS, TO(BASE),
        // Right hand
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RBRC,
        KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TRNS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [NUM] = LAYOUT_ergodox(
        // Left hand
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,
                                                      KC_NO,   KC_NO,
                                                               KC_NO,
                                            KC_TRNS, KC_TRNS,  KC_NO,
        // Right hand
        KC_NO,   KC_NO,   KC_NO,   KC_PSLS, KC_PAST, KC_PMNS, KC_NO,
        KC_NO,   KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,
                 KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_NO,
        KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_NO,
                          KC_P0,   KC_NO,   KC_PDOT, KC_PENT, KC_NO,
        KC_NO,   KC_NO,
        KC_NO,
        KC_NO,   KC_TRNS,   KC_TRNS
    )
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

