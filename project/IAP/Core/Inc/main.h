/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"
#include "stm32g0xx_ll_crc.h"
#include "stm32g0xx_ll_iwdg.h"
#include "stm32g0xx_ll_rcc.h"
#include "stm32g0xx_ll_bus.h"
#include "stm32g0xx_ll_system.h"
#include "stm32g0xx_ll_exti.h"
#include "stm32g0xx_ll_cortex.h"
#include "stm32g0xx_ll_utils.h"
#include "stm32g0xx_ll_pwr.h"
#include "stm32g0xx_ll_dma.h"
#include "stm32g0xx_ll_rtc.h"
#include "stm32g0xx_ll_usart.h"
#include "stm32g0xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//extern ADC_HandleTypeDef hadc1;
//extern IWDG_HandleTypeDef hiwdg;
//extern UART_HandleTypeDef huart1;
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY1_Pin LL_GPIO_PIN_13
#define KEY1_GPIO_Port GPIOC
#define KEY1_EXTI_IRQn EXTI4_15_IRQn
#define LED1_Pin LL_GPIO_PIN_4
#define LED1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define   feed_dog()        LL_IWDG_ReloadCounter(IWDG)
  #define DIGITAL_SCALE_12BITS             ((uint32_t) 0xFFF)
  /* Init variable out of ADC expected conversion data range */
  #define VAR_CONVERTED_DATA_INIT_VALUE    (DIGITAL_SCALE_12BITS + 1)
  /* Definition of ADCx conversions data table size */
  #define ADC_CONVERTED_DATA_BUFFER_SIZE   ((uint32_t)  8)
//extern RTC_HandleTypeDef hrtc;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
