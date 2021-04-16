/*
 * defines.h
 *
 *  Created on: 13 ���. 2019 �.
 *      Author: Andriy
 */

#ifndef DEFINES_H_
#define DEFINES_H_

#include "main.h"

#define CCMRAM __attribute__((section(".ccmram")))

#define UART_PRINTF	huart2

extern UART_HandleTypeDef UART_PRINTF;

int _write(int file, char *ptr, int len);

int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(&UART_PRINTF, (uint8_t *) ptr, len, HAL_MAX_DELAY);
	//HAL_UART_Transmit_DMA(&UART_PRINTF, (uint8_t *) ptr, len);
	return len;
}
#endif /* DEFINES_H_ */
