/*
 * ATmega32_GPIO.c
 *
 *  Created on: Nov 22, 2022
 *      Author: Mahmoud Mohamed Youness
 */
/*===============================================================================*/
/*									Includes									 */
/*===============================================================================*/
/*! Standard C libraries */
#include <stdio.h>
#include <stdint.h>

/*! AVR header files */
#include <avr/io.h>

/*===============================================================================*/
/*								  Typedef structs     							 */
/*===============================================================================*/

/*===============================================================================*/
/*								 Local variables     							 */
/*===============================================================================*/
/*! Output Port */
static volatile uint8_t* OUT_PORT[4] = {
		&PORTA,
		&PORTB,
		&PORTC,
		&PORTD
};

/*! Input Port */
static volatile uint8_t* IN_PORT[4] = {
		&PINA,
		&PINB,
		&PINC,
		&PIND
};

/*! Data direction Port */
static volatile uint8_t* DDR_PORT[4] = {
		&DDRA,
		&DDRB,
		&DDRC,
		&DDRD
};

/*! Pull-up Port */
static volatile uint8_t* PULLUP_PORT[4] = {
		&PORTA,
		&PORTB,
		&PORTC,
		&PORTD
};
