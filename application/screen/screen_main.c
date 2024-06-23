/*
 * screen_main.c
 *
 *  Created on: Nov 11, 2023
 *      Author: pablo-jean
 */


#include "screen.h"


static lv_obj_t *screen;

static lv_obj_t *labelTitle, *labelXAxis, *labelYAxis, *labelStatus;
static lv_obj_t *labelGraphicAxis;

LV_IMG_DECLARE(cpu);
LV_IMG_DECLARE(two_arrows);

// custom fonts
extern lv_font_t ubuntu_4px;
extern lv_font_t ubuntu_24px;
extern lv_font_t ubuntu_16;
extern lv_font_t ubuntu_8px;

/* Callbacks */

uint32_t Minutes, Seconds, Mils;
uint8_t Couting = 0;

/* Initialize functions */

void _init_text(){
	labelTitle = lv_label_create(lv_scr_act());
	lv_obj_align(labelTitle, LV_ALIGN_TOP_MID, 0, 2);
	lv_label_set_text(labelTitle, "Joystick Axis");
	lv_obj_set_style_text_font(labelTitle, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

	labelXAxis = lv_label_create(lv_scr_act());
	lv_obj_align(labelXAxis, LV_ALIGN_TOP_MID, 40, 53);
	lv_label_set_text(labelXAxis, "X +000");
	lv_obj_set_style_text_font(labelXAxis, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

	labelYAxis = lv_label_create(lv_scr_act());
	lv_obj_align(labelYAxis, LV_ALIGN_TOP_MID, -40, 53);
	lv_label_set_text(labelYAxis, "Y -000");
	lv_obj_set_style_text_font(labelYAxis, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

	labelGraphicAxis = lv_label_create(lv_scr_act());
	lv_obj_align(labelGraphicAxis, LV_ALIGN_CENTER, 0, 0);
	lv_label_set_text(labelGraphicAxis, "+");
	lv_obj_set_style_text_font(labelGraphicAxis, &lv_font_unscii_8, _LV_STYLE_STATE_CMP_SAME);

}

void _init_imgs(){

}


lv_group_t* screen_main_init(){
	lv_group_t *group;

	screen = lv_disp_get_scr_act(NULL);
	lv_scr_load(screen);

	_init_text();
	_init_imgs();

	group = lv_group_create();

	return group;
}

void screen_upd_joystick(int32_t X, int32_t Y, uint8_t Pressed){
	char Text[20];

	if (Pressed){
		lv_label_set_text(labelGraphicAxis, "X");
	}
	else{
		lv_label_set_text(labelGraphicAxis, "+");
	}
	lv_obj_align(labelGraphicAxis, LV_ALIGN_CENTER, Y/2, -X/6);

	sprintf(Text, "Y %+li", X);
	lv_label_set_text(labelYAxis, Text);

	sprintf(Text, "X %+li", Y);
	lv_label_set_text(labelXAxis, Text);
}

