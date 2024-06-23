/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "dma.h"
#include "spi.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdint.h>
#include "lvgl.h"
#include "ST7920_SERIAL.h"

#include "screen/screen.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

typedef enum{
	JOY_SW_RELEASED,
	JOY_SW_PRESSED
}joystick_sw_e;

typedef struct{
	struct{
		// Holds raw ADC read
		uint16_t u16AdcBuffer[2];
	}buffer;
	// processed value of X and Y axis
	// range is -100 to +100
	int_fast8_t AxisX;
	int_fast8_t AxisY;
	joystick_sw_e eButton;
}joystick_t;

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
#define JOYSTICK_AXIS				(2)
#define JOYSTICK_ADC_MAX_VAL		(4095)
#define JOYSTICK_BTN_PRESSED_VAL	(GPIO_PIN_RESET)

#define JOYSTICK_AXIS_X_INDEX		(0)
#define JOYSTICK_AXIS_Y_INDEX		(1)
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
joystick_t Joystick1;

static lv_disp_drv_t DispDriver;
static lv_disp_draw_buf_t DrawBuf;
static lv_color_t buf1[128 * 64];
static lv_disp_t *disp;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* === TIM Callbacks == */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if (htim->Instance == TIM9){
		lv_tick_inc(5);
	}
}

/* === Display Fxns === */

void my_disp_flush(struct _lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p)
{
	int32_t x, y;
	/*It's a very slow but simple implementation.
	 *`set_pixel` needs to be written by you to a set pixel on the screen*/
	for(y = area->y1; y <= area->y2; y++) {
		for(x = area->x1; x <= area->x2; x++) {
			if (color_p->full == 0){
				SetPixel(x, y);
			}
			else{
				ClearPixel(x, y);
			}
			color_p++;
		}
	}

	lv_disp_flush_ready(disp_drv);         /* Indicate you are ready with the flushing*/
}


void _screen_init(){
	/* initialize ST7920 Display Driver */
	ST7920_Init();
	ST7920_GraphicMode(1);
	ST7920_Clear();

	/* Initialize basic LVGL */
	lv_init();
	lv_disp_draw_buf_init(&DrawBuf, buf1, NULL, sizeof(buf1));

	/* initialize the driver for LVGL */
	lv_disp_drv_init(&DispDriver);
	DispDriver.flush_cb = my_disp_flush;
	//  DispDriver.set_px_cb = my_set_px_cb;
	//  DispDriver.rounder_cb = my_rounder;
	DispDriver.draw_buf = &DrawBuf;
	DispDriver.hor_res = 128;
	DispDriver.ver_res = 64;
	disp = lv_disp_drv_register(&DispDriver);

	// Start the lvgl timebase timer
	HAL_TIM_Base_Start_IT(&htim9);

	// initialize screen position and coniguration
	screen_main_init();
}

/** Interrupt Routines **/

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc){
	// if you want to do something after conversion
	// you can use this callback for this
}

/** Joystick functions **/

void _joystick_init(joystick_t *Joy){
	HAL_ADC_Start_DMA(&hadc1,
			(uint32_t*)Joy->buffer.u16AdcBuffer,
			JOYSTICK_AXIS);
}

void _joystick_process(joystick_t *Joy){
	int32_t i32RawTo0to200, i32_0to200To100to100;

	if (HAL_GPIO_ReadPin(JOY_SW_GPIO_Port, JOY_SW_Pin) == JOYSTICK_BTN_PRESSED_VAL){
		Joy->eButton = JOY_SW_PRESSED;
	}
	else{
		Joy->eButton = JOY_SW_RELEASED;
	}

	// Process X axis
	// Converts Raw value from 0~4095 to 0~200
	i32RawTo0to200 = Joy->buffer.u16AdcBuffer[JOYSTICK_AXIS_X_INDEX]*200/JOYSTICK_ADC_MAX_VAL;
	// Converts Raw value from 0~200 to -100~+100
	i32_0to200To100to100 = i32RawTo0to200 - 100;
	Joy->AxisX = i32_0to200To100to100;

	// Process Y axis
	// Converts Raw value from 0~4095 to 0~200
	i32RawTo0to200 = Joy->buffer.u16AdcBuffer[JOYSTICK_AXIS_Y_INDEX]*200/JOYSTICK_ADC_MAX_VAL;
	// Converts Raw value from 0~200 to -100~+100
	i32_0to200To100to100 = i32RawTo0to200 - 100;
	Joy->AxisY = i32_0to200To100to100;
}

/* USER CODE END 0 */

/**
 * @brief  The application entry point.
 * @retval int
 */
int main(void)
{

	/* USER CODE BEGIN 1 */
	uint32_t lvTick6;
	/* USER CODE END 1 */

	/* MCU Configuration--------------------------------------------------------*/

	/* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	HAL_Init();

	/* USER CODE BEGIN Init */

	/* USER CODE END Init */

	/* Configure the system clock */
	SystemClock_Config();

	/* USER CODE BEGIN SysInit */

	/* USER CODE END SysInit */

	/* Initialize all configured peripherals */
	MX_GPIO_Init();
	MX_DMA_Init();
	MX_SPI3_Init();
	MX_TIM9_Init();
	MX_ADC1_Init();
	/* USER CODE BEGIN 2 */
	HAL_Delay(200);

	_screen_init();

	_joystick_init(&Joystick1);
	/* USER CODE END 2 */

	/* Infinite loop */
	/* USER CODE BEGIN WHILE */
	lvTick6 = HAL_GetTick();
	while (1)
	{
		// process lvgl every 6 ms, and refresh the display
		if ((HAL_GetTick() - lvTick6) > 6){
			lv_task_handler();
			ST7920_Update();
		}

		_joystick_process(&Joystick1);
		screen_upd_joystick(Joystick1.AxisX, Joystick1.AxisY, Joystick1.eButton);
		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */
	}
	/* USER CODE END 3 */
}

/**
 * @brief System Clock Configuration
 * @retval None
 */
void SystemClock_Config(void)
{
	RCC_OscInitTypeDef RCC_OscInitStruct = {0};
	RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

	/** Configure the main internal regulator output voltage
	 */
	__HAL_RCC_PWR_CLK_ENABLE();
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/** Initializes the RCC Oscillators according to the specified parameters
	 * in the RCC_OscInitTypeDef structure.
	 */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 12;
	RCC_OscInitStruct.PLL.PLLN = 96;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 4;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
	{
		Error_Handler();
	}

	/** Initializes the CPU, AHB and APB buses clocks
	 */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
			|RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3) != HAL_OK)
	{
		Error_Handler();
	}
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 */
void Error_Handler(void)
{
	/* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1)
	{
	}
	/* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t *file, uint32_t line)
{
	/* USER CODE BEGIN 6 */
	/* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
	/* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
