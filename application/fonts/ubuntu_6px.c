/*******************************************************************************
 * Size: 6 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef UBUNTU_6PX
#define UBUNTU_6PX 1
#endif

#if UBUNTU_6PX

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x72, 0x71, 0x40, 0x51,

    /* U+0022 "\"" */
    0x87, 0x2, 0x20,

    /* U+0023 "#" */
    0x8, 0x34, 0x4b, 0xb4, 0x5a, 0xb4, 0x43, 0x80,

    /* U+0024 "$" */
    0x29, 0x57, 0x50, 0x5, 0xa4, 0x79, 0x5, 0x0,

    /* U+0025 "%" */
    0x78, 0x18, 0x4, 0x76, 0x20, 0x1, 0x76, 0x50,
    0x71, 0x98,

    /* U+0026 "&" */
    0x28, 0x70, 0x1a, 0x60, 0x75, 0x76, 0x66, 0x87,

    /* U+0027 "'" */
    0x80, 0x20,

    /* U+0028 "(" */
    0x2, 0x17, 0x62, 0x81, 0x53, 0x8, 0x0,

    /* U+0029 ")" */
    0x20, 0x81, 0x35, 0x27, 0x44, 0x80, 0x0,

    /* U+002A "*" */
    0x26, 0x24, 0xb3, 0x0, 0x0,

    /* U+002B "+" */
    0x5, 0x0, 0x4b, 0x70, 0x7, 0x0,

    /* U+002C "," */
    0x80, 0x30,

    /* U+002D "-" */
    0x64,

    /* U+002E "." */
    0x60,

    /* U+002F "/" */
    0x0, 0x12, 0x0, 0x71, 0x0, 0x80, 0x3, 0x50,
    0x8, 0x0, 0x8, 0x0,

    /* U+0030 "0" */
    0x48, 0x70, 0x90, 0x80, 0x90, 0x80, 0x48, 0x70,

    /* U+0031 "1" */
    0x1b, 0x31, 0x53, 0x5, 0x30, 0x53,

    /* U+0032 "2" */
    0x47, 0x70, 0x8, 0x9, 0x17, 0x86,

    /* U+0033 "3" */
    0x37, 0x70, 0x77, 0x0, 0x95, 0x77,

    /* U+0034 "4" */
    0x5, 0x90, 0x34, 0x80, 0x76, 0xb0, 0x0, 0x80,

    /* U+0035 "5" */
    0x39, 0x54, 0x82, 0x0, 0xa4, 0x78,

    /* U+0036 "6" */
    0x7, 0x50, 0x77, 0x60, 0x90, 0x90, 0x48, 0x80,

    /* U+0037 "7" */
    0x47, 0xc0, 0x45, 0x9, 0x0, 0x90,

    /* U+0038 "8" */
    0x57, 0x80, 0x65, 0x80, 0x74, 0x90, 0x67, 0x90,

    /* U+0039 "9" */
    0x57, 0x79, 0x9, 0x37, 0xa3, 0x63,

    /* U+003A ":" */
    0x60, 0x0, 0x60,

    /* U+003B ";" */
    0x60, 0x0, 0x60, 0x60,

    /* U+003C "<" */
    0x5, 0x70, 0x78, 0x10, 0x0, 0x60,

    /* U+003D "=" */
    0x47, 0x70, 0x47, 0x70,

    /* U+003E ">" */
    0x47, 0x20, 0x5, 0xb0, 0x42, 0x0,

    /* U+003F "?" */
    0x69, 0x20, 0x81, 0x23, 0x3, 0x30,

    /* U+0040 "@" */
    0x7, 0x67, 0x50, 0x64, 0x9a, 0x62, 0x85, 0x48,
    0x44, 0x45, 0x88, 0x70, 0x5, 0x65, 0x0,

    /* U+0041 "A" */
    0x7, 0x70, 0x7, 0x80, 0x68, 0x85, 0x90, 0x9,

    /* U+0042 "B" */
    0x78, 0x92, 0x77, 0xb2, 0x71, 0x17, 0x78, 0x83,

    /* U+0043 "C" */
    0x19, 0x73, 0x81, 0x0, 0x91, 0x0, 0x29, 0x73,

    /* U+0044 "D" */
    0x78, 0x74, 0x71, 0xa, 0x71, 0xa, 0x78, 0x84,

    /* U+0045 "E" */
    0x78, 0x70, 0x77, 0x50, 0x71, 0x0, 0x78, 0x71,

    /* U+0046 "F" */
    0x78, 0x70, 0x77, 0x50, 0x71, 0x0, 0x71, 0x0,

    /* U+0047 "G" */
    0x19, 0x74, 0x81, 0x0, 0x91, 0x9, 0x29, 0x78,

    /* U+0048 "H" */
    0x71, 0x9, 0x78, 0x7a, 0x71, 0x9, 0x71, 0x9,

    /* U+0049 "I" */
    0x71, 0x71, 0x71, 0x71,

    /* U+004A "J" */
    0x1, 0x80, 0x18, 0x1, 0x86, 0x94,

    /* U+004B "K" */
    0x71, 0x82, 0x79, 0x30, 0x77, 0x60, 0x71, 0x55,

    /* U+004C "L" */
    0x71, 0x0, 0x71, 0x0, 0x71, 0x0, 0x78, 0x70,

    /* U+004D "M" */
    0x57, 0x4, 0x87, 0x91, 0x88, 0x82, 0xb4, 0x88,
    0x4, 0x8,

    /* U+004E "N" */
    0x76, 0x9, 0x77, 0x49, 0x71, 0x8a, 0x71, 0x1c,

    /* U+004F "O" */
    0x18, 0x78, 0x8, 0x10, 0x63, 0x80, 0x6, 0x31,
    0x87, 0x80,

    /* U+0050 "P" */
    0x78, 0x92, 0x71, 0x36, 0x78, 0x70, 0x71, 0x0,

    /* U+0051 "Q" */
    0x18, 0x78, 0x8, 0x10, 0x63, 0x90, 0x6, 0x32,
    0x97, 0x80, 0x0, 0x67, 0x0,

    /* U+0052 "R" */
    0x78, 0x92, 0x71, 0x44, 0x77, 0xa0, 0x71, 0x55,

    /* U+0053 "S" */
    0x67, 0x57, 0x50, 0x3, 0xa5, 0x79,

    /* U+0054 "T" */
    0x6c, 0x72, 0x9, 0x0, 0x9, 0x0, 0x9, 0x0,

    /* U+0055 "U" */
    0x81, 0x9, 0x81, 0x9, 0x71, 0x9, 0x29, 0x84,

    /* U+0056 "V" */
    0xa0, 0x9, 0x63, 0x44, 0x9, 0x90, 0x7, 0x70,

    /* U+0057 "W" */
    0x90, 0x41, 0x44, 0x81, 0xa6, 0x71, 0x47, 0x58,
    0x80, 0xd, 0x6, 0x80,

    /* U+0058 "X" */
    0x73, 0x63, 0x9, 0x70, 0x9, 0x90, 0x81, 0x45,

    /* U+0059 "Y" */
    0x90, 0x54, 0x18, 0x80, 0x8, 0x20, 0x8, 0x10,

    /* U+005A "Z" */
    0x57, 0xd1, 0x6, 0x40, 0x27, 0x0, 0xa7, 0x71,

    /* U+005B "[" */
    0x46, 0x61, 0x61, 0x61, 0x61, 0x67,

    /* U+005C "\\" */
    0x3, 0x0, 0x8, 0x0, 0x6, 0x20, 0x1, 0x70,
    0x0, 0x80, 0x0, 0x44,

    /* U+005D "]" */
    0x64, 0x26, 0x26, 0x26, 0x26, 0x76,

    /* U+005E "^" */
    0xb, 0x30, 0x62, 0x80, 0x0, 0x0,

    /* U+005F "_" */
    0x7, 0x77,

    /* U+0060 "`" */
    0x20, 0x23,

    /* U+0061 "a" */
    0x27, 0x64, 0x69, 0x87, 0x90,

    /* U+0062 "b" */
    0x20, 0x0, 0x80, 0x0, 0x87, 0x90, 0x80, 0x63,
    0x77, 0x90,

    /* U+0063 "c" */
    0x48, 0x49, 0x0, 0x58, 0x40,

    /* U+0064 "d" */
    0x0, 0x20, 0x0, 0x80, 0x58, 0xb0, 0x90, 0x80,
    0x48, 0xa0,

    /* U+0065 "e" */
    0x48, 0x90, 0x96, 0x90, 0x58, 0x50,

    /* U+0066 "f" */
    0x48, 0x28, 0x71, 0x80, 0x8, 0x0,

    /* U+0067 "g" */
    0x48, 0xb9, 0x8, 0x58, 0xb3, 0x78,

    /* U+0068 "h" */
    0x20, 0x8, 0x0, 0x87, 0x98, 0x9, 0x80, 0x90,

    /* U+0069 "i" */
    0x50, 0x80, 0x80, 0x80,

    /* U+006A "j" */
    0x5, 0x0, 0x80, 0x8, 0x0, 0x80, 0x29, 0x0,

    /* U+006B "k" */
    0x30, 0x0, 0x80, 0x0, 0x84, 0x60, 0x8b, 0x0,
    0x82, 0x90,

    /* U+006C "l" */
    0x30, 0x80, 0x80, 0x80, 0x63,

    /* U+006D "m" */
    0x77, 0xa7, 0x78, 0x8, 0x9, 0x80, 0x80, 0x90,

    /* U+006E "n" */
    0x77, 0x98, 0x9, 0x80, 0x90,

    /* U+006F "o" */
    0x48, 0x90, 0x90, 0x63, 0x58, 0x90,

    /* U+0070 "p" */
    0x77, 0x90, 0x80, 0x63, 0x87, 0x90, 0x80, 0x0,

    /* U+0071 "q" */
    0x48, 0xa0, 0x90, 0x80, 0x58, 0xb0, 0x0, 0x80,

    /* U+0072 "r" */
    0x77, 0x18, 0x0, 0x80, 0x0,

    /* U+0073 "s" */
    0x77, 0x14, 0x82, 0x58, 0x40,

    /* U+0074 "t" */
    0x70, 0x9, 0x71, 0x80, 0x5, 0x81,

    /* U+0075 "u" */
    0x90, 0x98, 0x9, 0x48, 0xb0,

    /* U+0076 "v" */
    0x90, 0x86, 0x46, 0xc, 0x0,

    /* U+0077 "w" */
    0x90, 0xa2, 0x66, 0x69, 0x71, 0x1b, 0x2a, 0x0,

    /* U+0078 "x" */
    0x74, 0x70, 0xe1, 0x72, 0x80,

    /* U+0079 "y" */
    0x90, 0x95, 0x56, 0xc, 0x16, 0x60,

    /* U+007A "z" */
    0x4a, 0x61, 0x80, 0xa7, 0x40,

    /* U+007B "{" */
    0x7, 0x35, 0x34, 0x81, 0x34, 0x19,

    /* U+007C "|" */
    0x30, 0x61, 0x61, 0x61, 0x61, 0x61,

    /* U+007D "}" */
    0x70, 0x53, 0x43, 0x28, 0x43, 0x91,

    /* U+007E "~" */
    0x37, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 22, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 40, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 7, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 54, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 82, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 23, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 43, .adv_w = 31, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 31, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 57, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 62, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 24, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 70, .adv_w = 29, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 71, .adv_w = 24, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 37, .box_w = 4, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 84, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 54, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 24, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 24, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 159, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 54, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 169, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 39, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 91, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 196, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 52, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 26, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 50, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 84, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 75, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 75, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 335, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 54, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 63, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 89, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 61, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 32, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 415, .adv_w = 37, .box_w = 4, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 32, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 433, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 439, .adv_w = 47, .box_w = 4, .box_h = 1, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 441, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 443, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 57, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 57, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 54, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 37, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 491, .adv_w = 55, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 24, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 24, .box_w = 3, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 511, .adv_w = 50, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 26, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 83, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 57, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 553, .adv_w = 57, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 561, .adv_w = 37, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 39, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 48, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 75, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 49, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 606, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 32, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 617, .adv_w = 27, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 623, .adv_w = 32, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 629, .adv_w = 54, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 3, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    0, 9, 10, 11, 12, 13, 14, 15,
    16, 0, 0, 17, 18, 19, 20, 0,
    21, 22, 23, 24, 0, 25, 26, 27,
    28, 29, 30, 31, 32, 0, 33, 0,
    0, 0, 34, 35, 36, 0, 0, 37,
    0, 38, 0, 39, 40, 0, 41, 41,
    42, 43, 44, 45, 0, 46, 0, 47,
    48, 49, 0, 50, 51, 0, 52, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 3, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 9, 0, 0, 0,
    10, 11, 12, 0, 13, 0, 0, 0,
    14, 0, 0, 15, 0, 0, 16, 0,
    17, 0, 17, 0, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 0, 27, 0,
    0, 0, 28, 0, 29, 30, 31, 32,
    33, 0, 0, 34, 0, 0, 35, 35,
    36, 35, 37, 35, 38, 39, 40, 41,
    42, 43, 44, 45, 46, 0, 47, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, -2, -2, -12, 0,
    -2, 0, 0, 0, 1, 1, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, 0, -3,
    -2, 1, -1, 1, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -1, -1, -1, 0, -1, -1,
    -3, 0, -3, -2, -3, -4, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, -1, -1, -12, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -3, -3, 3, 0, -3, 1, -7, -2,
    -7, -4, 1, -8, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, -5, 0, -1,
    0, -3, -5, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, -3, -3,
    -7, 0, -2, 0, 3, 0, 3, 2,
    2, 3, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    0, -1, 0, -8, -1, -2, -1, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -1, -1, -2, 0,
    -1, -2, -4, -1, -3, -2, -4, -5,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -2, 0, -6, 2, 0, 2, 0,
    0, -1, 3, -2, -2, 3, 0, -2,
    2, -6, -1, -6, -2, 2, -8, 2,
    0, -3, 0, -1, -1, -1, 0, -2,
    0, 0, -1, -1, 1, 0, -1, -2,
    -2, 2, -1, 1, -2, -1, 0, -1,
    -1, -2, -1, -1, 0, -2, -1, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, -2, -2, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -2, 0, 0, -2,
    0, 0, 2, -3, 0, 0, 1, -2,
    2, -2, -2, 2, 0, -2, 1, 2,
    0, 2, 0, 1, 2, 1, -1, 0,
    0, -1, -1, -1, 0, -1, 0, 0,
    -1, -1, 0, 0, -2, -2, -2, 1,
    -2, 0, -3, 0, -1, -2, -1, -3,
    0, -3, 0, -4, 0, -4, -1, -2,
    0, 0, -2, 0, 0, -1, -3, 0,
    -2, -2, -2, -4, -1, -1, -4, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -2, -2, 0, -1,
    1, 0, 0, 0, 0, -2, 2, -3,
    -3, 2, 0, -3, 0, 0, -2, 0,
    0, 0, 0, 0, -2, -4, 0, -2,
    -2, -2, 0, -2, 0, 0, -2, -1,
    0, -1, -2, -2, -2, 1, -2, 0,
    -2, -2, -1, 0, -2, 0, 0, -6,
    0, -6, -2, 1, -2, -4, -1, -1,
    -8, 0, -1, 0, 1, 0, 2, 0,
    0, 2, 0, -1, -4, -5, -1, -1,
    -1, 0, -1, 0, -3, -1, -1, 0,
    0, -2, 0, 0, -3, 0, -2, 0,
    0, 0, 0, 0, -1, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -2, 0, 0, -1,
    0, 0, 0, -1, 0, -1, 0, -3,
    0, 0, 0, -1, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -2, 0,
    0, -2, 0, -3, 2, -5, 2, 0,
    1, -2, 3, -3, -3, 3, 0, -3,
    0, 2, 0, 2, 1, 2, 2, 2,
    0, -2, 0, -2, -2, -2, 0, -2,
    0, 0, -2, -2, 1, 0, -1, -1,
    -5, 3, -1, 2, -2, 0, 0, -12,
    -1, 0, -13, 2, -7, 1, 0, 0,
    0, 3, -4, -4, 3, 0, -4, 1,
    -11, -2, -10, -4, 2, -11, 1, 0,
    -3, 0, -1, -1, -1, 0, -1, 0,
    0, -1, -1, 0, 0, 0, -4, -4,
    2, -2, 1, -2, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -2, -1, -3,
    0, -3, 0, -4, 0, -3, -1, -2,
    0, 0, -2, 0, 0, -1, -3, 0,
    -2, -2, -2, -4, -1, -1, -4, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -1, 0, -1, -2, 0,
    -9, 0, -6, 0, 0, 0, -5, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -1, -4, -2, -2,
    -2, -3, 0, -2, 0, 0, -2, -1,
    0, 0, 0, 1, 1, 0, 1, 0,
    0, -2, -1, -2, -1, 0, 0, -3,
    0, 0, 0, -3, -1, -2, 0, 0,
    -2, 0, 0, -1, -3, 0, -2, -2,
    -2, -4, -1, -1, 0, -1, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 1, 0,
    1, 0, -1, -1, 3, -1, -1, 2,
    0, -1, 0, 0, 0, -1, 0, 2,
    -2, 1, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 1, -2, -2,
    0, 0, -3, 1, 0, -7, -5, -8,
    -8, 2, -5, -6, -3, -3, -9, 0,
    -3, 0, 2, 0, 3, 2, 1, 3,
    0, 0, -3, -4, -5, -5, -5, 0,
    -5, 0, -4, -5, -5, -4, 0, -3,
    -2, -8, -2, -2, -3, -2, 0, 0,
    0, -1, 0, 0, -1, 0, -4, -1,
    0, 0, -1, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -4, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -1, -2, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, -6, -2, -2, -9, -1, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -4, -4, -4, 0, -4, 0,
    -3, -4, -4, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, -2,
    0, 0, -4, 0, -5, -1, 2, -2,
    -2, -2, -2, -6, 0, -2, 0, 2,
    0, 2, 1, 1, 2, 0, 0, -4,
    -3, -2, -2, -2, 0, -2, 0, -2,
    -2, -2, -2, 0, -2, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -2, 0,
    -2, 1, -3, 1, 0, 0, -2, 3,
    -2, -2, 2, 0, -2, 0, 1, 0,
    2, 0, 2, 2, 1, 0, -3, 0,
    -2, -2, -2, 0, -2, 0, 0, -2,
    -2, 0, 0, -1, -1, -4, 2, -1,
    0, -2, 0, 0, 0, -4, 2, 0,
    -6, -5, -8, -4, 2, -6, -8, -4,
    -4, -11, -1, -4, 0, 3, 0, 3,
    2, 2, 3, 1, 0, -2, -4, -5,
    -5, -5, 0, -5, 0, -4, -5, -5,
    -2, 0, -3, 0, 0, -1, 0, -3,
    -2, 0, 0, 0, -2, 0, 0, 1,
    -6, 0, 0, 0, -2, 2, -3, -3,
    2, 0, -3, 0, 0, -1, 1, 0,
    0, 1, 0, -2, -4, 0, -2, -2,
    -2, 0, -2, 0, 0, -2, -1, 0,
    -1, -2, -2, -2, 1, -2, 0, -3,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -4, -4, -3,
    0, -4, -2, -3, -4, -3, -4, -3,
    -3, -4, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    -1, 0, 0, 0, 0, -1, -1, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -2, -2, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, 0, 0, -2, 0, -4,
    0, -3, 0, 0, 0, -2, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    -2, -1, -2, 0, -2, 0, 0, 0,
    0, 0, 1, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, -1, 0, 0, -2, 0, 0,
    -1, 0, 0, 0, 0, 1, 1, 2,
    1, 0, -2, 0, 0, 0, 0, 4,
    1, -5, -3, -4, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 2, 1, 2,
    0, 0, 4, 0, -4, 0, -2, -2,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, -1, 0, -2, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    1, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, -2, -2,
    0, -3, 0, 0, -3, -2, 0, 0,
    0, 0, 0, 2, 0, 0, -2, 0,
    0, -3, 0, -2, -2, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, 0, -2, 0, 0, -2, 0,
    -3, 0, -3, -2, 0, 0, -2, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, -2, -1, -2, 0, -2, 0, -3,
    0, -3, -2, 0, 0, -2, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    -2, -1, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -5, -3, -4, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 2, 2, 2, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -1,
    -1, -1, 0, -1, 0, 0, -1, -1,
    0, 0, 0, 0, 0, 2, 0, 0,
    -2, 0, 0, 0, 0, 0, 1, -3,
    0, -3, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -1, -1,
    -1, 0, -1, 0, 0, -1, -1, 0,
    0, 0, 2, 2, 1, 2, 0, 0,
    0, 0, 0, 0, 0, 1, -3, 0,
    -3, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -1, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 2, 2, 1, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -2, -2, -2, 0,
    -2, 0, 0, -2, -2, 0, 0, 0,
    0, 0, 2, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -2, -2, -2, -1, -2,
    0, 0, -2, -2, 0, -1, -1, 0,
    0, 0, 0, 0, -3, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -2, -3, -1, 0, -3, -2,
    0, -2, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, -2, -2,
    -1, -2, -2, -3, -2, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 52,
    .right_class_cnt     = 47,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ubuntu_6px = {
#else
lv_font_t ubuntu_6px = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 7,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if UBUNTU_6PX*/
