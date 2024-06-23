/*
 * screen.h
 *
 *  Created on: Nov 11, 2023
 *      Author: pablo-jean
 */

#ifndef SCREEN_SCREEN_H_
#define SCREEN_SCREEN_H_

#include <string.h>
#include <stdio.h>

#include "lvgl.h"

lv_group_t* screen_main_init();

void screen_upd_joystick(int32_t X, int32_t Y, uint8_t Pressed);

#endif /* SCREEN_SCREEN_H_ */
