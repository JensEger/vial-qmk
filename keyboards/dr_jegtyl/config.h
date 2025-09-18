// You shouldn't need to edit any of this.

#pragma once

// https://docs.qmk.fm/features/pointing_device
// https://ryanis.cool/cosmos/docs/qmk-rp2040/#configuration
// https://ryanis.cool/cosmos/_app/immutable/assets/lemon-pcb-pinout.vhb9kmvX.png

// #define MASTER_RIGHT

// Vial Definitions
#define VIAL_KEYBOARD_UID {0x42, 0x16, 0x13, 0x37, 0x03, 0x42, 0x19, 0x82}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* Trackball  Config using VIK Pins */
#undef SPI_DRIVER
#define SPI_DRIVER SPID1
#undef SPI_SCK_PIN
#define SPI_SCK_PIN GP14
#undef SPI_MISO_PIN
#define SPI_MISO_PIN GP12
#undef SPI_MOSI_PIN
#define SPI_MOSI_PIN GP15
#define POINTING_DEVICE_CS_PIN GP13
// #define ROTATIONAL_TRANSFORM_ANGLE -30 // Optional: Rotates the trackball
// #define POINTING_DEVICE_INVERT_X // Optional: Inverts trackball X

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define PMW33XX_LIFTOFF_DISTANCE 0x021
// #define POINTING_DEVICE_DEBUG

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define SPLIT_USB_DETECT
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

// Case Words
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Speculative Hold
#define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LEFT_ALT), MOD_BIT(KC_LEFT_GUI), MOD_BIT(KC_APP) }

// Auto Shift
#define AUTO_SHIFT_TIMEOUT 175
#define NO_AUTO_SHIFT_NUMERIC 
#define AUTO_SHIFT_ENTER

#define TAPPING_TERM 200

// #include "keyboards/dr_jegtyl/vik/config.vik.post.h"
