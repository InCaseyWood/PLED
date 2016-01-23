//*****************************************************************************
//
// fontcmtt12.c - Font definition for the 12pt Cmtt font.
//
// Copyright (c) 2011-2015 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.1.71 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmtt
//     Size: 12 point
//     Bold: no
//     Italic: no
//     Memory usage: 1516 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 12 point Cmtt font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmtt12Data[1313] =
{
      4,   8,   0,  12,  11,   8, 240,  81, 113, 113, 113, 113,
    241, 240, 192,  12,   8, 240,  65,  17,  81,  17,  81,  17,
      0,   7,  32,  15,   8, 240,  97,  81,  17,  69,  65,  17,
     69,  65,  17,  81, 240, 208,  17,   8,  49, 113, 100,  66,
     17,  66, 115,  66,  17,  66,  17,  67,  97, 240,  80,  16,
      8, 162,  98,  17,  67, 113, 113,  97, 113,  18,  65,  18,
     98, 240,  32,  16,   8, 240,  66,  98, 100,  65,  17,  67,
     81,  17,  17,  65,  18, 240, 160,   9,   8, 240,  81, 113,
    113,   0,   7,  48,  14,   8,  81,  97,  97, 113, 113, 113,
    113, 113, 129, 129, 240,  48,  14,   8,  49, 129, 113, 129,
    113, 113, 113,  97, 113,  97, 240,  80,  12,   8, 240, 209,
     81,  18,  82,  84,  97, 240, 240,  80,  12,   8, 240,  81,
    113, 113,  85,  81, 113, 240, 240,  80,   9,   8,   0,   7,
     50,  98,  97, 240,  80,   8,   8, 240, 240, 196,   0,   6,
     32,   7,   8,   0,   8,  65, 240, 192,  14,   8,  81, 113,
     97, 113, 113,  97, 113, 113,  97, 113, 240,  96,  17,   8,
    240,  67,  66,  18,  49,  49,  49,  49,  49,  49,  50,  18,
     67, 240, 176,  12,   8, 240,  81,  98, 113, 113, 113, 113,
     99, 240, 176,  14,   8, 240,  67,  65,  49,  49,  49, 113,
     82,  81, 101, 240, 160,  14,   8, 240,  51,  81,  33, 113,
     82, 129,  65,  33,  82, 240, 192,  15,   8, 240,  82,  81,
     17,  81,  17,  65,  33,  69,  97,  99, 240, 160,  14,   8,
    240,  52,  65, 115,  81,  33, 113,  65,  33,  67, 240, 192,
     16,   8, 240,  83,  65,  33,  52,  65,  49,  49,  49,  49,
     49,  67, 240, 176,  13,   8, 240,  53,  49,  49,  97, 113,
     97, 113, 113, 240, 192,  16,   8, 240,  67,  65,  49,  49,
     49,  67,  66,  18,  49,  49,  67, 240, 176,  16,   8, 240,
     66,  81,  33,  65,  33,  65,  33,  83,  65,  33,  67, 240,
    192,  10,   8, 240, 240,  97, 240, 240,  17, 240, 192,  11,
      8, 240, 240,  97, 240, 240,  17, 113, 240,  64,  12,   8,
    240,  97,  97,  82,  98, 129, 129, 240, 240,  64,   9,   8,
    240, 240,  69, 181, 240, 240, 176,  12,   8, 240,  49, 129,
    130,  98,  81,  97, 240, 240, 112,  12,   8, 240,  51,  81,
     33,  98,  81, 113, 241, 240, 208,  20,   8, 240,  67,  81,
     18,  49,  17,  17,  49,  17,  17,  49,  17,  17,  65,  17,
     99, 240, 160,  16,   8, 240,  81,  98,  97,  17,  81,  17,
     83,  81,  17,  66,  18, 240, 160,  16,   8, 240,  52,  81,
     33,  65,  33,  67,  81,  33,  65,  33,  52, 240, 176,  15,
      8, 240,  68,  50,  33,  49,  49,  49, 113, 114,  33,  67,
    240, 176,  17,   8, 240,  52,  81,  33,  65,  33,  65,  33,
     65,  33,  65,  33,  52, 240, 176,  16,   8, 240,  53,  65,
     33,  65,  17,  83,  81,  17,  81,  33,  53, 240, 160,  15,
      8, 240,  53,  65,  33,  65,  17,  83,  81,  17,  81,  99,
    240, 192,  16,   8, 240,  68,  65,  33,  49,  49,  49, 113,
     34,  50,  33,  68, 240, 160,  16,   8, 240,  38,  49,  33,
     65,  33,  68,  65,  33,  65,  33,  54, 240, 160,  12,   8,
    240,  53,  81, 113, 113, 113, 113,  85, 240, 160,  13,   8,
    240,  67,  97, 113, 113, 113,  81,  17,  83, 240, 192,  18,
      8, 240,  35,  17,  65,  33,  65,  17,  83,  81,  17,  81,
     33,  51,  18, 240, 160,  13,   8, 240,  51,  97, 113, 113,
    113, 113,  33,  53, 240, 160,  17,   8, 240,  34,  34,  50,
     17,  68,  68,  65,  33,  65,  33,  50,  34, 240, 160,  19,
      8, 240,  34,  19,  50,  17,  66,  17,  66,  17,  65,  18,
     65,  18,  51,  17, 240, 176,  17,   8, 240,  53,  49,  49,
     49,  49,  49,  49,  49,  49,  49,  49,  53, 240, 160,  14,
      8, 240,  52,  81,  33,  65,  33,  67,  81, 113,  99, 240,
    192,  19,   8, 240,  53,  49,  49,  49,  49,  49,  49,  49,
     49,  49,  17,  17,  52, 129, 240,  32,  17,   8, 240,  36,
     81,  33,  65,  33,  67,  81,  33,  65,  34,  35,  18, 240,
    160,  15,   8, 240,  66,  17,  49,  34,  49, 131, 129,  49,
     49,  52, 240, 176,  14,   8, 240,  53,  49,  17,  17,  81,
    113, 113, 113,  99, 240, 176,  17,   8, 240,  38,  49,  33,
     65,  33,  65,  33,  65,  33,  65,  33,  82, 240, 192,  17,
      8, 240,  50,  18,  49,  33,  81,  17,  81,  17,  81,  17,
     82, 113, 240, 192,  17,   8, 240,  50,  18,  49,  49,  49,
     33,  65,  18,  68,  68,  81,  17, 240, 176,  17,   8, 240,
     50,  18,  65,  17,  97, 113,  97,  17,  81,  17,  66,  18,
    240, 160,  15,   8, 240,  50,  18,  65,  17,  81,  17,  97,
    113, 113,  99, 240, 176,  14,   8, 240,  53,  49,  33, 113,
     97,  97,  97,  49,  53, 240, 160,  13,   8, 179,  81, 113,
    113, 113, 113, 113, 113, 115, 240,  48,  14,   8,  33, 113,
    113, 129, 113, 129, 113, 113, 129, 113, 240,  48,  13,   8,
    179, 113, 113, 113, 113, 113, 113, 113,  83, 240,  48,   7,
      8, 240,  66,   0,   9,  48,   7,   8,   0,   9,  36, 240,
     48,   9,   8, 240,  81, 113, 113,   0,   7,  48,  13,   8,
    240, 240,  67,  81,  33,  83,  65,  33,  69, 240, 160,  15,
      8, 240,  50, 113, 115,  81,  33,  65,  33,  65,  33,  67,
    240, 176,  13,   8, 240, 240,  83,  65,  33,  65, 113,  33,
     83, 240, 176,  15,   8, 240,  82, 113,  68,  49,  49,  49,
     49,  49,  49,  69, 240, 160,  13,   8, 240, 240,  83,  65,
     49,  53,  49,  49,  67, 240, 176,  12,   8, 240,  67,  81,
    100,  81, 113, 113, 100, 240, 176,  17,   8, 240, 240,  83,
     65,  17,  81,  17,  82,  99,  81,  33,  65,  33,  82,  48,
     15,   8, 240,  34, 113, 116,  65,  33,  65,  33,  65,  33,
     54, 240, 160,  11,   8, 240,  65, 226, 113, 113, 113, 100,
    240, 176,  14,   8, 240,  97, 211, 113, 113, 113, 113, 113,
     65,  33,  67,  48,  15,   8, 240,  34, 113, 113,  18,  65,
     17,  83,  81,  17,  70, 240, 160,  12,   8, 240,  51, 113,
    113, 113, 113, 113,  85, 240, 160,  19,   8, 240, 240,  54,
     49,  17,  17,  49,  17,  17,  49,  17,  17,  34,  17,  18,
    240, 144,  14,   8, 240, 240,  53,  65,  33,  65,  33,  65,
     33,  54, 240, 160,  14,   8, 240, 240,  83,  65,  49,  49,
     49,  49,  49,  67, 240, 176,  16,   8, 240, 240,  68,  81,
     33,  65,  33,  65,  33,  67,  81, 113,  99,  48,  15,   8,
    240, 240,  68,  49,  49,  49,  49,  49,  49,  68, 113, 113,
     99,  12,   8, 240, 240,  66,  18,  66,  97, 113, 100, 240,
    176,  13,   8, 240, 240,  68,  65,  33,  83,  65,  33,  68,
    240, 176,  13,   8, 240,  65, 113, 101,  65, 113, 113,  33,
     67, 240, 176,  15,   8, 240, 240,  50,  18,  65,  33,  65,
     33,  65,  33,  69, 240, 160,  14,   8, 240, 240,  66,  18,
     65,  17,  81,  17,  82, 113, 240, 192,  15,   8, 240, 240,
     66,  18,  49,  33,  65,  18,  83,  81,  17, 240, 176,  15,
      8, 240, 240,  66,  18,  65,  17,  97,  97,  17,  66,  18,
    240, 160,  14,   8, 240, 240,  69,  49,  33,  82,  98, 113,
    113,  82,  98,  64,  13,   8, 240, 240,  69,  49,  33,  97,
     97,  33,  53, 240, 160,  13,   8, 195,  81, 113, 113,  82,
    129, 113, 113, 115, 240,  32,  14,   8,  65, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 240,  64,  13,   8, 163, 113,
    113, 113, 130,  81, 113, 113,  83, 240,  64,   8,   8, 240,
     50,  17,   0,   9,  32,
};

//*****************************************************************************
//
// The font definition for the 12 point Cmtt font.
//
//*****************************************************************************
const tFont g_sFontCmtt12 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    6,

    //
    // The height of the font.
    //
    12,

    //
    // The baseline of the font.
    //
    9,

    //
    // The offset to each character in the font.
    //
    {
           0,    4,   15,   27,   42,   59,   75,   91,
         100,  114,  128,  140,  152,  161,  169,  176,
         190,  207,  219,  233,  247,  262,  276,  292,
         305,  321,  337,  347,  358,  370,  379,  391,
         403,  423,  439,  455,  470,  487,  503,  518,
         534,  550,  562,  575,  593,  606,  623,  642,
         659,  673,  692,  709,  724,  738,  755,  772,
         789,  806,  821,  835,  848,  862,  875,  882,
         889,  898,  911,  926,  939,  954,  967,  979,
         996, 1011, 1022, 1036, 1051, 1063, 1082, 1096,
        1110, 1126, 1141, 1153, 1166, 1179, 1194, 1208,
        1223, 1238, 1252, 1265, 1278, 1292, 1305,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmtt12Data
};
