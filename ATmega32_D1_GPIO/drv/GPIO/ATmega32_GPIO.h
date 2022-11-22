/*
 * ATmega32_GPIO.h
 *
 *  Created on: Nov 22, 2022
 *      Author: Mahmoud Mohamed Youness
 */

#ifndef DRV_GPIO_ATMEGA32_GPIO_H_
#define DRV_GPIO_ATMEGA32_GPIO_H_
/*===============================================================================*/
/*									Includes									 */
/*===============================================================================*/
/*! Standard C libraries */
#include <stdio.h>
#include <stdint.h>

/*! ATmega32 GPIO header file */
#include "ATmega32_GPIO.h"

/*===============================================================================*/
/*								  Typedef enums     							 */
/*===============================================================================*/
// Data direction register value.
typedef enum{
	GPIO_DDR_INPUT  = 0,
	GPIO_DDR_OUTPUT = 1
}E_GPIO_DDR_type_t;

// Output register value.
typedef enum{
	GPIO_OUTPUT_LOW  = 0,
	GPIO_OUTPUT_HIGH = 1
}E_GPIO_output_type_t;

// Enable or disable Pull-up resistors in the input state.
typedef enum{
	GPIO_INPUT_DISABLE_PULLUP = 0,
	GPIO_INPUT_ENABLE_PULLUP  = 1
}E_GPIO_pullUP_t;

/*===============================================================================*/
/*						    Global Function prototype							 */
/*===============================================================================*/
// Configure the pin as output.
void GPIO_configOutput(uint8_t gpioId, E_GPIO_output_type_t e_initialState_t);

// Configure the pin as input.
void GPIO_configInput(uint8_t gpioId, E_GPIO_pullUP_t e_pullupState_t);

//
E_GPIO_DDR_type_t GPIO_getPinState(uint8_t gpioId);

//
void GPIO_setOutputValue(uint8_t gpioId, E_GPIO_output_type_t e_outputValue_t);

//
uint8_t GPIO_getOutputValue(uint8_t gpioId);

//
void GPIO_togglePin(uint8_t gpioId);

//
uint8_t GPIO_readInputValue(uint8_t gpioId);

//
void GPIO_inputPin_enablePullup(uint8_t gpioId);

//
void GPIO_inputPin_disablePullup(uint8_t gpioId);

#endif /* DRV_GPIO_ATMEGA32_GPIO_H_ */
