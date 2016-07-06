/*
 * leds.h
 *
 *  Created on: May 4, 2016
 *      Author: sinanyil81
 */

#ifndef MCU_LEDS_H_
#define MCU_LEDS_H_

/*---------------------------------------------------
 * Port Definitions for the LEDS on MSP430FR5969
 * evaluation board
 ---------------------------------------------------*/
#define LED2 BIT0
//#define LED1 BIT6
#define LED1 BIT0
#define LED2_OUT P1OUT
#define LED2_DIR P1DIR
#define LED1_OUT P4OUT
#define LED1_DIR P4DIR


/*---------------------------------------------------
 * Macros for easy access to the LEDs on the board.
 ---------------------------------------------------*/
#define led_init(led) led##_DIR |= led; \
	led##_OUT &= ~led;

#define led_on(led) led##_OUT |= led;
#define led_off(led) led##_OUT &= ~led;
#define led_toggle(led) led##_OUT ^= led;

#endif /* MCU_LEDS_H_ */
