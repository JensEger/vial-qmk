#include QMK_KEYBOARD_H

#ifdef CONSOLE_ENABLE
#include "print.h"
#endif
#include <keycodes.h>

#include "quantum.h"

// Layout content

#define XXX KC_NO

#define LAYOUT5x6_4(k0A, k0B, k0C, k0D, k0E, k0F, k7A, k7B, k7C, k7D, k7E, k7F, k1A, k1B, k1C, k1D, k1E, k1F, k8A, k8B, k8C, k8D, k8E, k8F, k2A, k2B, k2C, k2D, k2E, k2F, k9A, k9B, k9C, k9D, k9E, k9F, k3A, k3B, k3C, k3D, k3E, k3F, kAA, kAB, kAC, kAD, kAE, kAF, k4C, k4D, k4A, k4B, k4E, k4F, kBA, kBB, kBE, kBF, kBC, kBD) { \
    { k0A, k0B, k0C, k0D, k0E, k0F, XXX }, \
    { k1A, k1B, k1C, k1D, k1E, k1F, XXX }, \
    { k2A, k2B, k2C, k2D, k2E, k2F, XXX }, \
    { k3A, k3B, k3C, k3D, k3E, k3F, XXX }, \
    { k4A, k4B, k4C, k4D, k4E, k4F, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { k7A, k7B, k7C, k7D, k7E, k7F, XXX }, \
    { k8A, k8B, k8C, k8D, k8E, k8F, XXX }, \
    { k9A, k9B, k9C, k9D, k9E, k9F, XXX }, \
    { kAA, kAB, kAC, kAD, kAE, kAF, XXX }, \
    { kBA, kBB, kBC, kBD, kBE, kBF, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX } \
}

enum layers
{
    _COLEMAK = 0,
    _NAV,
    _NUM,
    _SRT,
    _FUN,
    _MSE,
    _GAM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT5x6_4(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                                       KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, 
        KC_BSLS, KC_Q, KC_W, KC_F, KC_P, KC_G,                                      KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_SLSH, 
        SC_LSPO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D,      KC_H, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), SC_RSPC, 
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                                        KC_K, KC_M, KC_COMM, KC_DOT, KC_QUOT, KC_MINS,  
        
        KC_PGUP, KC_PGDN, LT(1,KC_BSPC), LT(2,KC_DEL), LT(3,KC_ESC), KC_APP,        KC_NO, LT(6,KC_TAB), LT(4,KC_SPC), LT(5,KC_ENT),  KC_LBRC, KC_RBRC ),

    [_NAV] = LAYOUT5x6_4(
        QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, EE_CLR,            KC_NO, KC_NO, RCS(KC_Z), RCS(KC_Y), KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               LCTL(KC_X), KC_BSPC, LCTL(KC_Z), LCTL(KC_Y), KC_DEL, KC_INS, 
        KC_CAPS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,     LCTL(KC_C), KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_PSCR, 
        QK_LLCK, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG,           LCTL(KC_V), KC_HOME, KC_PGUP, KC_PGDN, KC_END, LCTL(KC_H),  
            
        KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO,             KC_NO, SELWBAK, SELLINE, SELWORD, LCTL(KC_F), LCTL(KC_G)),

    [_NUM] = LAYOUT5x6_4(
        QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, EE_CLR,            KC_TILD, KC_CIRC, KC_HASH, KC_DLR, KC_AT, KC_EXLM, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_PERC, KC_7, KC_8, KC_9, KC_COLN, KC_LT, 
        KC_NUM, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,      KC_PPLS, KC_4, KC_5, KC_6, KC_PMNS, KC_GT, 
        QK_LLCK, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG,           KC_PAST, KC_1, KC_2, KC_3, KC_PSLS, KC_PEQL, 
        
        KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,             KC_PENT, KC_COMM, KC_DOT, KC_0, KC_LPRN, KC_RPRN),
    
    [_SRT] = LAYOUT5x6_4(
        QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, EE_CLR,            KC_MSEL, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_WHOM, KC_F7, KC_F8, KC_F9, KC_F10, KC_F13, 
        KC_SCRL, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,     KC_CALC, KC_F4, KC_F5, KC_F6, KC_F11, KC_F14, 
        QK_LLCK, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG,           KC_MYCM, KC_F1, KC_F2, KC_F3, KC_F12, KC_F15, 
        
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO,             KC_NO, KC_MPLY, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU),

    [_FUN] = LAYOUT5x6_4(
        KC_TILD, KC_COMM, KC_LPRN, KC_RPRN, KC_SCLN, KC_QUES,   EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, 
        KC_AT, KC_LCBR, KC_DQUO, KC_QUOT, KC_RCBR, KC_DOT,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_HASH, KC_CIRC, KC_EQL, KC_UNDS, KC_DLR, KC_ASTR,     KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, 
        KC_EXLM, KC_LT, KC_PIPE, KC_MINS, KC_GT, KC_SLSH,       DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, QK_LLCK, 
        KC_AMPR, KC_PLUS, KC_BSLS, KC_COLN, KC_PERC, KC_NO,     KC_NO, KC_NO, KC_NO, KC_TRNS, KC_LBRC, KC_RBRC),
    
    [_MSE] = LAYOUT5x6_4(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, 
        KC_NO, MS_ACL2, MS_WHLL, MS_UP, MS_WHLR, KC_NO,             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, MS_ACL0, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO,           KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, 
        KC_NO, MS_ACL1, LCTL(KC_RCTL), MS_BTN4, MS_BTN5, KC_NO,     DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, QK_LLCK, 
        MS_WHLU, MS_WHLD, MS_BTN1, MS_BTN2, MS_BTN3, KC_NO,         KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,  KC_NO),
    
    [_GAM] = LAYOUT5x6_4(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, QK_LLCK, 
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  debug_mouse=true;
}
