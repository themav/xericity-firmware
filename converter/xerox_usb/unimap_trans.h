/*
 * Copyright 2023 TheMK/themav
 *
 * This program is distrubted in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Licensed materials, subject to the terms of the Xericity Converter Microcode License.
 *
 */

#ifndef _TRANS_H
#define _TRANS_H

#include <stdint.h>
#include <avr/pgmspace.h>
#include "unimap.h"

//Map Xerox Docutech/Daybreak scan codes to UNIMAP layout codes.

/* Xerox Docutech/Daybreak Keyboard ASCII art
 *            ,--------------------.  ,-------------------.  ,-----------.
 *           |  63|  64|  65|  66 |  |  67|  68|  69|  6A|  |   6B|   6C|
 *           `--------------------'  `-------------------'  `-----------'
 *,--------. ,----------------------------------------------------------. ,---------------.
 *| 54|  55| | 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D| 0E| 0F| 10|    11| | 40| 41| 42| 43|
 *|--------| |----------------------------------------------------------| |---------------|
 *| 56|  57| |   12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B| 1C| 1D| 1E|  1F| | 44| 45| 46| 47|
 *|--------| |-------------------------------------------------------   | |---------------|
 *| 58|  59| |    6D| 21| 22| 23| 24| 25| 26| 27| 28| 29| 2A| 2B| 2C|   | | 48| 49| 4A| 4B|
 *|--------| |----------------------------------------------------------| |   |-----------|
 *| 5B|  5C| |      2D| 2F| 30| 31| 32| 33| 34| 35| 36| 37| 38|       39| |   | 4D| 4E| 4F|
 *|--------| |----------------------------------------------------------| |---------------|
 *| 5D|  5E| |   3A|    |               3D                   |    |   3F| |     50| 52| 53|
 *`--------' `-----'    `------------------------------------'    `-----' `---------------'
 */

//Say what we want each scancode to actually represent by default. User will then be able to remap from here.

const uint8_t PROGMEM unimap_trans[MATRIX_ROWS][MATRIX_COLS] = {
    { UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_GRV,  UNIMAP_1,    UNIMAP_2,    UNIMAP_3     }, /* 00-07 */
    { UNIMAP_4,    UNIMAP_5,    UNIMAP_6,    UNIMAP_7,    UNIMAP_8,    UNIMAP_9,    UNIMAP_0,    UNIMAP_MINS  }, /* 08-0F */
    { UNIMAP_EQL,  UNIMAP_BSPC, UNIMAP_TAB,  UNIMAP_Q,    UNIMAP_W,    UNIMAP_E,    UNIMAP_R,    UNIMAP_T     }, /* 10-17 */
    { UNIMAP_Y,    UNIMAP_U,    UNIMAP_I,    UNIMAP_O,    UNIMAP_P,    UNIMAP_LBRC, UNIMAP_RBRC, UNIMAP_ENT   }, /* 18-1F */
    { UNIMAP_NO,   UNIMAP_A,    UNIMAP_S,    UNIMAP_D,    UNIMAP_F,    UNIMAP_G,    UNIMAP_H,    UNIMAP_J     }, /* 20-27 */
    { UNIMAP_K,    UNIMAP_L,    UNIMAP_SCLN, UNIMAP_QUOT, UNIMAP_BSLS, UNIMAP_LSFT, UNIMAP_NO,   UNIMAP_Z     }, /* 28-2F */
    { UNIMAP_X,    UNIMAP_C,    UNIMAP_V,    UNIMAP_B,    UNIMAP_N,    UNIMAP_M,    UNIMAP_COMM, UNIMAP_DOT   }, /* 30-37 */
    { UNIMAP_SLSH, UNIMAP_RSFT, UNIMAP_LCTL, UNIMAP_NO,   UNIMAP_NO,   UNIMAP_SPC,  UNIMAP_NO,   UNIMAP_RALT  }, /* 38-3F */
    { UNIMAP_PPLS, UNIMAP_PMNS, UNIMAP_PAST, UNIMAP_PSLS, UNIMAP_NLCK, UNIMAP_P7,   UNIMAP_P8,   UNIMAP_P9    }, /* 40-47 */
    { UNIMAP_PENT, UNIMAP_P4,   UNIMAP_P5,   UNIMAP_P6,   UNIMAP_NO,   UNIMAP_P1,   UNIMAP_P2,   UNIMAP_P3    }, /* 48-4F */
    { UNIMAP_P0,   UNIMAP_NO,   UNIMAP_PDOT, UNIMAP_PCMM, UNIMAP_F1,   UNIMAP_F2,   UNIMAP_F3,   UNIMAP_F4    }, /* 50-57 */
    { UNIMAP_F5,   UNIMAP_F6,   UNIMAP_NO,   UNIMAP_F7,   UNIMAP_F8,   UNIMAP_F9,   UNIMAP_F10,  UNIMAP_NO    }, /* 58-5F */
    { UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_ESC,  UNIMAP_LGUI, UNIMAP_HOME, UNIMAP_END,  UNIMAP_LEFT  }, /* 60-67 */
    { UNIMAP_DOWN, UNIMAP_UP,   UNIMAP_RGHT, UNIMAP_PGUP, UNIMAP_PGDN, UNIMAP_CAPS, UNIMAP_CAPS, UNIMAP_NO    }, /* 68-6F */
    { UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO    }, /* 70-77 */
    { UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_NO,   UNIMAP_RSFT, UNIMAP_NO,   UNIMAP_NO    }  /* 78-7F */
};
#endif 
