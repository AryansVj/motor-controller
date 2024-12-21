/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define INC_Btn_Pin GPIO_PIN_1
#define INC_Btn_GPIO_Port GPIOA
#define INC_Btn_EXTI_IRQn EXTI1_IRQn
#define DEC_Btn_Pin GPIO_PIN_2
#define DEC_Btn_GPIO_Port GPIOA
#define DEC_Btn_EXTI_IRQn EXTI2_IRQn
#define RESET_Btn_Pin GPIO_PIN_3
#define RESET_Btn_GPIO_Port GPIOA
#define RESET_Btn_EXTI_IRQn EXTI3_IRQn
#define FAULT_COND_Pin GPIO_PIN_4
#define FAULT_COND_GPIO_Port GPIOA
#define FAULT_COND_EXTI_IRQn EXTI4_IRQn
#define LED_DS_Pin GPIO_PIN_10
#define LED_DS_GPIO_Port GPIOA
#define LED_SHCP_Pin GPIO_PIN_11
#define LED_SHCP_GPIO_Port GPIOA
#define LED_STCP_Pin GPIO_PIN_12
#define LED_STCP_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
